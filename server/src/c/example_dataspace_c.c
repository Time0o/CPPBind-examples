#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cap_alloc_c.h"
#include "capability_c.h"
#include "consts_c.h"
#include "counting_cap_alloc_c.h"
#include "dataspace_c.h"
#include "env_c.h"
#include "mem_alloc_c.h"
#include "rm_c.h"

char str[] =
  "Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod "
  "tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At "
  "vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd "
  "gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum "
  "dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor "
  "invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero "
  "eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no "
  "sea takimata sanctus est Lorem ipsum dolor sit amet.";

/* NOTE: We use these helper structs to avoid having to frequently call
 * l4_cap_*_access below.
 */
#define KOBJ(t) \
  typedef struct kobj_ ## t { \
    l4_cap_idx_t cap; \
    struct l4_re_ ## t obj; \
  } kobj_ ## t;

#define MAKE_KOBJ(t, cap) {cap, l4_cap_ ## t ## _access(cap)}

KOBJ(dataspace)
KOBJ(mem_alloc)
KOBJ(rm)

static kobj_dataspace alloc(kobj_mem_alloc *ma,
                            l4_re_dataspace_size_t size)
{
  l4_re_util_cap_alloc_t cap_alloc = l4_re_util_get_cap_alloc();
  l4_cap_idx_t ds_cap = l4_re_util_counting_cap_alloc_counter_alloc_dataspace(&cap_alloc);

  kobj_dataspace ds = MAKE_KOBJ(dataspace, ds_cap);

  assert(l4_re_mem_alloc_alloc(&ma->obj,
                               size,
                               ds.cap,
                               0,
                               0) == 0);

  assert(l4_re_dataspace_allocate(&ds.obj, 0, size) == 0);

  return ds;
}

static l4_addr_t reserve(kobj_rm *rm,
                         l4_re_dataspace_size_t size)
{
  l4_addr_t start;

  assert(l4_re_rm_reserve_area(&rm->obj,
                               &start,
                               size,
                               L4_RE_RM_F_SEARCH_ADDR,
                               get_l4_pageshift()) == 0);

  return start;
}

static void map(kobj_dataspace *ds,
                l4_re_dataspace_map_addr_t addr,
                unsigned flags)
{
  assert(l4_re_dataspace_map_region(&ds->obj,
                                    0,
                                    flags,
                                    addr,
                                    addr + l4_re_dataspace_size(&ds->obj)) == 0);
}

static void *attach(kobj_rm *rm,
                    kobj_dataspace *ds,
                    l4_uint_32_t flags)
{
  void *start = NULL;

  assert(l4_re_rm_attach_void(&rm->obj,
                              &start,
                              l4_re_dataspace_size(&ds->obj),
                              L4_RE_RM_F_SEARCH_ADDR | flags,
                              ds->cap,
                              0,
                              get_l4_pageshift()) == 0);

  return start;
}

int main(void)
{
  // environment
  struct l4_re_env env = l4_re_env_env();

  l4_cap_idx_t ma_cap = l4_re_env_mem_alloc_1(&env);
  kobj_mem_alloc ma = MAKE_KOBJ(mem_alloc, ma_cap);

  l4_cap_idx_t rm_cap = l4_re_env_rm_1(&env);
  kobj_rm rm = MAKE_KOBJ(rm, rm_cap);

  // create dataspace
  kobj_dataspace ds = alloc(&ma, sizeof(str));

  l4_re_dataspace_size_t ds_size = l4_re_dataspace_size(&ds.obj);
  assert(ds_size == sizeof(str));

  struct l4_re_dataspace_flags ds_flags = l4_re_dataspace_flags(&ds.obj);
  unsigned long ds_rights = l4_re_dataspace_flags_fpage_rights(&ds_flags);
  assert(ds_rights == L4_RE_DATASPACE_F_RWX);

  // map dataspace
  l4_addr_t ds_start = reserve(&rm, ds_size);

  map(&ds, ds_start, L4_RE_DATASPACE_F_RW);

  memcpy((void *)ds_start, str, ds_size);
  assert(strcmp((char *)ds_start, str) == 0);

  // clear dataspace
  l4_re_dataspace_clear(&ds.obj, 0, ds_size);

  // copy in another dataspace
  kobj_dataspace ds_copy_in = alloc(&ma, sizeof(str));

  void *ds_copy_in_start = attach(&rm, &ds_copy_in, L4_RE_RM_F_RW);
  memcpy(ds_copy_in_start, str, ds_size);

  l4_re_dataspace_copy_in(&ds.obj, 0, ds_copy_in.cap, 0, ds_size);
  assert(strcmp((char *)ds_start, str) == 0);

  puts("C program: success");

  return EXIT_SUCCESS;
}
