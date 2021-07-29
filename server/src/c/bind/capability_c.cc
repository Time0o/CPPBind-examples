#include <cassert>
#include <cerrno>
#include <exception>
#include <stdexcept>
#include <utility>

#include "cppbind/c/c_bind_error_cc.h"
#include "cppbind/c/c_util_cc.h"

#include "/home/timo/github/projects/l4re/l4/pkg/l4re-core/l4sys/include/cxx/capability.h"
#include </home/timo/github/projects/l4re/l4/pkg/l4re-core/l4re/include/dataspace>
#include </home/timo/github/projects/l4re/l4/pkg/l4re-core/l4re/include/mem_alloc>
#include </home/timo/github/projects/l4re/l4/pkg/l4re-core/l4re/include/rm>
#include "/home/timo/github/projects/l4re/l4/pkg/cppbind-examples/shared/example_kobject_shared.h"

extern "C" {

#include "/home/timo/github/projects/l4re/l4/pkg/cppbind-examples/server/src/c/bind/capability_c.h"

struct dummy_kobject
{
  union {
    char mem[1];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_re_dataspace
{
  union {
    char mem[4];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_re_mem_alloc
{
  union {
    char mem[1];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_re_rm
{
  union {
    char mem[5];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

l4_cap_idx_t l4_cap_task_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Task>(_cap);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_task_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Task>(_cap);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_task_new_3(l4_cap_idx_t idx)
{
  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  _idx = idx;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Task>(_idx);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_task_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Task>(__1);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_task_move_1(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<L4::Task> * ___self;
  const L4::Cap<L4::Task> * _src;

  auto ____self = L4::Cap<L4::Task>(__self);
  ___self = &____self;

  auto __src = L4::Cap<L4::Task>(src);
  _src = &__src;

  auto __out = ___self->move(*_src);

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

l4_cap_idx_t l4_cap_task_copy_1(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<L4::Task> * ___self;
  const L4::Cap<L4::Task> * _src;

  auto ____self = L4::Cap<L4::Task>(__self);
  ___self = &____self;

  auto __src = L4::Cap<L4::Task>(src);
  _src = &__src;

  auto __out = ___self->copy(*_src);

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

l4_cap_idx_t l4_cap_task_copy_2(l4_cap_idx_t _1)
{
  using namespace L4;

  const L4::Cap<L4::Task> * __1;

  auto ___1 = L4::Cap<L4::Task>(_1);
  __1 = &___1;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Task>(*__1);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_task_move_2(l4_cap_idx_t _1)
{
  using namespace L4;

  L4::Cap<L4::Task> * __1;

  auto ___1 = L4::Cap<L4::Task>(_1);
  __1 = &___1;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Task>(std::move(*__1));

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

void l4_cap_task_delete(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4::Task> * ___self;

  auto ____self = L4::Cap<L4::Task>(__self);
  ___self = &____self;

  ___self->~Cap<L4::Task>();
}

l4_cap_idx_t l4_cap_task_new_task(l4_cap_idx_t o)
{
  using namespace L4;

  const L4::Cap<L4::Task> * _o;

  auto __o = L4::Cap<L4::Task>(o);
  _o = &__o;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Task>(*_o);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_task_cap(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4::Task> * ___self;

  auto ____self = L4::Cap<L4::Task>(__self);
  ___self = &____self;

  auto __out = ___self->cap();

  l4_cap_idx_t __ret;

  __ret = __out;

  return __ret;
}

int l4_cap_task_is_valid(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4::Task> * ___self;

  auto ____self = L4::Cap<L4::Task>(__self);
  ___self = &____self;

  auto __out = ___self->is_valid();

  int __ret;

  __ret = __out;

  return __ret;
}

l4_umword_t l4_cap_task_snd_base(l4_cap_idx_t __self, unsigned int grant, l4_cap_idx_t base)
{
  using namespace L4;

  const L4::Cap<L4::Task> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  auto ____self = L4::Cap<L4::Task>(__self);
  ___self = &____self;

  _grant = grant;

  _base = base;

  auto __out = ___self->snd_base(_grant, _base);

  l4_umword_t __ret;

  __ret = __out;

  return __ret;
}

void l4_cap_task_invalidate(l4_cap_idx_t __self)
{
  using namespace L4;

  L4::Cap<L4::Task> * ___self;

  auto ____self = L4::Cap<L4::Task>(__self);
  ___self = &____self;

  ___self->invalidate();
}

l4_cap_idx_t l4_cap_kobject_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Kobject>(_cap);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_kobject_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Kobject>(_cap);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_kobject_new_3(l4_cap_idx_t idx)
{
  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  _idx = idx;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Kobject>(_idx);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_kobject_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Kobject>(__1);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_kobject_move(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;
  const L4::Cap<L4::Kobject> * _src;

  auto ____self = L4::Cap<L4::Kobject>(__self);
  ___self = &____self;

  auto __src = L4::Cap<L4::Kobject>(src);
  _src = &__src;

  auto __out = ___self->move(*_src);

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

l4_cap_idx_t l4_cap_kobject_copy(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;
  const L4::Cap<L4::Kobject> * _src;

  auto ____self = L4::Cap<L4::Kobject>(__self);
  ___self = &____self;

  auto __src = L4::Cap<L4::Kobject>(src);
  _src = &__src;

  auto __out = ___self->copy(*_src);

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

l4_cap_idx_t l4_cap_kobject_cap(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;

  auto ____self = L4::Cap<L4::Kobject>(__self);
  ___self = &____self;

  auto __out = ___self->cap();

  l4_cap_idx_t __ret;

  __ret = __out;

  return __ret;
}

int l4_cap_kobject_is_valid(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;

  auto ____self = L4::Cap<L4::Kobject>(__self);
  ___self = &____self;

  auto __out = ___self->is_valid();

  int __ret;

  __ret = __out;

  return __ret;
}

l4_umword_t l4_cap_kobject_snd_base(l4_cap_idx_t __self, unsigned int grant, l4_cap_idx_t base)
{
  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  auto ____self = L4::Cap<L4::Kobject>(__self);
  ___self = &____self;

  _grant = grant;

  _base = base;

  auto __out = ___self->snd_base(_grant, _base);

  l4_umword_t __ret;

  __ret = __out;

  return __ret;
}

void l4_cap_kobject_invalidate(l4_cap_idx_t __self)
{
  using namespace L4;

  L4::Cap<L4::Kobject> * ___self;

  auto ____self = L4::Cap<L4::Kobject>(__self);
  ___self = &____self;

  ___self->invalidate();
}

l4_cap_idx_t l4_cap_meta_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Meta>(_cap);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_meta_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Meta>(_cap);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_meta_new_3(l4_cap_idx_t idx)
{
  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  _idx = idx;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Meta>(_idx);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_meta_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Meta>(__1);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_meta_move(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;
  const L4::Cap<L4::Meta> * _src;

  auto ____self = L4::Cap<L4::Meta>(__self);
  ___self = &____self;

  auto __src = L4::Cap<L4::Meta>(src);
  _src = &__src;

  auto __out = ___self->move(*_src);

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

l4_cap_idx_t l4_cap_meta_copy(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;
  const L4::Cap<L4::Meta> * _src;

  auto ____self = L4::Cap<L4::Meta>(__self);
  ___self = &____self;

  auto __src = L4::Cap<L4::Meta>(src);
  _src = &__src;

  auto __out = ___self->copy(*_src);

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

l4_cap_idx_t l4_cap_meta_cap(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;

  auto ____self = L4::Cap<L4::Meta>(__self);
  ___self = &____self;

  auto __out = ___self->cap();

  l4_cap_idx_t __ret;

  __ret = __out;

  return __ret;
}

int l4_cap_meta_is_valid(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;

  auto ____self = L4::Cap<L4::Meta>(__self);
  ___self = &____self;

  auto __out = ___self->is_valid();

  int __ret;

  __ret = __out;

  return __ret;
}

l4_umword_t l4_cap_meta_snd_base(l4_cap_idx_t __self, unsigned int grant, l4_cap_idx_t base)
{
  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  auto ____self = L4::Cap<L4::Meta>(__self);
  ___self = &____self;

  _grant = grant;

  _base = base;

  auto __out = ___self->snd_base(_grant, _base);

  l4_umword_t __ret;

  __ret = __out;

  return __ret;
}

void l4_cap_meta_invalidate(l4_cap_idx_t __self)
{
  using namespace L4;

  L4::Cap<L4::Meta> * ___self;

  auto ____self = L4::Cap<L4::Meta>(__self);
  ___self = &____self;

  ___self->invalidate();
}

l4_cap_idx_t l4_cap_void_new_1(const void * p)
{
  using namespace L4;

  const void * _p;

  _p = p;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<void>(_p);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_void_new_2(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<void>(_cap);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_void_new_3(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<void>(_cap);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_void_new_4(l4_cap_idx_t idx)
{
  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  _idx = idx;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<void>(_idx);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_void_new_5(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<void>(__1);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_void_move_1(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<void> * ___self;
  const L4::Cap<void> * _src;

  auto ____self = L4::Cap<void>(__self);
  ___self = &____self;

  auto __src = L4::Cap<void>(src);
  _src = &__src;

  auto __out = ___self->move(*_src);

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

l4_cap_idx_t l4_cap_void_copy_1(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<void> * ___self;
  const L4::Cap<void> * _src;

  auto ____self = L4::Cap<void>(__self);
  ___self = &____self;

  auto __src = L4::Cap<void>(src);
  _src = &__src;

  auto __out = ___self->copy(*_src);

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

l4_cap_idx_t l4_cap_void_copy_2(l4_cap_idx_t _1)
{
  using namespace L4;

  const L4::Cap<void> * __1;

  auto ___1 = L4::Cap<void>(_1);
  __1 = &___1;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<void>(*__1);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_void_move_2(l4_cap_idx_t _1)
{
  using namespace L4;

  L4::Cap<void> * __1;

  auto ___1 = L4::Cap<void>(_1);
  __1 = &___1;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<void>(std::move(*__1));

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

void l4_cap_void_delete(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<void> * ___self;

  auto ____self = L4::Cap<void>(__self);
  ___self = &____self;

  ___self->~Cap<void>();
}

l4_cap_idx_t l4_cap_void_new_void(l4_cap_idx_t o)
{
  using namespace L4;

  const L4::Cap<void> * _o;

  auto __o = L4::Cap<void>(o);
  _o = &__o;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<void>(*_o);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_void_cap(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<void> * ___self;

  auto ____self = L4::Cap<void>(__self);
  ___self = &____self;

  auto __out = ___self->cap();

  l4_cap_idx_t __ret;

  __ret = __out;

  return __ret;
}

int l4_cap_void_is_valid(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<void> * ___self;

  auto ____self = L4::Cap<void>(__self);
  ___self = &____self;

  auto __out = ___self->is_valid();

  int __ret;

  __ret = __out;

  return __ret;
}

l4_umword_t l4_cap_void_snd_base(l4_cap_idx_t __self, unsigned int grant, l4_cap_idx_t base)
{
  using namespace L4;

  const L4::Cap<void> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  auto ____self = L4::Cap<void>(__self);
  ___self = &____self;

  _grant = grant;

  _base = base;

  auto __out = ___self->snd_base(_grant, _base);

  l4_umword_t __ret;

  __ret = __out;

  return __ret;
}

void l4_cap_void_invalidate(l4_cap_idx_t __self)
{
  using namespace L4;

  L4::Cap<void> * ___self;

  auto ____self = L4::Cap<void>(__self);
  ___self = &____self;

  ___self->invalidate();
}

l4_cap_idx_t l4_cap_factory_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Factory>(_cap);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_factory_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Factory>(_cap);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_factory_new_3(l4_cap_idx_t idx)
{
  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  _idx = idx;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Factory>(_idx);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_factory_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Factory>(__1);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_factory_move(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<L4::Factory> * ___self;
  const L4::Cap<L4::Factory> * _src;

  auto ____self = L4::Cap<L4::Factory>(__self);
  ___self = &____self;

  auto __src = L4::Cap<L4::Factory>(src);
  _src = &__src;

  auto __out = ___self->move(*_src);

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

l4_cap_idx_t l4_cap_factory_copy(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<L4::Factory> * ___self;
  const L4::Cap<L4::Factory> * _src;

  auto ____self = L4::Cap<L4::Factory>(__self);
  ___self = &____self;

  auto __src = L4::Cap<L4::Factory>(src);
  _src = &__src;

  auto __out = ___self->copy(*_src);

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

l4_cap_idx_t l4_cap_factory_cap(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4::Factory> * ___self;

  auto ____self = L4::Cap<L4::Factory>(__self);
  ___self = &____self;

  auto __out = ___self->cap();

  l4_cap_idx_t __ret;

  __ret = __out;

  return __ret;
}

int l4_cap_factory_is_valid(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4::Factory> * ___self;

  auto ____self = L4::Cap<L4::Factory>(__self);
  ___self = &____self;

  auto __out = ___self->is_valid();

  int __ret;

  __ret = __out;

  return __ret;
}

l4_umword_t l4_cap_factory_snd_base(l4_cap_idx_t __self, unsigned int grant, l4_cap_idx_t base)
{
  using namespace L4;

  const L4::Cap<L4::Factory> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  auto ____self = L4::Cap<L4::Factory>(__self);
  ___self = &____self;

  _grant = grant;

  _base = base;

  auto __out = ___self->snd_base(_grant, _base);

  l4_umword_t __ret;

  __ret = __out;

  return __ret;
}

void l4_cap_factory_invalidate(l4_cap_idx_t __self)
{
  using namespace L4;

  L4::Cap<L4::Factory> * ___self;

  auto ____self = L4::Cap<L4::Factory>(__self);
  ___self = &____self;

  ___self->invalidate();
}

l4_cap_idx_t l4_cap_thread_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Thread>(_cap);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_thread_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Thread>(_cap);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_thread_new_3(l4_cap_idx_t idx)
{
  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  _idx = idx;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Thread>(_idx);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_thread_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Thread>(__1);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_thread_move(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<L4::Thread> * ___self;
  const L4::Cap<L4::Thread> * _src;

  auto ____self = L4::Cap<L4::Thread>(__self);
  ___self = &____self;

  auto __src = L4::Cap<L4::Thread>(src);
  _src = &__src;

  auto __out = ___self->move(*_src);

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

l4_cap_idx_t l4_cap_thread_copy(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<L4::Thread> * ___self;
  const L4::Cap<L4::Thread> * _src;

  auto ____self = L4::Cap<L4::Thread>(__self);
  ___self = &____self;

  auto __src = L4::Cap<L4::Thread>(src);
  _src = &__src;

  auto __out = ___self->copy(*_src);

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

l4_cap_idx_t l4_cap_thread_cap(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4::Thread> * ___self;

  auto ____self = L4::Cap<L4::Thread>(__self);
  ___self = &____self;

  auto __out = ___self->cap();

  l4_cap_idx_t __ret;

  __ret = __out;

  return __ret;
}

int l4_cap_thread_is_valid(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4::Thread> * ___self;

  auto ____self = L4::Cap<L4::Thread>(__self);
  ___self = &____self;

  auto __out = ___self->is_valid();

  int __ret;

  __ret = __out;

  return __ret;
}

l4_umword_t l4_cap_thread_snd_base(l4_cap_idx_t __self, unsigned int grant, l4_cap_idx_t base)
{
  using namespace L4;

  const L4::Cap<L4::Thread> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  auto ____self = L4::Cap<L4::Thread>(__self);
  ___self = &____self;

  _grant = grant;

  _base = base;

  auto __out = ___self->snd_base(_grant, _base);

  l4_umword_t __ret;

  __ret = __out;

  return __ret;
}

void l4_cap_thread_invalidate(l4_cap_idx_t __self)
{
  using namespace L4;

  L4::Cap<L4::Thread> * ___self;

  auto ____self = L4::Cap<L4::Thread>(__self);
  ___self = &____self;

  ___self->invalidate();
}

l4_cap_idx_t l4_cap_irq_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Irq>(_cap);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_irq_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Irq>(_cap);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_irq_new_3(l4_cap_idx_t idx)
{
  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  _idx = idx;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Irq>(_idx);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_irq_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Irq>(__1);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_irq_move(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<L4::Irq> * ___self;
  const L4::Cap<L4::Irq> * _src;

  auto ____self = L4::Cap<L4::Irq>(__self);
  ___self = &____self;

  auto __src = L4::Cap<L4::Irq>(src);
  _src = &__src;

  auto __out = ___self->move(*_src);

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

l4_cap_idx_t l4_cap_irq_copy(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<L4::Irq> * ___self;
  const L4::Cap<L4::Irq> * _src;

  auto ____self = L4::Cap<L4::Irq>(__self);
  ___self = &____self;

  auto __src = L4::Cap<L4::Irq>(src);
  _src = &__src;

  auto __out = ___self->copy(*_src);

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

l4_cap_idx_t l4_cap_irq_cap(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4::Irq> * ___self;

  auto ____self = L4::Cap<L4::Irq>(__self);
  ___self = &____self;

  auto __out = ___self->cap();

  l4_cap_idx_t __ret;

  __ret = __out;

  return __ret;
}

int l4_cap_irq_is_valid(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4::Irq> * ___self;

  auto ____self = L4::Cap<L4::Irq>(__self);
  ___self = &____self;

  auto __out = ___self->is_valid();

  int __ret;

  __ret = __out;

  return __ret;
}

l4_umword_t l4_cap_irq_snd_base(l4_cap_idx_t __self, unsigned int grant, l4_cap_idx_t base)
{
  using namespace L4;

  const L4::Cap<L4::Irq> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  auto ____self = L4::Cap<L4::Irq>(__self);
  ___self = &____self;

  _grant = grant;

  _base = base;

  auto __out = ___self->snd_base(_grant, _base);

  l4_umword_t __ret;

  __ret = __out;

  return __ret;
}

void l4_cap_irq_invalidate(l4_cap_idx_t __self)
{
  using namespace L4;

  L4::Cap<L4::Irq> * ___self;

  auto ____self = L4::Cap<L4::Irq>(__self);
  ___self = &____self;

  ___self->invalidate();
}

l4_cap_idx_t l4_cap_vm_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Vm>(_cap);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_vm_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Vm>(_cap);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_vm_new_3(l4_cap_idx_t idx)
{
  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  _idx = idx;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Vm>(_idx);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_vm_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Vm>(__1);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_vm_move(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<L4::Vm> * ___self;
  const L4::Cap<L4::Vm> * _src;

  auto ____self = L4::Cap<L4::Vm>(__self);
  ___self = &____self;

  auto __src = L4::Cap<L4::Vm>(src);
  _src = &__src;

  auto __out = ___self->move(*_src);

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

l4_cap_idx_t l4_cap_vm_copy(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<L4::Vm> * ___self;
  const L4::Cap<L4::Vm> * _src;

  auto ____self = L4::Cap<L4::Vm>(__self);
  ___self = &____self;

  auto __src = L4::Cap<L4::Vm>(src);
  _src = &__src;

  auto __out = ___self->copy(*_src);

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

l4_cap_idx_t l4_cap_vm_cap(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4::Vm> * ___self;

  auto ____self = L4::Cap<L4::Vm>(__self);
  ___self = &____self;

  auto __out = ___self->cap();

  l4_cap_idx_t __ret;

  __ret = __out;

  return __ret;
}

int l4_cap_vm_is_valid(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4::Vm> * ___self;

  auto ____self = L4::Cap<L4::Vm>(__self);
  ___self = &____self;

  auto __out = ___self->is_valid();

  int __ret;

  __ret = __out;

  return __ret;
}

l4_umword_t l4_cap_vm_snd_base(l4_cap_idx_t __self, unsigned int grant, l4_cap_idx_t base)
{
  using namespace L4;

  const L4::Cap<L4::Vm> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  auto ____self = L4::Cap<L4::Vm>(__self);
  ___self = &____self;

  _grant = grant;

  _base = base;

  auto __out = ___self->snd_base(_grant, _base);

  l4_umword_t __ret;

  __ret = __out;

  return __ret;
}

void l4_cap_vm_invalidate(l4_cap_idx_t __self)
{
  using namespace L4;

  L4::Cap<L4::Vm> * ___self;

  auto ____self = L4::Cap<L4::Vm>(__self);
  ___self = &____self;

  ___self->invalidate();
}

l4_cap_idx_t l4_cap_dataspace_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Dataspace>(_cap);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_dataspace_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Dataspace>(_cap);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_dataspace_new_3(l4_cap_idx_t idx)
{
  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  _idx = idx;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Dataspace>(_idx);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_dataspace_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Dataspace>(__1);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_dataspace_move_1(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * ___self;
  const L4::Cap<L4Re::Dataspace> * _src;

  auto ____self = L4::Cap<L4Re::Dataspace>(__self);
  ___self = &____self;

  auto __src = L4::Cap<L4Re::Dataspace>(src);
  _src = &__src;

  auto __out = ___self->move(*_src);

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

l4_cap_idx_t l4_cap_dataspace_copy_1(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * ___self;
  const L4::Cap<L4Re::Dataspace> * _src;

  auto ____self = L4::Cap<L4Re::Dataspace>(__self);
  ___self = &____self;

  auto __src = L4::Cap<L4Re::Dataspace>(src);
  _src = &__src;

  auto __out = ___self->copy(*_src);

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

struct l4_re_dataspace l4_cap_dataspace_access(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * ___self;

  auto ____self = L4::Cap<L4Re::Dataspace>(__self);
  ___self = &____self;

  auto __out = ___self->operator->();

  struct l4_re_dataspace __ret;

  struct l4_re_dataspace __tmp;
  cppbind::c::make_non_owning_struct(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

l4_cap_idx_t l4_cap_dataspace_copy_2(l4_cap_idx_t _1)
{
  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * __1;

  auto ___1 = L4::Cap<L4Re::Dataspace>(_1);
  __1 = &___1;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Dataspace>(*__1);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_dataspace_move_2(l4_cap_idx_t _1)
{
  using namespace L4;

  L4::Cap<L4Re::Dataspace> * __1;

  auto ___1 = L4::Cap<L4Re::Dataspace>(_1);
  __1 = &___1;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Dataspace>(std::move(*__1));

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

void l4_cap_dataspace_delete(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * ___self;

  auto ____self = L4::Cap<L4Re::Dataspace>(__self);
  ___self = &____self;

  ___self->~Cap<L4Re::Dataspace>();
}

l4_cap_idx_t l4_cap_dataspace_new_dataspace(l4_cap_idx_t o)
{
  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * _o;

  auto __o = L4::Cap<L4Re::Dataspace>(o);
  _o = &__o;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Dataspace>(*_o);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_dataspace_cap(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * ___self;

  auto ____self = L4::Cap<L4Re::Dataspace>(__self);
  ___self = &____self;

  auto __out = ___self->cap();

  l4_cap_idx_t __ret;

  __ret = __out;

  return __ret;
}

int l4_cap_dataspace_is_valid(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * ___self;

  auto ____self = L4::Cap<L4Re::Dataspace>(__self);
  ___self = &____self;

  auto __out = ___self->is_valid();

  int __ret;

  __ret = __out;

  return __ret;
}

l4_umword_t l4_cap_dataspace_snd_base(l4_cap_idx_t __self, unsigned int grant, l4_cap_idx_t base)
{
  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  auto ____self = L4::Cap<L4Re::Dataspace>(__self);
  ___self = &____self;

  _grant = grant;

  _base = base;

  auto __out = ___self->snd_base(_grant, _base);

  l4_umword_t __ret;

  __ret = __out;

  return __ret;
}

void l4_cap_dataspace_invalidate(l4_cap_idx_t __self)
{
  using namespace L4;

  L4::Cap<L4Re::Dataspace> * ___self;

  auto ____self = L4::Cap<L4Re::Dataspace>(__self);
  ___self = &____self;

  ___self->invalidate();
}

l4_cap_idx_t l4_cap_mem_alloc_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Mem_alloc>(_cap);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_mem_alloc_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Mem_alloc>(_cap);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_mem_alloc_new_3(l4_cap_idx_t idx)
{
  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  _idx = idx;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Mem_alloc>(_idx);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_mem_alloc_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Mem_alloc>(__1);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_mem_alloc_move_1(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * ___self;
  const L4::Cap<L4Re::Mem_alloc> * _src;

  auto ____self = L4::Cap<L4Re::Mem_alloc>(__self);
  ___self = &____self;

  auto __src = L4::Cap<L4Re::Mem_alloc>(src);
  _src = &__src;

  auto __out = ___self->move(*_src);

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

l4_cap_idx_t l4_cap_mem_alloc_copy_1(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * ___self;
  const L4::Cap<L4Re::Mem_alloc> * _src;

  auto ____self = L4::Cap<L4Re::Mem_alloc>(__self);
  ___self = &____self;

  auto __src = L4::Cap<L4Re::Mem_alloc>(src);
  _src = &__src;

  auto __out = ___self->copy(*_src);

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

struct l4_re_mem_alloc l4_cap_mem_alloc_access(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * ___self;

  auto ____self = L4::Cap<L4Re::Mem_alloc>(__self);
  ___self = &____self;

  auto __out = ___self->operator->();

  struct l4_re_mem_alloc __ret;

  struct l4_re_mem_alloc __tmp;
  cppbind::c::make_non_owning_struct(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

l4_cap_idx_t l4_cap_mem_alloc_copy_2(l4_cap_idx_t _1)
{
  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * __1;

  auto ___1 = L4::Cap<L4Re::Mem_alloc>(_1);
  __1 = &___1;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Mem_alloc>(*__1);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_mem_alloc_move_2(l4_cap_idx_t _1)
{
  using namespace L4;

  L4::Cap<L4Re::Mem_alloc> * __1;

  auto ___1 = L4::Cap<L4Re::Mem_alloc>(_1);
  __1 = &___1;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Mem_alloc>(std::move(*__1));

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

void l4_cap_mem_alloc_delete(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * ___self;

  auto ____self = L4::Cap<L4Re::Mem_alloc>(__self);
  ___self = &____self;

  ___self->~Cap<L4Re::Mem_alloc>();
}

l4_cap_idx_t l4_cap_mem_alloc_new_mem_alloc(l4_cap_idx_t o)
{
  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * _o;

  auto __o = L4::Cap<L4Re::Mem_alloc>(o);
  _o = &__o;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Mem_alloc>(*_o);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_mem_alloc_cap(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * ___self;

  auto ____self = L4::Cap<L4Re::Mem_alloc>(__self);
  ___self = &____self;

  auto __out = ___self->cap();

  l4_cap_idx_t __ret;

  __ret = __out;

  return __ret;
}

int l4_cap_mem_alloc_is_valid(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * ___self;

  auto ____self = L4::Cap<L4Re::Mem_alloc>(__self);
  ___self = &____self;

  auto __out = ___self->is_valid();

  int __ret;

  __ret = __out;

  return __ret;
}

l4_umword_t l4_cap_mem_alloc_snd_base(l4_cap_idx_t __self, unsigned int grant, l4_cap_idx_t base)
{
  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  auto ____self = L4::Cap<L4Re::Mem_alloc>(__self);
  ___self = &____self;

  _grant = grant;

  _base = base;

  auto __out = ___self->snd_base(_grant, _base);

  l4_umword_t __ret;

  __ret = __out;

  return __ret;
}

void l4_cap_mem_alloc_invalidate(l4_cap_idx_t __self)
{
  using namespace L4;

  L4::Cap<L4Re::Mem_alloc> * ___self;

  auto ____self = L4::Cap<L4Re::Mem_alloc>(__self);
  ___self = &____self;

  ___self->invalidate();
}

l4_cap_idx_t l4_cap_rm_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Rm>(_cap);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_rm_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Rm>(_cap);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_rm_new_3(l4_cap_idx_t idx)
{
  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  _idx = idx;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Rm>(_idx);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_rm_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Rm>(__1);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_rm_move_1(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<L4Re::Rm> * ___self;
  const L4::Cap<L4Re::Rm> * _src;

  auto ____self = L4::Cap<L4Re::Rm>(__self);
  ___self = &____self;

  auto __src = L4::Cap<L4Re::Rm>(src);
  _src = &__src;

  auto __out = ___self->move(*_src);

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

l4_cap_idx_t l4_cap_rm_copy_1(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<L4Re::Rm> * ___self;
  const L4::Cap<L4Re::Rm> * _src;

  auto ____self = L4::Cap<L4Re::Rm>(__self);
  ___self = &____self;

  auto __src = L4::Cap<L4Re::Rm>(src);
  _src = &__src;

  auto __out = ___self->copy(*_src);

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

struct l4_re_rm l4_cap_rm_access(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4Re::Rm> * ___self;

  auto ____self = L4::Cap<L4Re::Rm>(__self);
  ___self = &____self;

  auto __out = ___self->operator->();

  struct l4_re_rm __ret;

  struct l4_re_rm __tmp;
  cppbind::c::make_non_owning_struct(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

void l4_cap_rm_delete(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4Re::Rm> * ___self;

  auto ____self = L4::Cap<L4Re::Rm>(__self);
  ___self = &____self;

  ___self->~Cap<L4Re::Rm>();
}

l4_cap_idx_t l4_cap_rm_copy_2(l4_cap_idx_t _1)
{
  using namespace L4;

  const L4::Cap<L4Re::Rm> * __1;

  auto ___1 = L4::Cap<L4Re::Rm>(_1);
  __1 = &___1;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Rm>(*__1);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_rm_move_2(l4_cap_idx_t _1)
{
  using namespace L4;

  L4::Cap<L4Re::Rm> * __1;

  auto ___1 = L4::Cap<L4Re::Rm>(_1);
  __1 = &___1;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Rm>(std::move(*__1));

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_rm_copy_assign(l4_cap_idx_t __self, l4_cap_idx_t _1)
{
  using namespace L4;

  L4::Cap<L4Re::Rm> * ___self;
  const L4::Cap<L4Re::Rm> * __1;

  auto ____self = L4::Cap<L4Re::Rm>(__self);
  ___self = &____self;

  auto ___1 = L4::Cap<L4Re::Rm>(_1);
  __1 = &___1;

  auto __out = &___self->operator=(*__1);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_rm_move_assign(l4_cap_idx_t __self, l4_cap_idx_t _1)
{
  using namespace L4;

  L4::Cap<L4Re::Rm> * ___self;
  L4::Cap<L4Re::Rm> * __1;

  auto ____self = L4::Cap<L4Re::Rm>(__self);
  ___self = &____self;

  auto ___1 = L4::Cap<L4Re::Rm>(_1);
  __1 = &___1;

  auto __out = &___self->operator=(std::move(*__1));

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_rm_new_rm(l4_cap_idx_t o)
{
  using namespace L4;

  const L4::Cap<L4Re::Rm> * _o;

  auto __o = L4::Cap<L4Re::Rm>(o);
  _o = &__o;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Rm>(*_o);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_rm_cap(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4Re::Rm> * ___self;

  auto ____self = L4::Cap<L4Re::Rm>(__self);
  ___self = &____self;

  auto __out = ___self->cap();

  l4_cap_idx_t __ret;

  __ret = __out;

  return __ret;
}

int l4_cap_rm_is_valid(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<L4Re::Rm> * ___self;

  auto ____self = L4::Cap<L4Re::Rm>(__self);
  ___self = &____self;

  auto __out = ___self->is_valid();

  int __ret;

  __ret = __out;

  return __ret;
}

l4_umword_t l4_cap_rm_snd_base(l4_cap_idx_t __self, unsigned int grant, l4_cap_idx_t base)
{
  using namespace L4;

  const L4::Cap<L4Re::Rm> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  auto ____self = L4::Cap<L4Re::Rm>(__self);
  ___self = &____self;

  _grant = grant;

  _base = base;

  auto __out = ___self->snd_base(_grant, _base);

  l4_umword_t __ret;

  __ret = __out;

  return __ret;
}

void l4_cap_rm_invalidate(l4_cap_idx_t __self)
{
  using namespace L4;

  L4::Cap<L4Re::Rm> * ___self;

  auto ____self = L4::Cap<L4Re::Rm>(__self);
  ___self = &____self;

  ___self->invalidate();
}

l4_cap_idx_t l4_cap_dummy_kobject_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<Dummy_kobject>(_cap);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_dummy_kobject_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<Dummy_kobject>(_cap);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_dummy_kobject_new_3(l4_cap_idx_t idx)
{
  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  _idx = idx;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<Dummy_kobject>(_idx);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_dummy_kobject_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<Dummy_kobject>(__1);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_dummy_kobject_move_1(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<Dummy_kobject> * ___self;
  const L4::Cap<Dummy_kobject> * _src;

  auto ____self = L4::Cap<Dummy_kobject>(__self);
  ___self = &____self;

  auto __src = L4::Cap<Dummy_kobject>(src);
  _src = &__src;

  auto __out = ___self->move(*_src);

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

l4_cap_idx_t l4_cap_dummy_kobject_copy_1(l4_cap_idx_t __self, l4_cap_idx_t src)
{
  using namespace L4;

  const L4::Cap<Dummy_kobject> * ___self;
  const L4::Cap<Dummy_kobject> * _src;

  auto ____self = L4::Cap<Dummy_kobject>(__self);
  ___self = &____self;

  auto __src = L4::Cap<Dummy_kobject>(src);
  _src = &__src;

  auto __out = ___self->copy(*_src);

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

struct dummy_kobject l4_cap_dummy_kobject_access(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<Dummy_kobject> * ___self;

  auto ____self = L4::Cap<Dummy_kobject>(__self);
  ___self = &____self;

  auto __out = ___self->operator->();

  struct dummy_kobject __ret;

  struct dummy_kobject __tmp;
  cppbind::c::make_non_owning_struct(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

l4_cap_idx_t l4_cap_dummy_kobject_copy_2(l4_cap_idx_t _1)
{
  using namespace L4;

  const L4::Cap<Dummy_kobject> * __1;

  auto ___1 = L4::Cap<Dummy_kobject>(_1);
  __1 = &___1;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<Dummy_kobject>(*__1);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_dummy_kobject_move_2(l4_cap_idx_t _1)
{
  using namespace L4;

  L4::Cap<Dummy_kobject> * __1;

  auto ___1 = L4::Cap<Dummy_kobject>(_1);
  __1 = &___1;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<Dummy_kobject>(std::move(*__1));

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

void l4_cap_dummy_kobject_delete(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<Dummy_kobject> * ___self;

  auto ____self = L4::Cap<Dummy_kobject>(__self);
  ___self = &____self;

  ___self->~Cap<Dummy_kobject>();
}

l4_cap_idx_t l4_cap_dummy_kobject_new_dummy_kobject(l4_cap_idx_t o)
{
  using namespace L4;

  const L4::Cap<Dummy_kobject> * _o;

  auto __o = L4::Cap<Dummy_kobject>(o);
  _o = &__o;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<Dummy_kobject>(*_o);

  l4_cap_idx_t __ret;

  return __out->cap();

  return __ret;
}

l4_cap_idx_t l4_cap_dummy_kobject_cap(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<Dummy_kobject> * ___self;

  auto ____self = L4::Cap<Dummy_kobject>(__self);
  ___self = &____self;

  auto __out = ___self->cap();

  l4_cap_idx_t __ret;

  __ret = __out;

  return __ret;
}

int l4_cap_dummy_kobject_is_valid(l4_cap_idx_t __self)
{
  using namespace L4;

  const L4::Cap<Dummy_kobject> * ___self;

  auto ____self = L4::Cap<Dummy_kobject>(__self);
  ___self = &____self;

  auto __out = ___self->is_valid();

  int __ret;

  __ret = __out;

  return __ret;
}

l4_umword_t l4_cap_dummy_kobject_snd_base(l4_cap_idx_t __self, unsigned int grant, l4_cap_idx_t base)
{
  using namespace L4;

  const L4::Cap<Dummy_kobject> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  auto ____self = L4::Cap<Dummy_kobject>(__self);
  ___self = &____self;

  _grant = grant;

  _base = base;

  auto __out = ___self->snd_base(_grant, _base);

  l4_umword_t __ret;

  __ret = __out;

  return __ret;
}

void l4_cap_dummy_kobject_invalidate(l4_cap_idx_t __self)
{
  using namespace L4;

  L4::Cap<Dummy_kobject> * ___self;

  auto ____self = L4::Cap<Dummy_kobject>(__self);
  ___self = &____self;

  ___self->invalidate();
}

} // extern "C"