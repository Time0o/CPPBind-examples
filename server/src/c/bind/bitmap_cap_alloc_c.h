#ifndef GUARD_BITMAP_CAP_ALLOC_C_H
#define GUARD_BITMAP_CAP_ALLOC_C_H

#ifdef __cplusplus
extern "C" {
#endif

#include "cppbind/c/c_bind_error_c.h"

struct l4_re_util_cap_alloc_base;

struct l4_re_util_cap_alloc_base
{
  union {
    char mem[32];
    void *ptr;
  } obj;

  char is_initialized;
  char is_const;
  char is_owning;
};

struct l4_re_util_cap_alloc_base l4_re_util_cap_alloc_base_new(long max, void * mem, long bias);

long l4_re_util_cap_alloc_base_hint(const struct l4_re_util_cap_alloc_base * __self);

long l4_re_util_cap_alloc_base_last(struct l4_re_util_cap_alloc_base * __self);

void l4_re_util_cap_alloc_base_delete(struct l4_re_util_cap_alloc_base * __self);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // GUARD_BITMAP_CAP_ALLOC_C_H