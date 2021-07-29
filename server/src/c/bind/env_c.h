#ifndef GUARD_ENV_C_H
#define GUARD_ENV_C_H

#ifdef __cplusplus
extern "C" {
#endif

#include "cppbind/c/c_bind_error_c.h"

typedef unsigned long l4_addr_t;
typedef unsigned long l4_cap_idx_t;

struct l4_re_env;

struct l4_re_env
{
  union {
    char mem[88];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_re_env l4_re_env_env(void);

l4_cap_idx_t l4_re_env_parent_1(const struct l4_re_env * __self);

l4_cap_idx_t l4_re_env_mem_alloc_1(const struct l4_re_env * __self);

l4_cap_idx_t l4_re_env_user_factory(const struct l4_re_env * __self);

l4_cap_idx_t l4_re_env_rm_1(const struct l4_re_env * __self);

l4_cap_idx_t l4_re_env_log_1(const struct l4_re_env * __self);

l4_cap_idx_t l4_re_env_main_thread_1(const struct l4_re_env * __self);

l4_cap_idx_t l4_re_env_task(const struct l4_re_env * __self);

l4_cap_idx_t l4_re_env_factory_1(const struct l4_re_env * __self);

l4_cap_idx_t l4_re_env_first_free_cap_1(const struct l4_re_env * __self);

l4_addr_t l4_re_env_first_free_utcb_1(const struct l4_re_env * __self);

void l4_re_env_parent_2(struct l4_re_env * __self, l4_cap_idx_t c);

void l4_re_env_mem_alloc_2(struct l4_re_env * __self, l4_cap_idx_t c);

void l4_re_env_rm_2(struct l4_re_env * __self, l4_cap_idx_t c);

void l4_re_env_log_2(struct l4_re_env * __self, l4_cap_idx_t c);

void l4_re_env_main_thread_2(struct l4_re_env * __self, l4_cap_idx_t c);

void l4_re_env_factory_2(struct l4_re_env * __self, l4_cap_idx_t c);

void l4_re_env_first_free_cap_2(struct l4_re_env * __self, l4_cap_idx_t c);

void l4_re_env_first_free_utcb_2(struct l4_re_env * __self, l4_addr_t u);

l4_cap_idx_t l4_re_env_scheduler_1(const struct l4_re_env * __self);

void l4_re_env_scheduler_2(struct l4_re_env * __self, l4_cap_idx_t c);

struct l4_re_env l4_re_env_new(void);

void l4_re_env_delete(const struct l4_re_env * __self);

l4_cap_idx_t l4_re_env_get_cap_dummy_kobject_1(const struct l4_re_env * __self, const char * name, unsigned int l);

l4_cap_idx_t l4_re_env_get_cap_dummy_kobject_2(const struct l4_re_env * __self, const char * name);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // GUARD_ENV_C_H