#ifndef GUARD_MEM_ALLOC_C_H
#define GUARD_MEM_ALLOC_C_H

#ifdef __cplusplus
extern "C" {
#endif

#include "cppbind/c/c_bind_error_c.h"

struct l4_cap_dataspace;
struct l4_re_mem_alloc;

struct l4_re_mem_alloc
{
  union {
    char mem[1];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

enum l4_re_mem_alloc_mem_alloc_flags {
  L4_RE_MEM_ALLOC_CONTINUOUS = 1ULL,
  L4_RE_MEM_ALLOC_PINNED = 2ULL,
  L4_RE_MEM_ALLOC_SUPER_PAGES = 4ULL
};

long l4_re_mem_alloc_alloc(const struct l4_re_mem_alloc * __self, long size, const struct l4_cap_dataspace * mem, unsigned long flags, unsigned long align);

long l4_re_mem_alloc_free(const struct l4_re_mem_alloc * __self, const struct l4_cap_dataspace * mem);

void l4_re_mem_alloc_delete(const struct l4_re_mem_alloc * __self);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // GUARD_MEM_ALLOC_C_H