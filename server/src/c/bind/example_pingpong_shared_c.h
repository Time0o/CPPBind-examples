#ifndef GUARD_EXAMPLE_PINGPONG_SHARED_C_H
#define GUARD_EXAMPLE_PINGPONG_SHARED_C_H

#ifdef __cplusplus
extern "C" {
#endif

#include "cppbind/c/c_bind_error_c.h"

typedef unsigned long l4_cap_idx_t;
typedef int l4_int_32_t;

struct pseudo_cap_ping_pong;
struct pseudo_cap_base;
struct pseudo_ping_pong;

struct pseudo_cap_ping_pong
{
  union {
    char mem[8];
    void *ptr;
  } obj;

  char is_initialized;
  char is_const;
  char is_owning;
};

struct pseudo_cap_base
{
  union {
    char mem[8];
    void *ptr;
  } obj;

  char is_initialized;
  char is_const;
  char is_owning;
};

struct pseudo_ping_pong
{
  union {
    char mem[1];
    void *ptr;
  } obj;

  char is_initialized;
  char is_const;
  char is_owning;
};

int pseudo_ping_pong_ping(const struct pseudo_ping_pong * __self, l4_int_32_t arg, l4_int_32_t * res);

struct pseudo_ping_pong pseudo_ping_pong_new(void);

void pseudo_ping_pong_delete(const struct pseudo_ping_pong * __self);

struct pseudo_cap_base pseudo_cap_base_new(l4_cap_idx_t c);

struct pseudo_cap_base pseudo_cap_base_copy(const struct pseudo_cap_base * _1);

struct pseudo_cap_base pseudo_cap_base_move(struct pseudo_cap_base * _1);

void pseudo_cap_base_delete(const struct pseudo_cap_base * __self);

struct pseudo_cap_ping_pong pseudo_cap_ping_pong_new(const struct pseudo_ping_pong * p);

struct pseudo_ping_pong pseudo_cap_ping_pong_access(const struct pseudo_cap_ping_pong * __self);

void pseudo_cap_ping_pong_delete(const struct pseudo_cap_ping_pong * __self);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // GUARD_EXAMPLE_PINGPONG_SHARED_C_H