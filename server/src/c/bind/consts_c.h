#ifndef GUARD_CONSTS_C_H
#define GUARD_CONSTS_C_H

#ifdef __cplusplus
extern "C" {
#endif

#include "cppbind/c/c_bind_error_c.h"

int get_l4_pageshift(void);

int get_l4_superpageshift(void);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // GUARD_CONSTS_C_H