#ifndef GUARD_IPC_TYPES_C_H
#define GUARD_IPC_TYPES_C_H

#ifdef __cplusplus
extern "C" {
#endif

#include "cppbind/c/c_bind_error_c.h"

typedef unsigned long l4_cap_idx_t;

struct l4_cap_dataspace;
struct l4_ipc_cap_dataspace;

struct l4_ipc_cap_dataspace
{
  union {
    char mem[8];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_ipc_cap_dataspace l4_ipc_cap_dataspace_new_1(const struct l4_cap_dataspace * cap);

struct l4_ipc_cap_dataspace l4_ipc_cap_dataspace_new_2(void);

struct l4_ipc_cap_dataspace l4_ipc_cap_dataspace_new_3(const struct l4_cap_dataspace * cap, unsigned char rights);

struct l4_ipc_cap_dataspace l4_ipc_cap_dataspace_from_ci(l4_cap_idx_t c);

struct l4_cap_dataspace l4_ipc_cap_dataspace_cap(const struct l4_ipc_cap_dataspace * __self);

unsigned int l4_ipc_cap_dataspace_rights(const struct l4_ipc_cap_dataspace * __self);

int l4_ipc_cap_dataspace_is_valid(const struct l4_ipc_cap_dataspace * __self);

struct l4_ipc_cap_dataspace l4_ipc_cap_dataspace_copy(const struct l4_ipc_cap_dataspace * _1);

struct l4_ipc_cap_dataspace l4_ipc_cap_dataspace_move(struct l4_ipc_cap_dataspace * _1);

void l4_ipc_cap_dataspace_delete(const struct l4_ipc_cap_dataspace * __self);

struct l4_ipc_cap_dataspace l4_ipc_cap_dataspace_new_dataspace(const struct l4_ipc_cap_dataspace * o);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // GUARD_IPC_TYPES_C_H