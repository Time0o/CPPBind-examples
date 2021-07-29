#ifndef GUARD_COUNTING_CAP_ALLOC_C_H
#define GUARD_COUNTING_CAP_ALLOC_C_H

#ifdef __cplusplus
extern "C" {
#endif

#include "cppbind/c/c_bind_error_c.h"

typedef unsigned long l4_cap_idx_t;

struct l4_re_util_counting_cap_alloc_counter;

struct l4_re_util_counting_cap_alloc_counter
{
  union {
    char mem[32];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

l4_cap_idx_t l4_re_util_counting_cap_alloc_counter_alloc(struct l4_re_util_counting_cap_alloc_counter * __self);

void l4_re_util_counting_cap_alloc_counter_take(struct l4_re_util_counting_cap_alloc_counter * __self, l4_cap_idx_t cap);

int l4_re_util_counting_cap_alloc_counter_free(struct l4_re_util_counting_cap_alloc_counter * __self, l4_cap_idx_t cap, l4_cap_idx_t task, unsigned int unmap_flags);

int l4_re_util_counting_cap_alloc_counter_release(struct l4_re_util_counting_cap_alloc_counter * __self, l4_cap_idx_t cap, l4_cap_idx_t task, unsigned int unmap_flags);

long l4_re_util_counting_cap_alloc_counter_last(struct l4_re_util_counting_cap_alloc_counter * __self);

void l4_re_util_counting_cap_alloc_counter_delete(const struct l4_re_util_counting_cap_alloc_counter * __self);

l4_cap_idx_t l4_re_util_counting_cap_alloc_counter_alloc_dataspace(struct l4_re_util_counting_cap_alloc_counter * __self);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // GUARD_COUNTING_CAP_ALLOC_C_H