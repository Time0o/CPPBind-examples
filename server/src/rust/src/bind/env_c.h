#ifndef GUARD_ENV_C_H
#define GUARD_ENV_C_H

#ifdef __cplusplus
extern "C" {
#endif

#include "cppbind/c/c_bind_error_c.h"

typedef unsigned long l4_addr_t;
typedef unsigned long l4_cap_idx_t;

struct l4_cap_dummy_kobject;
struct l4_cap_factory;
struct l4_cap_scheduler;
struct l4_cap_task;
struct l4_cap_thread;
struct l4_cap_log;
struct l4_cap_mem_alloc;
struct l4_cap_parent;
struct l4_cap_rm;
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

struct l4_cap_parent l4_re_env_parent_1(const struct l4_re_env * __self);

struct l4_cap_mem_alloc l4_re_env_mem_alloc_1(const struct l4_re_env * __self);

struct l4_cap_factory l4_re_env_user_factory(const struct l4_re_env * __self);

struct l4_cap_rm l4_re_env_rm_1(const struct l4_re_env * __self);

struct l4_cap_log l4_re_env_log_1(const struct l4_re_env * __self);

struct l4_cap_thread l4_re_env_main_thread_1(const struct l4_re_env * __self);

struct l4_cap_task l4_re_env_task(const struct l4_re_env * __self);

struct l4_cap_factory l4_re_env_factory_1(const struct l4_re_env * __self);

l4_cap_idx_t l4_re_env_first_free_cap_1(const struct l4_re_env * __self);

l4_addr_t l4_re_env_first_free_utcb_1(const struct l4_re_env * __self);

void l4_re_env_parent_2(struct l4_re_env * __self, const struct l4_cap_parent * c);

void l4_re_env_mem_alloc_2(struct l4_re_env * __self, const struct l4_cap_mem_alloc * c);

void l4_re_env_rm_2(struct l4_re_env * __self, const struct l4_cap_rm * c);

void l4_re_env_log_2(struct l4_re_env * __self, const struct l4_cap_log * c);

void l4_re_env_main_thread_2(struct l4_re_env * __self, const struct l4_cap_thread * c);

void l4_re_env_factory_2(struct l4_re_env * __self, const struct l4_cap_factory * c);

void l4_re_env_first_free_cap_2(struct l4_re_env * __self, l4_cap_idx_t c);

void l4_re_env_first_free_utcb_2(struct l4_re_env * __self, l4_addr_t u);

struct l4_cap_scheduler l4_re_env_scheduler_1(const struct l4_re_env * __self);

void l4_re_env_scheduler_2(struct l4_re_env * __self, const struct l4_cap_scheduler * c);

struct l4_re_env l4_re_env_new(void);

void l4_re_env_delete(const struct l4_re_env * __self);

struct l4_cap_dummy_kobject l4_re_env_get_cap_dummy_kobject_1(const struct l4_re_env * __self, const char * name, unsigned int l);

struct l4_cap_dummy_kobject l4_re_env_get_cap_dummy_kobject_2(const struct l4_re_env * __self, const char * name);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // GUARD_ENV_C_H