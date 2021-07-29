#include <cassert>
#include <cerrno>
#include <exception>
#include <stdexcept>
#include <utility>

#include "cppbind/c/c_bind_error_cc.h"
#include "cppbind/c/c_util_cc.h"

#include "/home/timo/github/projects/l4re/l4/pkg/l4re-core/l4re/include/env"
#include "/home/timo/github/projects/l4re/l4/pkg/cppbind-examples/shared/example_kobject_shared.h"

extern "C" {

#include "/home/timo/github/projects/l4re/l4/pkg/cppbind-examples/server/src/rust/src/bind/env_c.h"

struct l4_cap_dummy_kobject
{
  union {
    char mem[8];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_cap_factory
{
  union {
    char mem[8];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_cap_scheduler
{
  union {
    char mem[8];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_cap_task
{
  union {
    char mem[8];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_cap_thread
{
  union {
    char mem[8];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_cap_log
{
  union {
    char mem[8];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_cap_mem_alloc
{
  union {
    char mem[8];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_cap_parent
{
  union {
    char mem[8];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_cap_rm
{
  union {
    char mem[8];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_re_env l4_re_env_env(void)
{
  using namespace L4Re;

  auto __out = L4Re::Env::env();

  struct l4_re_env __ret;

  struct l4_re_env __tmp;
  cppbind::c::make_non_owning_struct(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_parent l4_re_env_parent_1(const struct l4_re_env * __self)
{
  using namespace L4Re;

  const L4Re::Env * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  auto __out = ___self->parent();

  struct l4_cap_parent __ret;

  struct l4_cap_parent __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4Re::Parent>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_mem_alloc l4_re_env_mem_alloc_1(const struct l4_re_env * __self)
{
  using namespace L4Re;

  const L4Re::Env * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  auto __out = ___self->mem_alloc();

  struct l4_cap_mem_alloc __ret;

  struct l4_cap_mem_alloc __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4Re::Mem_alloc>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_factory l4_re_env_user_factory(const struct l4_re_env * __self)
{
  using namespace L4Re;

  const L4Re::Env * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  auto __out = ___self->user_factory();

  struct l4_cap_factory __ret;

  struct l4_cap_factory __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4::Factory>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_rm l4_re_env_rm_1(const struct l4_re_env * __self)
{
  using namespace L4Re;

  const L4Re::Env * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  auto __out = ___self->rm();

  struct l4_cap_rm __ret;

  struct l4_cap_rm __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4Re::Rm>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_log l4_re_env_log_1(const struct l4_re_env * __self)
{
  using namespace L4Re;

  const L4Re::Env * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  auto __out = ___self->log();

  struct l4_cap_log __ret;

  struct l4_cap_log __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4Re::Log>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_thread l4_re_env_main_thread_1(const struct l4_re_env * __self)
{
  using namespace L4Re;

  const L4Re::Env * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  auto __out = ___self->main_thread();

  struct l4_cap_thread __ret;

  struct l4_cap_thread __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4::Thread>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_task l4_re_env_task(const struct l4_re_env * __self)
{
  using namespace L4Re;

  const L4Re::Env * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  auto __out = ___self->task();

  struct l4_cap_task __ret;

  struct l4_cap_task __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4::Task>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_factory l4_re_env_factory_1(const struct l4_re_env * __self)
{
  using namespace L4Re;

  const L4Re::Env * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  auto __out = ___self->factory();

  struct l4_cap_factory __ret;

  struct l4_cap_factory __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4::Factory>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

l4_cap_idx_t l4_re_env_first_free_cap_1(const struct l4_re_env * __self)
{
  using namespace L4Re;

  const L4Re::Env * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  auto __out = ___self->first_free_cap();

  l4_cap_idx_t __ret;

  __ret = __out;

  return __ret;
}

l4_addr_t l4_re_env_first_free_utcb_1(const struct l4_re_env * __self)
{
  using namespace L4Re;

  const L4Re::Env * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  auto __out = ___self->first_free_utcb();

  l4_addr_t __ret;

  __ret = __out;

  return __ret;
}

void l4_re_env_parent_2(struct l4_re_env * __self, const struct l4_cap_parent * c)
{
  using namespace L4Re;

  L4Re::Env * ___self;
  const L4::Cap<L4Re::Parent> * _c;

  ___self = cppbind::c::struct_cast<L4Re::Env>(__self);

  _c = cppbind::c::struct_cast<const L4::Cap<L4Re::Parent>>(c);

  ___self->parent(*_c);
}

void l4_re_env_mem_alloc_2(struct l4_re_env * __self, const struct l4_cap_mem_alloc * c)
{
  using namespace L4Re;

  L4Re::Env * ___self;
  const L4::Cap<L4Re::Mem_alloc> * _c;

  ___self = cppbind::c::struct_cast<L4Re::Env>(__self);

  _c = cppbind::c::struct_cast<const L4::Cap<L4Re::Mem_alloc>>(c);

  ___self->mem_alloc(*_c);
}

void l4_re_env_rm_2(struct l4_re_env * __self, const struct l4_cap_rm * c)
{
  using namespace L4Re;

  L4Re::Env * ___self;
  const L4::Cap<L4Re::Rm> * _c;

  ___self = cppbind::c::struct_cast<L4Re::Env>(__self);

  _c = cppbind::c::struct_cast<const L4::Cap<L4Re::Rm>>(c);

  ___self->rm(*_c);
}

void l4_re_env_log_2(struct l4_re_env * __self, const struct l4_cap_log * c)
{
  using namespace L4Re;

  L4Re::Env * ___self;
  const L4::Cap<L4Re::Log> * _c;

  ___self = cppbind::c::struct_cast<L4Re::Env>(__self);

  _c = cppbind::c::struct_cast<const L4::Cap<L4Re::Log>>(c);

  ___self->log(*_c);
}

void l4_re_env_main_thread_2(struct l4_re_env * __self, const struct l4_cap_thread * c)
{
  using namespace L4Re;

  L4Re::Env * ___self;
  const L4::Cap<L4::Thread> * _c;

  ___self = cppbind::c::struct_cast<L4Re::Env>(__self);

  _c = cppbind::c::struct_cast<const L4::Cap<L4::Thread>>(c);

  ___self->main_thread(*_c);
}

void l4_re_env_factory_2(struct l4_re_env * __self, const struct l4_cap_factory * c)
{
  using namespace L4Re;

  L4Re::Env * ___self;
  const L4::Cap<L4::Factory> * _c;

  ___self = cppbind::c::struct_cast<L4Re::Env>(__self);

  _c = cppbind::c::struct_cast<const L4::Cap<L4::Factory>>(c);

  ___self->factory(*_c);
}

void l4_re_env_first_free_cap_2(struct l4_re_env * __self, l4_cap_idx_t c)
{
  using namespace L4Re;

  L4Re::Env * ___self;
  l4_cap_idx_t _c;

  ___self = cppbind::c::struct_cast<L4Re::Env>(__self);

  _c = c;

  ___self->first_free_cap(_c);
}

void l4_re_env_first_free_utcb_2(struct l4_re_env * __self, l4_addr_t u)
{
  using namespace L4Re;

  L4Re::Env * ___self;
  l4_addr_t _u;

  ___self = cppbind::c::struct_cast<L4Re::Env>(__self);

  _u = u;

  ___self->first_free_utcb(_u);
}

struct l4_cap_scheduler l4_re_env_scheduler_1(const struct l4_re_env * __self)
{
  using namespace L4Re;

  const L4Re::Env * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  auto __out = ___self->scheduler();

  struct l4_cap_scheduler __ret;

  struct l4_cap_scheduler __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4::Scheduler>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

void l4_re_env_scheduler_2(struct l4_re_env * __self, const struct l4_cap_scheduler * c)
{
  using namespace L4Re;

  L4Re::Env * ___self;
  const L4::Cap<L4::Scheduler> * _c;

  ___self = cppbind::c::struct_cast<L4Re::Env>(__self);

  _c = cppbind::c::struct_cast<const L4::Cap<L4::Scheduler>>(c);

  ___self->scheduler(*_c);
}

struct l4_re_env l4_re_env_new(void)
{
  using namespace L4Re;

  char __buf[88];

  auto __out = new (__buf) L4Re::Env();

  struct l4_re_env __ret;

  static_cast<void>(__out);

  struct l4_re_env __tmp;
  cppbind::c::make_owning_struct_mem<L4Re::Env>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

void l4_re_env_delete(const struct l4_re_env * __self)
{
  using namespace L4Re;

  const L4Re::Env * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  ___self->~Env();
}

struct l4_cap_dummy_kobject l4_re_env_get_cap_dummy_kobject_1(const struct l4_re_env * __self, const char * name, unsigned int l)
{
  using namespace L4Re;

  const L4Re::Env * ___self;
  const char * _name;
  unsigned int _l;

  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  _name = name;

  _l = l;

  auto __out = ___self->get_cap<Dummy_kobject>(_name, _l);

  struct l4_cap_dummy_kobject __ret;

  struct l4_cap_dummy_kobject __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<Dummy_kobject>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_dummy_kobject l4_re_env_get_cap_dummy_kobject_2(const struct l4_re_env * __self, const char * name)
{
  using namespace L4Re;

  const L4Re::Env * ___self;
  const char * _name;

  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  _name = name;

  auto __out = ___self->get_cap<Dummy_kobject>(_name);

  struct l4_cap_dummy_kobject __ret;

  struct l4_cap_dummy_kobject __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<Dummy_kobject>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

} // extern "C"