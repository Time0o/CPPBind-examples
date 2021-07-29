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

#include "/home/timo/github/projects/l4re/l4/pkg/cppbind-examples/server/src/rust/src/bind/capability_c.h"

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

struct l4_cap_task l4_cap_task_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Task>(_cap);

  struct l4_cap_task __ret;

  static_cast<void>(__out);

  struct l4_cap_task __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Task>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_task l4_cap_task_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Task>(_cap);

  struct l4_cap_task __ret;

  static_cast<void>(__out);

  struct l4_cap_task __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Task>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_task l4_cap_task_new_3(l4_cap_idx_t idx)
{
  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  _idx = idx;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Task>(_idx);

  struct l4_cap_task __ret;

  static_cast<void>(__out);

  struct l4_cap_task __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Task>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_task l4_cap_task_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Task>(__1);

  struct l4_cap_task __ret;

  static_cast<void>(__out);

  struct l4_cap_task __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Task>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_task l4_cap_task_move_1(const struct l4_cap_task * __self, const struct l4_cap_task * src)
{
  using namespace L4;

  const L4::Cap<L4::Task> * ___self;
  const L4::Cap<L4::Task> * _src;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Task>>(__self);

  _src = cppbind::c::struct_cast<const L4::Cap<L4::Task>>(src);

  auto __out = ___self->move(*_src);

  struct l4_cap_task __ret;

  struct l4_cap_task __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4::Task>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_task l4_cap_task_copy_1(const struct l4_cap_task * __self, const struct l4_cap_task * src)
{
  using namespace L4;

  const L4::Cap<L4::Task> * ___self;
  const L4::Cap<L4::Task> * _src;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Task>>(__self);

  _src = cppbind::c::struct_cast<const L4::Cap<L4::Task>>(src);

  auto __out = ___self->copy(*_src);

  struct l4_cap_task __ret;

  struct l4_cap_task __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4::Task>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_task l4_cap_task_copy_2(const struct l4_cap_task * _1)
{
  using namespace L4;

  const L4::Cap<L4::Task> * __1;

  __1 = cppbind::c::struct_cast<const L4::Cap<L4::Task>>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Task>(*__1);

  struct l4_cap_task __ret;

  static_cast<void>(__out);

  struct l4_cap_task __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Task>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_task l4_cap_task_move_2(struct l4_cap_task * _1)
{
  using namespace L4;

  L4::Cap<L4::Task> * __1;

  __1 = cppbind::c::struct_cast<L4::Cap<L4::Task>>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Task>(std::move(*__1));

  struct l4_cap_task __ret;

  static_cast<void>(__out);

  struct l4_cap_task __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Task>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

void l4_cap_task_delete(const struct l4_cap_task * __self)
{
  using namespace L4;

  const L4::Cap<L4::Task> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Task>>(__self);

  ___self->~Cap<L4::Task>();
}

struct l4_cap_task l4_cap_task_new_task(const struct l4_cap_task * o)
{
  using namespace L4;

  const L4::Cap<L4::Task> * _o;

  _o = cppbind::c::struct_cast<const L4::Cap<L4::Task>>(o);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Task>(*_o);

  struct l4_cap_task __ret;

  static_cast<void>(__out);

  struct l4_cap_task __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Task>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

l4_cap_idx_t l4_cap_task_cap(const struct l4_cap_task * __self)
{
  using namespace L4;

  const L4::Cap<L4::Task> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Task>>(__self);

  auto __out = ___self->cap();

  l4_cap_idx_t __ret;

  __ret = __out;

  return __ret;
}

int l4_cap_task_is_valid(const struct l4_cap_task * __self)
{
  using namespace L4;

  const L4::Cap<L4::Task> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Task>>(__self);

  auto __out = ___self->is_valid();

  int __ret;

  __ret = __out;

  return __ret;
}

l4_umword_t l4_cap_task_snd_base(const struct l4_cap_task * __self, unsigned int grant, l4_cap_idx_t base)
{
  using namespace L4;

  const L4::Cap<L4::Task> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Task>>(__self);

  _grant = grant;

  _base = base;

  auto __out = ___self->snd_base(_grant, _base);

  l4_umword_t __ret;

  __ret = __out;

  return __ret;
}

void l4_cap_task_invalidate(struct l4_cap_task * __self)
{
  using namespace L4;

  L4::Cap<L4::Task> * ___self;

  ___self = cppbind::c::struct_cast<L4::Cap<L4::Task>>(__self);

  ___self->invalidate();
}

struct l4_cap_kobject l4_cap_kobject_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Kobject>(_cap);

  struct l4_cap_kobject __ret;

  static_cast<void>(__out);

  struct l4_cap_kobject __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Kobject>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_kobject l4_cap_kobject_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Kobject>(_cap);

  struct l4_cap_kobject __ret;

  static_cast<void>(__out);

  struct l4_cap_kobject __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Kobject>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_kobject l4_cap_kobject_new_3(l4_cap_idx_t idx)
{
  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  _idx = idx;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Kobject>(_idx);

  struct l4_cap_kobject __ret;

  static_cast<void>(__out);

  struct l4_cap_kobject __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Kobject>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_kobject l4_cap_kobject_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Kobject>(__1);

  struct l4_cap_kobject __ret;

  static_cast<void>(__out);

  struct l4_cap_kobject __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Kobject>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_kobject l4_cap_kobject_move(const struct l4_cap_kobject * __self, const struct l4_cap_kobject * src)
{
  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;
  const L4::Cap<L4::Kobject> * _src;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Kobject>>(__self);

  _src = cppbind::c::struct_cast<const L4::Cap<L4::Kobject>>(src);

  auto __out = ___self->move(*_src);

  struct l4_cap_kobject __ret;

  struct l4_cap_kobject __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4::Kobject>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_kobject l4_cap_kobject_copy(const struct l4_cap_kobject * __self, const struct l4_cap_kobject * src)
{
  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;
  const L4::Cap<L4::Kobject> * _src;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Kobject>>(__self);

  _src = cppbind::c::struct_cast<const L4::Cap<L4::Kobject>>(src);

  auto __out = ___self->copy(*_src);

  struct l4_cap_kobject __ret;

  struct l4_cap_kobject __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4::Kobject>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

l4_cap_idx_t l4_cap_kobject_cap(const struct l4_cap_kobject * __self)
{
  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Kobject>>(__self);

  auto __out = ___self->cap();

  l4_cap_idx_t __ret;

  __ret = __out;

  return __ret;
}

int l4_cap_kobject_is_valid(const struct l4_cap_kobject * __self)
{
  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Kobject>>(__self);

  auto __out = ___self->is_valid();

  int __ret;

  __ret = __out;

  return __ret;
}

l4_umword_t l4_cap_kobject_snd_base(const struct l4_cap_kobject * __self, unsigned int grant, l4_cap_idx_t base)
{
  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Kobject>>(__self);

  _grant = grant;

  _base = base;

  auto __out = ___self->snd_base(_grant, _base);

  l4_umword_t __ret;

  __ret = __out;

  return __ret;
}

void l4_cap_kobject_invalidate(struct l4_cap_kobject * __self)
{
  using namespace L4;

  L4::Cap<L4::Kobject> * ___self;

  ___self = cppbind::c::struct_cast<L4::Cap<L4::Kobject>>(__self);

  ___self->invalidate();
}

struct l4_cap_meta l4_cap_meta_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Meta>(_cap);

  struct l4_cap_meta __ret;

  static_cast<void>(__out);

  struct l4_cap_meta __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Meta>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_meta l4_cap_meta_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Meta>(_cap);

  struct l4_cap_meta __ret;

  static_cast<void>(__out);

  struct l4_cap_meta __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Meta>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_meta l4_cap_meta_new_3(l4_cap_idx_t idx)
{
  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  _idx = idx;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Meta>(_idx);

  struct l4_cap_meta __ret;

  static_cast<void>(__out);

  struct l4_cap_meta __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Meta>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_meta l4_cap_meta_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Meta>(__1);

  struct l4_cap_meta __ret;

  static_cast<void>(__out);

  struct l4_cap_meta __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Meta>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_meta l4_cap_meta_move(const struct l4_cap_meta * __self, const struct l4_cap_meta * src)
{
  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;
  const L4::Cap<L4::Meta> * _src;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Meta>>(__self);

  _src = cppbind::c::struct_cast<const L4::Cap<L4::Meta>>(src);

  auto __out = ___self->move(*_src);

  struct l4_cap_meta __ret;

  struct l4_cap_meta __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4::Meta>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_meta l4_cap_meta_copy(const struct l4_cap_meta * __self, const struct l4_cap_meta * src)
{
  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;
  const L4::Cap<L4::Meta> * _src;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Meta>>(__self);

  _src = cppbind::c::struct_cast<const L4::Cap<L4::Meta>>(src);

  auto __out = ___self->copy(*_src);

  struct l4_cap_meta __ret;

  struct l4_cap_meta __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4::Meta>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

l4_cap_idx_t l4_cap_meta_cap(const struct l4_cap_meta * __self)
{
  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Meta>>(__self);

  auto __out = ___self->cap();

  l4_cap_idx_t __ret;

  __ret = __out;

  return __ret;
}

int l4_cap_meta_is_valid(const struct l4_cap_meta * __self)
{
  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Meta>>(__self);

  auto __out = ___self->is_valid();

  int __ret;

  __ret = __out;

  return __ret;
}

l4_umword_t l4_cap_meta_snd_base(const struct l4_cap_meta * __self, unsigned int grant, l4_cap_idx_t base)
{
  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Meta>>(__self);

  _grant = grant;

  _base = base;

  auto __out = ___self->snd_base(_grant, _base);

  l4_umword_t __ret;

  __ret = __out;

  return __ret;
}

void l4_cap_meta_invalidate(struct l4_cap_meta * __self)
{
  using namespace L4;

  L4::Cap<L4::Meta> * ___self;

  ___self = cppbind::c::struct_cast<L4::Cap<L4::Meta>>(__self);

  ___self->invalidate();
}

struct l4_cap_void l4_cap_void_new_1(const void * p)
{
  using namespace L4;

  const void * _p;

  _p = p;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<void>(_p);

  struct l4_cap_void __ret;

  static_cast<void>(__out);

  struct l4_cap_void __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<void>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_void l4_cap_void_new_2(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<void>(_cap);

  struct l4_cap_void __ret;

  static_cast<void>(__out);

  struct l4_cap_void __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<void>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_void l4_cap_void_new_3(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<void>(_cap);

  struct l4_cap_void __ret;

  static_cast<void>(__out);

  struct l4_cap_void __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<void>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_void l4_cap_void_new_4(l4_cap_idx_t idx)
{
  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  _idx = idx;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<void>(_idx);

  struct l4_cap_void __ret;

  static_cast<void>(__out);

  struct l4_cap_void __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<void>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_void l4_cap_void_new_5(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<void>(__1);

  struct l4_cap_void __ret;

  static_cast<void>(__out);

  struct l4_cap_void __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<void>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_void l4_cap_void_move_1(const struct l4_cap_void * __self, const struct l4_cap_void * src)
{
  using namespace L4;

  const L4::Cap<void> * ___self;
  const L4::Cap<void> * _src;

  ___self = cppbind::c::struct_cast<const L4::Cap<void>>(__self);

  _src = cppbind::c::struct_cast<const L4::Cap<void>>(src);

  auto __out = ___self->move(*_src);

  struct l4_cap_void __ret;

  struct l4_cap_void __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<void>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_void l4_cap_void_copy_1(const struct l4_cap_void * __self, const struct l4_cap_void * src)
{
  using namespace L4;

  const L4::Cap<void> * ___self;
  const L4::Cap<void> * _src;

  ___self = cppbind::c::struct_cast<const L4::Cap<void>>(__self);

  _src = cppbind::c::struct_cast<const L4::Cap<void>>(src);

  auto __out = ___self->copy(*_src);

  struct l4_cap_void __ret;

  struct l4_cap_void __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<void>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_void l4_cap_void_copy_2(const struct l4_cap_void * _1)
{
  using namespace L4;

  const L4::Cap<void> * __1;

  __1 = cppbind::c::struct_cast<const L4::Cap<void>>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<void>(*__1);

  struct l4_cap_void __ret;

  static_cast<void>(__out);

  struct l4_cap_void __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<void>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_void l4_cap_void_move_2(struct l4_cap_void * _1)
{
  using namespace L4;

  L4::Cap<void> * __1;

  __1 = cppbind::c::struct_cast<L4::Cap<void>>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<void>(std::move(*__1));

  struct l4_cap_void __ret;

  static_cast<void>(__out);

  struct l4_cap_void __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<void>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

void l4_cap_void_delete(const struct l4_cap_void * __self)
{
  using namespace L4;

  const L4::Cap<void> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<void>>(__self);

  ___self->~Cap<void>();
}

struct l4_cap_void l4_cap_void_new_void(const struct l4_cap_void * o)
{
  using namespace L4;

  const L4::Cap<void> * _o;

  _o = cppbind::c::struct_cast<const L4::Cap<void>>(o);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<void>(*_o);

  struct l4_cap_void __ret;

  static_cast<void>(__out);

  struct l4_cap_void __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<void>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

l4_cap_idx_t l4_cap_void_cap(const struct l4_cap_void * __self)
{
  using namespace L4;

  const L4::Cap<void> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<void>>(__self);

  auto __out = ___self->cap();

  l4_cap_idx_t __ret;

  __ret = __out;

  return __ret;
}

int l4_cap_void_is_valid(const struct l4_cap_void * __self)
{
  using namespace L4;

  const L4::Cap<void> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<void>>(__self);

  auto __out = ___self->is_valid();

  int __ret;

  __ret = __out;

  return __ret;
}

l4_umword_t l4_cap_void_snd_base(const struct l4_cap_void * __self, unsigned int grant, l4_cap_idx_t base)
{
  using namespace L4;

  const L4::Cap<void> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  ___self = cppbind::c::struct_cast<const L4::Cap<void>>(__self);

  _grant = grant;

  _base = base;

  auto __out = ___self->snd_base(_grant, _base);

  l4_umword_t __ret;

  __ret = __out;

  return __ret;
}

void l4_cap_void_invalidate(struct l4_cap_void * __self)
{
  using namespace L4;

  L4::Cap<void> * ___self;

  ___self = cppbind::c::struct_cast<L4::Cap<void>>(__self);

  ___self->invalidate();
}

struct l4_cap_factory l4_cap_factory_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Factory>(_cap);

  struct l4_cap_factory __ret;

  static_cast<void>(__out);

  struct l4_cap_factory __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Factory>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_factory l4_cap_factory_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Factory>(_cap);

  struct l4_cap_factory __ret;

  static_cast<void>(__out);

  struct l4_cap_factory __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Factory>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_factory l4_cap_factory_new_3(l4_cap_idx_t idx)
{
  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  _idx = idx;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Factory>(_idx);

  struct l4_cap_factory __ret;

  static_cast<void>(__out);

  struct l4_cap_factory __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Factory>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_factory l4_cap_factory_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Factory>(__1);

  struct l4_cap_factory __ret;

  static_cast<void>(__out);

  struct l4_cap_factory __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Factory>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_factory l4_cap_factory_move(const struct l4_cap_factory * __self, const struct l4_cap_factory * src)
{
  using namespace L4;

  const L4::Cap<L4::Factory> * ___self;
  const L4::Cap<L4::Factory> * _src;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Factory>>(__self);

  _src = cppbind::c::struct_cast<const L4::Cap<L4::Factory>>(src);

  auto __out = ___self->move(*_src);

  struct l4_cap_factory __ret;

  struct l4_cap_factory __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4::Factory>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_factory l4_cap_factory_copy(const struct l4_cap_factory * __self, const struct l4_cap_factory * src)
{
  using namespace L4;

  const L4::Cap<L4::Factory> * ___self;
  const L4::Cap<L4::Factory> * _src;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Factory>>(__self);

  _src = cppbind::c::struct_cast<const L4::Cap<L4::Factory>>(src);

  auto __out = ___self->copy(*_src);

  struct l4_cap_factory __ret;

  struct l4_cap_factory __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4::Factory>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

l4_cap_idx_t l4_cap_factory_cap(const struct l4_cap_factory * __self)
{
  using namespace L4;

  const L4::Cap<L4::Factory> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Factory>>(__self);

  auto __out = ___self->cap();

  l4_cap_idx_t __ret;

  __ret = __out;

  return __ret;
}

int l4_cap_factory_is_valid(const struct l4_cap_factory * __self)
{
  using namespace L4;

  const L4::Cap<L4::Factory> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Factory>>(__self);

  auto __out = ___self->is_valid();

  int __ret;

  __ret = __out;

  return __ret;
}

l4_umword_t l4_cap_factory_snd_base(const struct l4_cap_factory * __self, unsigned int grant, l4_cap_idx_t base)
{
  using namespace L4;

  const L4::Cap<L4::Factory> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Factory>>(__self);

  _grant = grant;

  _base = base;

  auto __out = ___self->snd_base(_grant, _base);

  l4_umword_t __ret;

  __ret = __out;

  return __ret;
}

void l4_cap_factory_invalidate(struct l4_cap_factory * __self)
{
  using namespace L4;

  L4::Cap<L4::Factory> * ___self;

  ___self = cppbind::c::struct_cast<L4::Cap<L4::Factory>>(__self);

  ___self->invalidate();
}

struct l4_cap_thread l4_cap_thread_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Thread>(_cap);

  struct l4_cap_thread __ret;

  static_cast<void>(__out);

  struct l4_cap_thread __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Thread>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_thread l4_cap_thread_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Thread>(_cap);

  struct l4_cap_thread __ret;

  static_cast<void>(__out);

  struct l4_cap_thread __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Thread>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_thread l4_cap_thread_new_3(l4_cap_idx_t idx)
{
  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  _idx = idx;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Thread>(_idx);

  struct l4_cap_thread __ret;

  static_cast<void>(__out);

  struct l4_cap_thread __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Thread>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_thread l4_cap_thread_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Thread>(__1);

  struct l4_cap_thread __ret;

  static_cast<void>(__out);

  struct l4_cap_thread __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Thread>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_thread l4_cap_thread_move(const struct l4_cap_thread * __self, const struct l4_cap_thread * src)
{
  using namespace L4;

  const L4::Cap<L4::Thread> * ___self;
  const L4::Cap<L4::Thread> * _src;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Thread>>(__self);

  _src = cppbind::c::struct_cast<const L4::Cap<L4::Thread>>(src);

  auto __out = ___self->move(*_src);

  struct l4_cap_thread __ret;

  struct l4_cap_thread __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4::Thread>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_thread l4_cap_thread_copy(const struct l4_cap_thread * __self, const struct l4_cap_thread * src)
{
  using namespace L4;

  const L4::Cap<L4::Thread> * ___self;
  const L4::Cap<L4::Thread> * _src;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Thread>>(__self);

  _src = cppbind::c::struct_cast<const L4::Cap<L4::Thread>>(src);

  auto __out = ___self->copy(*_src);

  struct l4_cap_thread __ret;

  struct l4_cap_thread __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4::Thread>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

l4_cap_idx_t l4_cap_thread_cap(const struct l4_cap_thread * __self)
{
  using namespace L4;

  const L4::Cap<L4::Thread> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Thread>>(__self);

  auto __out = ___self->cap();

  l4_cap_idx_t __ret;

  __ret = __out;

  return __ret;
}

int l4_cap_thread_is_valid(const struct l4_cap_thread * __self)
{
  using namespace L4;

  const L4::Cap<L4::Thread> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Thread>>(__self);

  auto __out = ___self->is_valid();

  int __ret;

  __ret = __out;

  return __ret;
}

l4_umword_t l4_cap_thread_snd_base(const struct l4_cap_thread * __self, unsigned int grant, l4_cap_idx_t base)
{
  using namespace L4;

  const L4::Cap<L4::Thread> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Thread>>(__self);

  _grant = grant;

  _base = base;

  auto __out = ___self->snd_base(_grant, _base);

  l4_umword_t __ret;

  __ret = __out;

  return __ret;
}

void l4_cap_thread_invalidate(struct l4_cap_thread * __self)
{
  using namespace L4;

  L4::Cap<L4::Thread> * ___self;

  ___self = cppbind::c::struct_cast<L4::Cap<L4::Thread>>(__self);

  ___self->invalidate();
}

struct l4_cap_irq l4_cap_irq_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Irq>(_cap);

  struct l4_cap_irq __ret;

  static_cast<void>(__out);

  struct l4_cap_irq __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Irq>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_irq l4_cap_irq_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Irq>(_cap);

  struct l4_cap_irq __ret;

  static_cast<void>(__out);

  struct l4_cap_irq __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Irq>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_irq l4_cap_irq_new_3(l4_cap_idx_t idx)
{
  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  _idx = idx;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Irq>(_idx);

  struct l4_cap_irq __ret;

  static_cast<void>(__out);

  struct l4_cap_irq __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Irq>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_irq l4_cap_irq_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Irq>(__1);

  struct l4_cap_irq __ret;

  static_cast<void>(__out);

  struct l4_cap_irq __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Irq>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_irq l4_cap_irq_move(const struct l4_cap_irq * __self, const struct l4_cap_irq * src)
{
  using namespace L4;

  const L4::Cap<L4::Irq> * ___self;
  const L4::Cap<L4::Irq> * _src;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Irq>>(__self);

  _src = cppbind::c::struct_cast<const L4::Cap<L4::Irq>>(src);

  auto __out = ___self->move(*_src);

  struct l4_cap_irq __ret;

  struct l4_cap_irq __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4::Irq>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_irq l4_cap_irq_copy(const struct l4_cap_irq * __self, const struct l4_cap_irq * src)
{
  using namespace L4;

  const L4::Cap<L4::Irq> * ___self;
  const L4::Cap<L4::Irq> * _src;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Irq>>(__self);

  _src = cppbind::c::struct_cast<const L4::Cap<L4::Irq>>(src);

  auto __out = ___self->copy(*_src);

  struct l4_cap_irq __ret;

  struct l4_cap_irq __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4::Irq>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

l4_cap_idx_t l4_cap_irq_cap(const struct l4_cap_irq * __self)
{
  using namespace L4;

  const L4::Cap<L4::Irq> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Irq>>(__self);

  auto __out = ___self->cap();

  l4_cap_idx_t __ret;

  __ret = __out;

  return __ret;
}

int l4_cap_irq_is_valid(const struct l4_cap_irq * __self)
{
  using namespace L4;

  const L4::Cap<L4::Irq> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Irq>>(__self);

  auto __out = ___self->is_valid();

  int __ret;

  __ret = __out;

  return __ret;
}

l4_umword_t l4_cap_irq_snd_base(const struct l4_cap_irq * __self, unsigned int grant, l4_cap_idx_t base)
{
  using namespace L4;

  const L4::Cap<L4::Irq> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Irq>>(__self);

  _grant = grant;

  _base = base;

  auto __out = ___self->snd_base(_grant, _base);

  l4_umword_t __ret;

  __ret = __out;

  return __ret;
}

void l4_cap_irq_invalidate(struct l4_cap_irq * __self)
{
  using namespace L4;

  L4::Cap<L4::Irq> * ___self;

  ___self = cppbind::c::struct_cast<L4::Cap<L4::Irq>>(__self);

  ___self->invalidate();
}

struct l4_cap_vm l4_cap_vm_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Vm>(_cap);

  struct l4_cap_vm __ret;

  static_cast<void>(__out);

  struct l4_cap_vm __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Vm>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_vm l4_cap_vm_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Vm>(_cap);

  struct l4_cap_vm __ret;

  static_cast<void>(__out);

  struct l4_cap_vm __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Vm>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_vm l4_cap_vm_new_3(l4_cap_idx_t idx)
{
  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  _idx = idx;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Vm>(_idx);

  struct l4_cap_vm __ret;

  static_cast<void>(__out);

  struct l4_cap_vm __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Vm>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_vm l4_cap_vm_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4::Vm>(__1);

  struct l4_cap_vm __ret;

  static_cast<void>(__out);

  struct l4_cap_vm __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4::Vm>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_vm l4_cap_vm_move(const struct l4_cap_vm * __self, const struct l4_cap_vm * src)
{
  using namespace L4;

  const L4::Cap<L4::Vm> * ___self;
  const L4::Cap<L4::Vm> * _src;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Vm>>(__self);

  _src = cppbind::c::struct_cast<const L4::Cap<L4::Vm>>(src);

  auto __out = ___self->move(*_src);

  struct l4_cap_vm __ret;

  struct l4_cap_vm __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4::Vm>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_vm l4_cap_vm_copy(const struct l4_cap_vm * __self, const struct l4_cap_vm * src)
{
  using namespace L4;

  const L4::Cap<L4::Vm> * ___self;
  const L4::Cap<L4::Vm> * _src;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Vm>>(__self);

  _src = cppbind::c::struct_cast<const L4::Cap<L4::Vm>>(src);

  auto __out = ___self->copy(*_src);

  struct l4_cap_vm __ret;

  struct l4_cap_vm __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4::Vm>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

l4_cap_idx_t l4_cap_vm_cap(const struct l4_cap_vm * __self)
{
  using namespace L4;

  const L4::Cap<L4::Vm> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Vm>>(__self);

  auto __out = ___self->cap();

  l4_cap_idx_t __ret;

  __ret = __out;

  return __ret;
}

int l4_cap_vm_is_valid(const struct l4_cap_vm * __self)
{
  using namespace L4;

  const L4::Cap<L4::Vm> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Vm>>(__self);

  auto __out = ___self->is_valid();

  int __ret;

  __ret = __out;

  return __ret;
}

l4_umword_t l4_cap_vm_snd_base(const struct l4_cap_vm * __self, unsigned int grant, l4_cap_idx_t base)
{
  using namespace L4;

  const L4::Cap<L4::Vm> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4::Vm>>(__self);

  _grant = grant;

  _base = base;

  auto __out = ___self->snd_base(_grant, _base);

  l4_umword_t __ret;

  __ret = __out;

  return __ret;
}

void l4_cap_vm_invalidate(struct l4_cap_vm * __self)
{
  using namespace L4;

  L4::Cap<L4::Vm> * ___self;

  ___self = cppbind::c::struct_cast<L4::Cap<L4::Vm>>(__self);

  ___self->invalidate();
}

struct l4_cap_dataspace l4_cap_dataspace_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Dataspace>(_cap);

  struct l4_cap_dataspace __ret;

  static_cast<void>(__out);

  struct l4_cap_dataspace __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4Re::Dataspace>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_dataspace l4_cap_dataspace_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Dataspace>(_cap);

  struct l4_cap_dataspace __ret;

  static_cast<void>(__out);

  struct l4_cap_dataspace __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4Re::Dataspace>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_dataspace l4_cap_dataspace_new_3(l4_cap_idx_t idx)
{
  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  _idx = idx;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Dataspace>(_idx);

  struct l4_cap_dataspace __ret;

  static_cast<void>(__out);

  struct l4_cap_dataspace __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4Re::Dataspace>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_dataspace l4_cap_dataspace_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Dataspace>(__1);

  struct l4_cap_dataspace __ret;

  static_cast<void>(__out);

  struct l4_cap_dataspace __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4Re::Dataspace>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_dataspace l4_cap_dataspace_move_1(const struct l4_cap_dataspace * __self, const struct l4_cap_dataspace * src)
{
  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * ___self;
  const L4::Cap<L4Re::Dataspace> * _src;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4Re::Dataspace>>(__self);

  _src = cppbind::c::struct_cast<const L4::Cap<L4Re::Dataspace>>(src);

  auto __out = ___self->move(*_src);

  struct l4_cap_dataspace __ret;

  struct l4_cap_dataspace __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4Re::Dataspace>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_dataspace l4_cap_dataspace_copy_1(const struct l4_cap_dataspace * __self, const struct l4_cap_dataspace * src)
{
  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * ___self;
  const L4::Cap<L4Re::Dataspace> * _src;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4Re::Dataspace>>(__self);

  _src = cppbind::c::struct_cast<const L4::Cap<L4Re::Dataspace>>(src);

  auto __out = ___self->copy(*_src);

  struct l4_cap_dataspace __ret;

  struct l4_cap_dataspace __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4Re::Dataspace>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_re_dataspace l4_cap_dataspace_access(const struct l4_cap_dataspace * __self)
{
  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4Re::Dataspace>>(__self);

  auto __out = ___self->operator->();

  struct l4_re_dataspace __ret;

  struct l4_re_dataspace __tmp;
  cppbind::c::make_non_owning_struct(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_dataspace l4_cap_dataspace_copy_2(const struct l4_cap_dataspace * _1)
{
  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * __1;

  __1 = cppbind::c::struct_cast<const L4::Cap<L4Re::Dataspace>>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Dataspace>(*__1);

  struct l4_cap_dataspace __ret;

  static_cast<void>(__out);

  struct l4_cap_dataspace __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4Re::Dataspace>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_dataspace l4_cap_dataspace_move_2(struct l4_cap_dataspace * _1)
{
  using namespace L4;

  L4::Cap<L4Re::Dataspace> * __1;

  __1 = cppbind::c::struct_cast<L4::Cap<L4Re::Dataspace>>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Dataspace>(std::move(*__1));

  struct l4_cap_dataspace __ret;

  static_cast<void>(__out);

  struct l4_cap_dataspace __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4Re::Dataspace>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

void l4_cap_dataspace_delete(const struct l4_cap_dataspace * __self)
{
  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4Re::Dataspace>>(__self);

  ___self->~Cap<L4Re::Dataspace>();
}

struct l4_cap_dataspace l4_cap_dataspace_new_dataspace(const struct l4_cap_dataspace * o)
{
  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * _o;

  _o = cppbind::c::struct_cast<const L4::Cap<L4Re::Dataspace>>(o);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Dataspace>(*_o);

  struct l4_cap_dataspace __ret;

  static_cast<void>(__out);

  struct l4_cap_dataspace __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4Re::Dataspace>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

l4_cap_idx_t l4_cap_dataspace_cap(const struct l4_cap_dataspace * __self)
{
  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4Re::Dataspace>>(__self);

  auto __out = ___self->cap();

  l4_cap_idx_t __ret;

  __ret = __out;

  return __ret;
}

int l4_cap_dataspace_is_valid(const struct l4_cap_dataspace * __self)
{
  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4Re::Dataspace>>(__self);

  auto __out = ___self->is_valid();

  int __ret;

  __ret = __out;

  return __ret;
}

l4_umword_t l4_cap_dataspace_snd_base(const struct l4_cap_dataspace * __self, unsigned int grant, l4_cap_idx_t base)
{
  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4Re::Dataspace>>(__self);

  _grant = grant;

  _base = base;

  auto __out = ___self->snd_base(_grant, _base);

  l4_umword_t __ret;

  __ret = __out;

  return __ret;
}

void l4_cap_dataspace_invalidate(struct l4_cap_dataspace * __self)
{
  using namespace L4;

  L4::Cap<L4Re::Dataspace> * ___self;

  ___self = cppbind::c::struct_cast<L4::Cap<L4Re::Dataspace>>(__self);

  ___self->invalidate();
}

struct l4_cap_mem_alloc l4_cap_mem_alloc_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Mem_alloc>(_cap);

  struct l4_cap_mem_alloc __ret;

  static_cast<void>(__out);

  struct l4_cap_mem_alloc __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4Re::Mem_alloc>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_mem_alloc l4_cap_mem_alloc_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Mem_alloc>(_cap);

  struct l4_cap_mem_alloc __ret;

  static_cast<void>(__out);

  struct l4_cap_mem_alloc __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4Re::Mem_alloc>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_mem_alloc l4_cap_mem_alloc_new_3(l4_cap_idx_t idx)
{
  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  _idx = idx;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Mem_alloc>(_idx);

  struct l4_cap_mem_alloc __ret;

  static_cast<void>(__out);

  struct l4_cap_mem_alloc __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4Re::Mem_alloc>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_mem_alloc l4_cap_mem_alloc_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Mem_alloc>(__1);

  struct l4_cap_mem_alloc __ret;

  static_cast<void>(__out);

  struct l4_cap_mem_alloc __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4Re::Mem_alloc>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_mem_alloc l4_cap_mem_alloc_move_1(const struct l4_cap_mem_alloc * __self, const struct l4_cap_mem_alloc * src)
{
  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * ___self;
  const L4::Cap<L4Re::Mem_alloc> * _src;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4Re::Mem_alloc>>(__self);

  _src = cppbind::c::struct_cast<const L4::Cap<L4Re::Mem_alloc>>(src);

  auto __out = ___self->move(*_src);

  struct l4_cap_mem_alloc __ret;

  struct l4_cap_mem_alloc __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4Re::Mem_alloc>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_mem_alloc l4_cap_mem_alloc_copy_1(const struct l4_cap_mem_alloc * __self, const struct l4_cap_mem_alloc * src)
{
  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * ___self;
  const L4::Cap<L4Re::Mem_alloc> * _src;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4Re::Mem_alloc>>(__self);

  _src = cppbind::c::struct_cast<const L4::Cap<L4Re::Mem_alloc>>(src);

  auto __out = ___self->copy(*_src);

  struct l4_cap_mem_alloc __ret;

  struct l4_cap_mem_alloc __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4Re::Mem_alloc>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_re_mem_alloc l4_cap_mem_alloc_access(const struct l4_cap_mem_alloc * __self)
{
  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4Re::Mem_alloc>>(__self);

  auto __out = ___self->operator->();

  struct l4_re_mem_alloc __ret;

  struct l4_re_mem_alloc __tmp;
  cppbind::c::make_non_owning_struct(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_mem_alloc l4_cap_mem_alloc_copy_2(const struct l4_cap_mem_alloc * _1)
{
  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * __1;

  __1 = cppbind::c::struct_cast<const L4::Cap<L4Re::Mem_alloc>>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Mem_alloc>(*__1);

  struct l4_cap_mem_alloc __ret;

  static_cast<void>(__out);

  struct l4_cap_mem_alloc __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4Re::Mem_alloc>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_mem_alloc l4_cap_mem_alloc_move_2(struct l4_cap_mem_alloc * _1)
{
  using namespace L4;

  L4::Cap<L4Re::Mem_alloc> * __1;

  __1 = cppbind::c::struct_cast<L4::Cap<L4Re::Mem_alloc>>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Mem_alloc>(std::move(*__1));

  struct l4_cap_mem_alloc __ret;

  static_cast<void>(__out);

  struct l4_cap_mem_alloc __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4Re::Mem_alloc>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

void l4_cap_mem_alloc_delete(const struct l4_cap_mem_alloc * __self)
{
  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4Re::Mem_alloc>>(__self);

  ___self->~Cap<L4Re::Mem_alloc>();
}

struct l4_cap_mem_alloc l4_cap_mem_alloc_new_mem_alloc(const struct l4_cap_mem_alloc * o)
{
  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * _o;

  _o = cppbind::c::struct_cast<const L4::Cap<L4Re::Mem_alloc>>(o);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Mem_alloc>(*_o);

  struct l4_cap_mem_alloc __ret;

  static_cast<void>(__out);

  struct l4_cap_mem_alloc __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4Re::Mem_alloc>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

l4_cap_idx_t l4_cap_mem_alloc_cap(const struct l4_cap_mem_alloc * __self)
{
  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4Re::Mem_alloc>>(__self);

  auto __out = ___self->cap();

  l4_cap_idx_t __ret;

  __ret = __out;

  return __ret;
}

int l4_cap_mem_alloc_is_valid(const struct l4_cap_mem_alloc * __self)
{
  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4Re::Mem_alloc>>(__self);

  auto __out = ___self->is_valid();

  int __ret;

  __ret = __out;

  return __ret;
}

l4_umword_t l4_cap_mem_alloc_snd_base(const struct l4_cap_mem_alloc * __self, unsigned int grant, l4_cap_idx_t base)
{
  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4Re::Mem_alloc>>(__self);

  _grant = grant;

  _base = base;

  auto __out = ___self->snd_base(_grant, _base);

  l4_umword_t __ret;

  __ret = __out;

  return __ret;
}

void l4_cap_mem_alloc_invalidate(struct l4_cap_mem_alloc * __self)
{
  using namespace L4;

  L4::Cap<L4Re::Mem_alloc> * ___self;

  ___self = cppbind::c::struct_cast<L4::Cap<L4Re::Mem_alloc>>(__self);

  ___self->invalidate();
}

struct l4_cap_rm l4_cap_rm_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Rm>(_cap);

  struct l4_cap_rm __ret;

  static_cast<void>(__out);

  struct l4_cap_rm __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4Re::Rm>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_rm l4_cap_rm_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Rm>(_cap);

  struct l4_cap_rm __ret;

  static_cast<void>(__out);

  struct l4_cap_rm __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4Re::Rm>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_rm l4_cap_rm_new_3(l4_cap_idx_t idx)
{
  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  _idx = idx;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Rm>(_idx);

  struct l4_cap_rm __ret;

  static_cast<void>(__out);

  struct l4_cap_rm __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4Re::Rm>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_rm l4_cap_rm_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Rm>(__1);

  struct l4_cap_rm __ret;

  static_cast<void>(__out);

  struct l4_cap_rm __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4Re::Rm>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_rm l4_cap_rm_move_1(const struct l4_cap_rm * __self, const struct l4_cap_rm * src)
{
  using namespace L4;

  const L4::Cap<L4Re::Rm> * ___self;
  const L4::Cap<L4Re::Rm> * _src;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4Re::Rm>>(__self);

  _src = cppbind::c::struct_cast<const L4::Cap<L4Re::Rm>>(src);

  auto __out = ___self->move(*_src);

  struct l4_cap_rm __ret;

  struct l4_cap_rm __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4Re::Rm>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_rm l4_cap_rm_copy_1(const struct l4_cap_rm * __self, const struct l4_cap_rm * src)
{
  using namespace L4;

  const L4::Cap<L4Re::Rm> * ___self;
  const L4::Cap<L4Re::Rm> * _src;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4Re::Rm>>(__self);

  _src = cppbind::c::struct_cast<const L4::Cap<L4Re::Rm>>(src);

  auto __out = ___self->copy(*_src);

  struct l4_cap_rm __ret;

  struct l4_cap_rm __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4Re::Rm>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_re_rm l4_cap_rm_access(const struct l4_cap_rm * __self)
{
  using namespace L4;

  const L4::Cap<L4Re::Rm> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4Re::Rm>>(__self);

  auto __out = ___self->operator->();

  struct l4_re_rm __ret;

  struct l4_re_rm __tmp;
  cppbind::c::make_non_owning_struct(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

void l4_cap_rm_delete(const struct l4_cap_rm * __self)
{
  using namespace L4;

  const L4::Cap<L4Re::Rm> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4Re::Rm>>(__self);

  ___self->~Cap<L4Re::Rm>();
}

struct l4_cap_rm l4_cap_rm_copy_2(const struct l4_cap_rm * _1)
{
  using namespace L4;

  const L4::Cap<L4Re::Rm> * __1;

  __1 = cppbind::c::struct_cast<const L4::Cap<L4Re::Rm>>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Rm>(*__1);

  struct l4_cap_rm __ret;

  static_cast<void>(__out);

  struct l4_cap_rm __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4Re::Rm>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_rm l4_cap_rm_move_2(struct l4_cap_rm * _1)
{
  using namespace L4;

  L4::Cap<L4Re::Rm> * __1;

  __1 = cppbind::c::struct_cast<L4::Cap<L4Re::Rm>>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Rm>(std::move(*__1));

  struct l4_cap_rm __ret;

  static_cast<void>(__out);

  struct l4_cap_rm __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4Re::Rm>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_rm l4_cap_rm_copy_assign(struct l4_cap_rm * __self, const struct l4_cap_rm * _1)
{
  using namespace L4;

  L4::Cap<L4Re::Rm> * ___self;
  const L4::Cap<L4Re::Rm> * __1;

  ___self = cppbind::c::struct_cast<L4::Cap<L4Re::Rm>>(__self);

  __1 = cppbind::c::struct_cast<const L4::Cap<L4Re::Rm>>(_1);

  auto __out = &___self->operator=(*__1);

  struct l4_cap_rm __ret;

  struct l4_cap_rm __tmp;
  cppbind::c::make_non_owning_struct(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_rm l4_cap_rm_move_assign(struct l4_cap_rm * __self, struct l4_cap_rm * _1)
{
  using namespace L4;

  L4::Cap<L4Re::Rm> * ___self;
  L4::Cap<L4Re::Rm> * __1;

  ___self = cppbind::c::struct_cast<L4::Cap<L4Re::Rm>>(__self);

  __1 = cppbind::c::struct_cast<L4::Cap<L4Re::Rm>>(_1);

  auto __out = &___self->operator=(std::move(*__1));

  struct l4_cap_rm __ret;

  struct l4_cap_rm __tmp;
  cppbind::c::make_non_owning_struct(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_rm l4_cap_rm_new_rm(const struct l4_cap_rm * o)
{
  using namespace L4;

  const L4::Cap<L4Re::Rm> * _o;

  _o = cppbind::c::struct_cast<const L4::Cap<L4Re::Rm>>(o);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<L4Re::Rm>(*_o);

  struct l4_cap_rm __ret;

  static_cast<void>(__out);

  struct l4_cap_rm __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<L4Re::Rm>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

l4_cap_idx_t l4_cap_rm_cap(const struct l4_cap_rm * __self)
{
  using namespace L4;

  const L4::Cap<L4Re::Rm> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4Re::Rm>>(__self);

  auto __out = ___self->cap();

  l4_cap_idx_t __ret;

  __ret = __out;

  return __ret;
}

int l4_cap_rm_is_valid(const struct l4_cap_rm * __self)
{
  using namespace L4;

  const L4::Cap<L4Re::Rm> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4Re::Rm>>(__self);

  auto __out = ___self->is_valid();

  int __ret;

  __ret = __out;

  return __ret;
}

l4_umword_t l4_cap_rm_snd_base(const struct l4_cap_rm * __self, unsigned int grant, l4_cap_idx_t base)
{
  using namespace L4;

  const L4::Cap<L4Re::Rm> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  ___self = cppbind::c::struct_cast<const L4::Cap<L4Re::Rm>>(__self);

  _grant = grant;

  _base = base;

  auto __out = ___self->snd_base(_grant, _base);

  l4_umword_t __ret;

  __ret = __out;

  return __ret;
}

void l4_cap_rm_invalidate(struct l4_cap_rm * __self)
{
  using namespace L4;

  L4::Cap<L4Re::Rm> * ___self;

  ___self = cppbind::c::struct_cast<L4::Cap<L4Re::Rm>>(__self);

  ___self->invalidate();
}

struct l4_cap_dummy_kobject l4_cap_dummy_kobject_new_1(unsigned long cap)
{
  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  _cap = static_cast<L4::Cap_base::Cap_type>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<Dummy_kobject>(_cap);

  struct l4_cap_dummy_kobject __ret;

  static_cast<void>(__out);

  struct l4_cap_dummy_kobject __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<Dummy_kobject>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_dummy_kobject l4_cap_dummy_kobject_new_2(unsigned int cap)
{
  using namespace L4;

  l4_default_caps_t _cap;

  _cap = static_cast<l4_default_caps_t>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<Dummy_kobject>(_cap);

  struct l4_cap_dummy_kobject __ret;

  static_cast<void>(__out);

  struct l4_cap_dummy_kobject __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<Dummy_kobject>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_dummy_kobject l4_cap_dummy_kobject_new_3(l4_cap_idx_t idx)
{
  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  _idx = idx;

  char __buf[8];

  auto __out = new (__buf) L4::Cap<Dummy_kobject>(_idx);

  struct l4_cap_dummy_kobject __ret;

  static_cast<void>(__out);

  struct l4_cap_dummy_kobject __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<Dummy_kobject>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_dummy_kobject l4_cap_dummy_kobject_new_4(unsigned int _1)
{
  using namespace L4;

  L4::Cap_base::No_init_type __1;

  __1 = static_cast<L4::Cap_base::No_init_type>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<Dummy_kobject>(__1);

  struct l4_cap_dummy_kobject __ret;

  static_cast<void>(__out);

  struct l4_cap_dummy_kobject __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<Dummy_kobject>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_dummy_kobject l4_cap_dummy_kobject_move_1(const struct l4_cap_dummy_kobject * __self, const struct l4_cap_dummy_kobject * src)
{
  using namespace L4;

  const L4::Cap<Dummy_kobject> * ___self;
  const L4::Cap<Dummy_kobject> * _src;

  ___self = cppbind::c::struct_cast<const L4::Cap<Dummy_kobject>>(__self);

  _src = cppbind::c::struct_cast<const L4::Cap<Dummy_kobject>>(src);

  auto __out = ___self->move(*_src);

  struct l4_cap_dummy_kobject __ret;

  struct l4_cap_dummy_kobject __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<Dummy_kobject>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_dummy_kobject l4_cap_dummy_kobject_copy_1(const struct l4_cap_dummy_kobject * __self, const struct l4_cap_dummy_kobject * src)
{
  using namespace L4;

  const L4::Cap<Dummy_kobject> * ___self;
  const L4::Cap<Dummy_kobject> * _src;

  ___self = cppbind::c::struct_cast<const L4::Cap<Dummy_kobject>>(__self);

  _src = cppbind::c::struct_cast<const L4::Cap<Dummy_kobject>>(src);

  auto __out = ___self->copy(*_src);

  struct l4_cap_dummy_kobject __ret;

  struct l4_cap_dummy_kobject __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<Dummy_kobject>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct dummy_kobject l4_cap_dummy_kobject_access(const struct l4_cap_dummy_kobject * __self)
{
  using namespace L4;

  const L4::Cap<Dummy_kobject> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<Dummy_kobject>>(__self);

  auto __out = ___self->operator->();

  struct dummy_kobject __ret;

  struct dummy_kobject __tmp;
  cppbind::c::make_non_owning_struct(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_dummy_kobject l4_cap_dummy_kobject_copy_2(const struct l4_cap_dummy_kobject * _1)
{
  using namespace L4;

  const L4::Cap<Dummy_kobject> * __1;

  __1 = cppbind::c::struct_cast<const L4::Cap<Dummy_kobject>>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<Dummy_kobject>(*__1);

  struct l4_cap_dummy_kobject __ret;

  static_cast<void>(__out);

  struct l4_cap_dummy_kobject __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<Dummy_kobject>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_dummy_kobject l4_cap_dummy_kobject_move_2(struct l4_cap_dummy_kobject * _1)
{
  using namespace L4;

  L4::Cap<Dummy_kobject> * __1;

  __1 = cppbind::c::struct_cast<L4::Cap<Dummy_kobject>>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<Dummy_kobject>(std::move(*__1));

  struct l4_cap_dummy_kobject __ret;

  static_cast<void>(__out);

  struct l4_cap_dummy_kobject __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<Dummy_kobject>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

void l4_cap_dummy_kobject_delete(const struct l4_cap_dummy_kobject * __self)
{
  using namespace L4;

  const L4::Cap<Dummy_kobject> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<Dummy_kobject>>(__self);

  ___self->~Cap<Dummy_kobject>();
}

struct l4_cap_dummy_kobject l4_cap_dummy_kobject_new_dummy_kobject(const struct l4_cap_dummy_kobject * o)
{
  using namespace L4;

  const L4::Cap<Dummy_kobject> * _o;

  _o = cppbind::c::struct_cast<const L4::Cap<Dummy_kobject>>(o);

  char __buf[8];

  auto __out = new (__buf) L4::Cap<Dummy_kobject>(*_o);

  struct l4_cap_dummy_kobject __ret;

  static_cast<void>(__out);

  struct l4_cap_dummy_kobject __tmp;
  cppbind::c::make_owning_struct_mem<L4::Cap<Dummy_kobject>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

l4_cap_idx_t l4_cap_dummy_kobject_cap(const struct l4_cap_dummy_kobject * __self)
{
  using namespace L4;

  const L4::Cap<Dummy_kobject> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<Dummy_kobject>>(__self);

  auto __out = ___self->cap();

  l4_cap_idx_t __ret;

  __ret = __out;

  return __ret;
}

int l4_cap_dummy_kobject_is_valid(const struct l4_cap_dummy_kobject * __self)
{
  using namespace L4;

  const L4::Cap<Dummy_kobject> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Cap<Dummy_kobject>>(__self);

  auto __out = ___self->is_valid();

  int __ret;

  __ret = __out;

  return __ret;
}

l4_umword_t l4_cap_dummy_kobject_snd_base(const struct l4_cap_dummy_kobject * __self, unsigned int grant, l4_cap_idx_t base)
{
  using namespace L4;

  const L4::Cap<Dummy_kobject> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  ___self = cppbind::c::struct_cast<const L4::Cap<Dummy_kobject>>(__self);

  _grant = grant;

  _base = base;

  auto __out = ___self->snd_base(_grant, _base);

  l4_umword_t __ret;

  __ret = __out;

  return __ret;
}

void l4_cap_dummy_kobject_invalidate(struct l4_cap_dummy_kobject * __self)
{
  using namespace L4;

  L4::Cap<Dummy_kobject> * ___self;

  ___self = cppbind::c::struct_cast<L4::Cap<Dummy_kobject>>(__self);

  ___self->invalidate();
}

} // extern "C"