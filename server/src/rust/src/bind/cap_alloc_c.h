#ifndef GUARD_CAP_ALLOC_C_H
#define GUARD_CAP_ALLOC_C_H

#ifdef __cplusplus
extern "C" {
#endif

#include "cppbind/c/c_bind_error_c.h"

typedef struct l4_re_util_counting_cap_alloc_counter l4_re_util_cap_alloc_t;

struct l4_re_util_counting_cap_alloc_counter;

l4_re_util_cap_alloc_t l4_re_util_get_cap_alloc(void);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // GUARD_CAP_ALLOC_C_H