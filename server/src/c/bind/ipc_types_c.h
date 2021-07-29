#ifndef GUARD_IPC_TYPES_C_H
#define GUARD_IPC_TYPES_C_H

#ifdef __cplusplus
extern "C" {
#endif

#include "cppbind/c/c_bind_error_c.h"

typedef unsigned long l4_cap_idx_t;

l4_cap_idx_t l4_ipc_cap_dataspace_new_1(l4_cap_idx_t cap);

l4_cap_idx_t l4_ipc_cap_dataspace_new_2(void);

l4_cap_idx_t l4_ipc_cap_dataspace_new_3(l4_cap_idx_t cap, unsigned char rights);

l4_cap_idx_t l4_ipc_cap_dataspace_from_ci(l4_cap_idx_t c);

l4_cap_idx_t l4_ipc_cap_dataspace_cap(l4_cap_idx_t __self);

unsigned int l4_ipc_cap_dataspace_rights(l4_cap_idx_t __self);

int l4_ipc_cap_dataspace_is_valid(l4_cap_idx_t __self);

l4_cap_idx_t l4_ipc_cap_dataspace_copy(l4_cap_idx_t _1);

l4_cap_idx_t l4_ipc_cap_dataspace_move(l4_cap_idx_t _1);

void l4_ipc_cap_dataspace_delete(l4_cap_idx_t __self);

l4_cap_idx_t l4_ipc_cap_dataspace_new_dataspace(l4_cap_idx_t o);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // GUARD_IPC_TYPES_C_H