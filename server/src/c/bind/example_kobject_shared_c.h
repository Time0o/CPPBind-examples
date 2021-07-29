#ifndef GUARD_EXAMPLE_KOBJECT_SHARED_C_H
#define GUARD_EXAMPLE_KOBJECT_SHARED_C_H

#ifdef __cplusplus
extern "C" {
#endif

#include "cppbind/c/c_bind_error_c.h"

struct dummy_kobject;

struct dummy_kobject
{
  union {
    char mem[1];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

void dummy_kobject_delete(const struct dummy_kobject * __self);

int dummy_kobject_call(const struct dummy_kobject * __self, long long a_1, long long a_2, long long * a_3);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // GUARD_EXAMPLE_KOBJECT_SHARED_C_H