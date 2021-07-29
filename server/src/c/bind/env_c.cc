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

#include "/home/timo/github/projects/l4re/l4/pkg/cppbind-examples/server/src/c/bind/env_c.h"

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

l4_cap_idx_t l4_re_env_parent_1(const struct l4_re_env * __self)
{
  using namespace L4Re;

  const L4Re::Env * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  auto __out = ___self->parent();

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

l4_cap_idx_t l4_re_env_mem_alloc_1(const struct l4_re_env * __self)
{
  using namespace L4Re;

  const L4Re::Env * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  auto __out = ___self->mem_alloc();

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

l4_cap_idx_t l4_re_env_user_factory(const struct l4_re_env * __self)
{
  using namespace L4Re;

  const L4Re::Env * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  auto __out = ___self->user_factory();

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

l4_cap_idx_t l4_re_env_rm_1(const struct l4_re_env * __self)
{
  using namespace L4Re;

  const L4Re::Env * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  auto __out = ___self->rm();

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

l4_cap_idx_t l4_re_env_log_1(const struct l4_re_env * __self)
{
  using namespace L4Re;

  const L4Re::Env * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  auto __out = ___self->log();

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

l4_cap_idx_t l4_re_env_main_thread_1(const struct l4_re_env * __self)
{
  using namespace L4Re;

  const L4Re::Env * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  auto __out = ___self->main_thread();

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

l4_cap_idx_t l4_re_env_task(const struct l4_re_env * __self)
{
  using namespace L4Re;

  const L4Re::Env * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  auto __out = ___self->task();

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

l4_cap_idx_t l4_re_env_factory_1(const struct l4_re_env * __self)
{
  using namespace L4Re;

  const L4Re::Env * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  auto __out = ___self->factory();

  l4_cap_idx_t __ret;

  return __out.cap();

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

void l4_re_env_parent_2(struct l4_re_env * __self, l4_cap_idx_t c)
{
  using namespace L4Re;

  L4Re::Env * ___self;
  const L4::Cap<L4Re::Parent> * _c;

  ___self = cppbind::c::struct_cast<L4Re::Env>(__self);

  auto __c = L4::Cap<L4Re::Parent>(c);
  _c = &__c;

  ___self->parent(*_c);
}

void l4_re_env_mem_alloc_2(struct l4_re_env * __self, l4_cap_idx_t c)
{
  using namespace L4Re;

  L4Re::Env * ___self;
  const L4::Cap<L4Re::Mem_alloc> * _c;

  ___self = cppbind::c::struct_cast<L4Re::Env>(__self);

  auto __c = L4::Cap<L4Re::Mem_alloc>(c);
  _c = &__c;

  ___self->mem_alloc(*_c);
}

void l4_re_env_rm_2(struct l4_re_env * __self, l4_cap_idx_t c)
{
  using namespace L4Re;

  L4Re::Env * ___self;
  const L4::Cap<L4Re::Rm> * _c;

  ___self = cppbind::c::struct_cast<L4Re::Env>(__self);

  auto __c = L4::Cap<L4Re::Rm>(c);
  _c = &__c;

  ___self->rm(*_c);
}

void l4_re_env_log_2(struct l4_re_env * __self, l4_cap_idx_t c)
{
  using namespace L4Re;

  L4Re::Env * ___self;
  const L4::Cap<L4Re::Log> * _c;

  ___self = cppbind::c::struct_cast<L4Re::Env>(__self);

  auto __c = L4::Cap<L4Re::Log>(c);
  _c = &__c;

  ___self->log(*_c);
}

void l4_re_env_main_thread_2(struct l4_re_env * __self, l4_cap_idx_t c)
{
  using namespace L4Re;

  L4Re::Env * ___self;
  const L4::Cap<L4::Thread> * _c;

  ___self = cppbind::c::struct_cast<L4Re::Env>(__self);

  auto __c = L4::Cap<L4::Thread>(c);
  _c = &__c;

  ___self->main_thread(*_c);
}

void l4_re_env_factory_2(struct l4_re_env * __self, l4_cap_idx_t c)
{
  using namespace L4Re;

  L4Re::Env * ___self;
  const L4::Cap<L4::Factory> * _c;

  ___self = cppbind::c::struct_cast<L4Re::Env>(__self);

  auto __c = L4::Cap<L4::Factory>(c);
  _c = &__c;

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

l4_cap_idx_t l4_re_env_scheduler_1(const struct l4_re_env * __self)
{
  using namespace L4Re;

  const L4Re::Env * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  auto __out = ___self->scheduler();

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

void l4_re_env_scheduler_2(struct l4_re_env * __self, l4_cap_idx_t c)
{
  using namespace L4Re;

  L4Re::Env * ___self;
  const L4::Cap<L4::Scheduler> * _c;

  ___self = cppbind::c::struct_cast<L4Re::Env>(__self);

  auto __c = L4::Cap<L4::Scheduler>(c);
  _c = &__c;

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

l4_cap_idx_t l4_re_env_get_cap_dummy_kobject_1(const struct l4_re_env * __self, const char * name, unsigned int l)
{
  using namespace L4Re;

  const L4Re::Env * ___self;
  const char * _name;
  unsigned int _l;

  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  _name = name;

  _l = l;

  auto __out = ___self->get_cap<Dummy_kobject>(_name, _l);

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

l4_cap_idx_t l4_re_env_get_cap_dummy_kobject_2(const struct l4_re_env * __self, const char * name)
{
  using namespace L4Re;

  const L4Re::Env * ___self;
  const char * _name;

  ___self = cppbind::c::struct_cast<const L4Re::Env>(__self);

  _name = name;

  auto __out = ___self->get_cap<Dummy_kobject>(_name);

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

} // extern "C"