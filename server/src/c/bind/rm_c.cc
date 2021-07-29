#include <cassert>
#include <cerrno>
#include <exception>
#include <stdexcept>
#include <utility>

#include "cppbind/c/c_bind_error_cc.h"
#include "cppbind/c/c_util_cc.h"

#include "/home/timo/github/projects/l4re/l4/pkg/l4re-core/l4re/include/rm"
#include </home/timo/github/projects/l4re/l4/pkg/l4re-core/l4re/include/dataspace>
#include </home/timo/github/projects/l4re/l4/pkg/l4re-core/l4re/include/rm>

extern "C" {

#include "/home/timo/github/projects/l4re/l4/pkg/cppbind-examples/server/src/c/bind/rm_c.h"

long l4_re_rm_reserve_area(const struct l4_re_rm * __self, l4_addr_t * start, unsigned long size, l4_uint_32_t flags, unsigned char align)
{
  using namespace L4Re;

  const L4Re::Rm * ___self;
  l4_addr_t * _start;
  unsigned long _size;
  const L4Re::Rm::Flags _flags_default = L4Re::Rm::Flags(0);
  const L4Re::Rm::Flags * _flags = &_flags_default;
  unsigned char _align = 12;

  ___self = cppbind::c::struct_cast<const L4Re::Rm>(__self);

  _start = start;

  _size = size;

  auto __flags = L4Re::Rm::Flags(flags);
  _flags = &__flags;

  _align = align;

  auto __out = ___self->reserve_area(_start, _size, *_flags, _align);

  long __ret;

  __ret = __out;

  return __ret;
}

long l4_re_rm_attach(const struct l4_re_rm * __self, l4_addr_t * start, unsigned long size, l4_uint_32_t flags, l4_cap_idx_t mem, l4_re_rm_offset_t offs, unsigned char align)
{
  using namespace L4Re;

  const L4Re::Rm * ___self;
  l4_addr_t * _start;
  unsigned long _size;
  const L4Re::Rm::Flags * _flags;
  const L4::Ipc::Cap<L4Re::Dataspace> * _mem;
  L4Re::Rm::Offset _offs = 0;
  unsigned char _align = 12;

  ___self = cppbind::c::struct_cast<const L4Re::Rm>(__self);

  _start = start;

  _size = size;

  auto __flags = L4Re::Rm::Flags(flags);
  _flags = &__flags;

  auto __mem = L4::Ipc::Cap<L4Re::Dataspace>(L4::Cap<L4Re::Dataspace>(mem));
  _mem = &__mem;

  _offs = offs;

  _align = align;

  auto __out = ___self->attach(_start, _size, *_flags, *_mem, _offs, _align);

  long __ret;

  __ret = __out;

  return __ret;
}

int l4_re_rm_detach_1(const struct l4_re_rm * __self, l4_addr_t addr, l4_cap_idx_t mem, l4_cap_idx_t task)
{
  using namespace L4Re;

  const L4Re::Rm * ___self;
  l4_addr_t _addr;
  L4::Cap<L4Re::Dataspace> * _mem;
  const L4::Cap<L4::Task> _task_default = This_task;
  const L4::Cap<L4::Task> * _task = &_task_default;

  ___self = cppbind::c::struct_cast<const L4Re::Rm>(__self);

  _addr = addr;

  auto __mem = L4::Cap<L4Re::Dataspace>(mem);
  _mem = &__mem;

  auto __task = L4::Cap<L4::Task>(task);
  _task = &__task;

  auto __out = ___self->detach(_addr, _mem, *_task);

  int __ret;

  __ret = __out;

  return __ret;
}

int l4_re_rm_detach_2(const struct l4_re_rm * __self, void * addr, l4_cap_idx_t mem, l4_cap_idx_t task)
{
  using namespace L4Re;

  const L4Re::Rm * ___self;
  void * _addr;
  L4::Cap<L4Re::Dataspace> * _mem;
  const L4::Cap<L4::Task> _task_default = This_task;
  const L4::Cap<L4::Task> * _task = &_task_default;

  ___self = cppbind::c::struct_cast<const L4Re::Rm>(__self);

  _addr = addr;

  auto __mem = L4::Cap<L4Re::Dataspace>(mem);
  _mem = &__mem;

  auto __task = L4::Cap<L4::Task>(task);
  _task = &__task;

  auto __out = ___self->detach(_addr, _mem, *_task);

  int __ret;

  __ret = __out;

  return __ret;
}

int l4_re_rm_detach_3(const struct l4_re_rm * __self, l4_addr_t start, unsigned long size, l4_cap_idx_t mem, l4_cap_idx_t task)
{
  using namespace L4Re;

  const L4Re::Rm * ___self;
  l4_addr_t _start;
  unsigned long _size;
  L4::Cap<L4Re::Dataspace> * _mem;
  const L4::Cap<L4::Task> * _task;

  ___self = cppbind::c::struct_cast<const L4Re::Rm>(__self);

  _start = start;

  _size = size;

  auto __mem = L4::Cap<L4Re::Dataspace>(mem);
  _mem = &__mem;

  auto __task = L4::Cap<L4::Task>(task);
  _task = &__task;

  auto __out = ___self->detach(_start, _size, _mem, *_task);

  int __ret;

  __ret = __out;

  return __ret;
}

int l4_re_rm_find(struct l4_re_rm * __self, l4_addr_t * addr, unsigned long * size, l4_re_rm_offset_t * offset, l4_re_rm_flags_t * flags, l4_cap_idx_t m)
{
  using namespace L4Re;

  L4Re::Rm * ___self;
  l4_addr_t * _addr;
  unsigned long * _size;
  L4Re::Rm::Offset * _offset;
  L4Re::Rm::Flags * _flags;
  L4::Cap<L4Re::Dataspace> * _m;

  ___self = cppbind::c::struct_cast<L4Re::Rm>(__self);

  _addr = addr;

  _size = size;

  _offset = offset;

  _flags = cppbind::c::struct_cast<L4Re::Rm::Flags>(flags);

  auto __m = L4::Cap<L4Re::Dataspace>(m);
  _m = &__m;

  auto __out = ___self->find(_addr, _size, _offset, _flags, _m);

  int __ret;

  __ret = __out;

  return __ret;
}

int l4_re_rm_detach_4(const struct l4_re_rm * __self, l4_addr_t start, unsigned long size, l4_cap_idx_t mem, l4_cap_idx_t task, unsigned int flags)
{
  using namespace L4Re;

  const L4Re::Rm * ___self;
  l4_addr_t _start;
  unsigned long _size;
  L4::Cap<L4Re::Dataspace> * _mem;
  const L4::Cap<L4::Task> * _task;
  unsigned int _flags;

  ___self = cppbind::c::struct_cast<const L4Re::Rm>(__self);

  _start = start;

  _size = size;

  auto __mem = L4::Cap<L4Re::Dataspace>(mem);
  _mem = &__mem;

  auto __task = L4::Cap<L4::Task>(task);
  _task = &__task;

  _flags = flags;

  auto __out = ___self->detach(_start, _size, _mem, *_task, _flags);

  int __ret;

  __ret = __out;

  return __ret;
}

void l4_re_rm_delete(const struct l4_re_rm * __self)
{
  using namespace L4Re;

  const L4Re::Rm * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Rm>(__self);

  ___self->~Rm();
}

long l4_re_rm_attach_void(const struct l4_re_rm * __self, void ** start, unsigned long size, l4_uint_32_t flags, l4_cap_idx_t mem, l4_re_rm_offset_t offs, unsigned char align)
{
  using namespace L4Re;

  const L4Re::Rm * ___self;
  void ** _start;
  unsigned long _size;
  const L4Re::Rm::Flags * _flags;
  const L4::Ipc::Cap<L4Re::Dataspace> * _mem;
  L4Re::Rm::Offset _offs = 0;
  unsigned char _align = 12;

  ___self = cppbind::c::struct_cast<const L4Re::Rm>(__self);

  _start = start;

  _size = size;

  auto __flags = L4Re::Rm::Flags(flags);
  _flags = &__flags;

  auto __mem = L4::Ipc::Cap<L4Re::Dataspace>(L4::Cap<L4Re::Dataspace>(mem));
  _mem = &__mem;

  _offs = offs;

  _align = align;

  auto __out = ___self->attach<void>(_start, _size, *_flags, *_mem, _offs, _align);

  long __ret;

  __ret = __out;

  return __ret;
}

long l4_re_rm_free_area(const struct l4_re_rm * __self, unsigned long a)
{
  using namespace L4;
  using namespace Ipc;
  using namespace Msg;

  const L4Re::Rm * ___self;
  unsigned long _a;

  ___self = cppbind::c::struct_cast<const L4Re::Rm>(__self);

  _a = a;

  auto __out = ___self->free_area(_a);

  long __ret;

  __ret = __out;

  return __ret;
}

struct l4_re_rm_f l4_re_rm_f_new(void)
{
  using namespace L4Re;

  char __buf[1];

  auto __out = new (__buf) L4Re::Rm::F();

  struct l4_re_rm_f __ret;

  static_cast<void>(__out);

  struct l4_re_rm_f __tmp;
  cppbind::c::make_owning_struct_mem<L4Re::Rm::F>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

void l4_re_rm_f_delete(const struct l4_re_rm_f * __self)
{
  using namespace L4Re;

  const L4Re::Rm::F * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Rm::F>(__self);

  ___self->~F();
}

struct l4_re_rm_f_flags l4_re_rm_f_flags_new_1(void)
{
  using namespace L4Re;

  char __buf[4];

  auto __out = new (__buf) L4Re::Rm::F::Flags();

  struct l4_re_rm_f_flags __ret;

  static_cast<void>(__out);

  struct l4_re_rm_f_flags __tmp;
  cppbind::c::make_owning_struct_mem<L4Re::Rm::F::Flags>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_re_rm_f_flags l4_re_rm_f_flags_new_2(l4_uint_32_t f)
{
  using namespace L4Re;

  l4_uint32_t _f;

  _f = f;

  char __buf[4];

  auto __out = new (__buf) L4Re::Rm::F::Flags(_f);

  struct l4_re_rm_f_flags __ret;

  static_cast<void>(__out);

  struct l4_re_rm_f_flags __tmp;
  cppbind::c::make_owning_struct_mem<L4Re::Rm::F::Flags>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_re_rm_f_flags l4_re_rm_f_flags_new_3(l4_uint_32_t rf)
{
  using namespace L4Re;

  L4Re::Rm::F::Attach_flags _rf;

  _rf = static_cast<L4Re::Rm::F::Attach_flags>(rf);

  char __buf[4];

  auto __out = new (__buf) L4Re::Rm::F::Flags(_rf);

  struct l4_re_rm_f_flags __ret;

  static_cast<void>(__out);

  struct l4_re_rm_f_flags __tmp;
  cppbind::c::make_owning_struct_mem<L4Re::Rm::F::Flags>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_re_rm_f_flags l4_re_rm_f_flags_new_4(l4_uint_16_t rf)
{
  using namespace L4Re;

  L4Re::Rm::F::Region_flags _rf;

  _rf = static_cast<L4Re::Rm::F::Region_flags>(rf);

  char __buf[4];

  auto __out = new (__buf) L4Re::Rm::F::Flags(_rf);

  struct l4_re_rm_f_flags __ret;

  static_cast<void>(__out);

  struct l4_re_rm_f_flags __tmp;
  cppbind::c::make_owning_struct_mem<L4Re::Rm::F::Flags>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

l4_uint_16_t l4_re_rm_f_flags_region_flags(const struct l4_re_rm_f_flags * __self)
{
  using namespace L4Re;

  const L4Re::Rm::F::Flags * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Rm::F::Flags>(__self);

  auto __out = ___self->region_flags();

  l4_uint_16_t __ret;

  __ret = static_cast<l4_uint_16_t>(__out);

  return __ret;
}

l4_uint_32_t l4_re_rm_f_flags_attach_flags(const struct l4_re_rm_f_flags * __self)
{
  using namespace L4Re;

  const L4Re::Rm::F::Flags * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Rm::F::Flags>(__self);

  auto __out = ___self->attach_flags();

  l4_uint_32_t __ret;

  __ret = static_cast<l4_uint_32_t>(__out);

  return __ret;
}

int l4_re_rm_f_flags_r(const struct l4_re_rm_f_flags * __self)
{
  using namespace L4Re;

  const L4Re::Rm::F::Flags * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Rm::F::Flags>(__self);

  auto __out = ___self->r();

  int __ret;

  __ret = __out;

  return __ret;
}

int l4_re_rm_f_flags_w(const struct l4_re_rm_f_flags * __self)
{
  using namespace L4Re;

  const L4Re::Rm::F::Flags * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Rm::F::Flags>(__self);

  auto __out = ___self->w();

  int __ret;

  __ret = __out;

  return __ret;
}

int l4_re_rm_f_flags_x(const struct l4_re_rm_f_flags * __self)
{
  using namespace L4Re;

  const L4Re::Rm::F::Flags * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Rm::F::Flags>(__self);

  auto __out = ___self->x();

  int __ret;

  __ret = __out;

  return __ret;
}

unsigned int l4_re_rm_f_flags_cap_rights(const struct l4_re_rm_f_flags * __self)
{
  using namespace L4Re;

  const L4Re::Rm::F::Flags * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Rm::F::Flags>(__self);

  auto __out = ___self->cap_rights();

  unsigned int __ret;

  __ret = __out;

  return __ret;
}

struct l4_re_rm_f_flags l4_re_rm_f_flags_copy(const struct l4_re_rm_f_flags * _1)
{
  using namespace L4Re;

  const L4Re::Rm::F::Flags * __1;

  __1 = cppbind::c::struct_cast<const L4Re::Rm::F::Flags>(_1);

  char __buf[4];

  auto __out = new (__buf) L4Re::Rm::F::Flags(*__1);

  struct l4_re_rm_f_flags __ret;

  static_cast<void>(__out);

  struct l4_re_rm_f_flags __tmp;
  cppbind::c::make_owning_struct_mem<L4Re::Rm::F::Flags>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_re_rm_f_flags l4_re_rm_f_flags_move(struct l4_re_rm_f_flags * _1)
{
  using namespace L4Re;

  L4Re::Rm::F::Flags * __1;

  __1 = cppbind::c::struct_cast<L4Re::Rm::F::Flags>(_1);

  char __buf[4];

  auto __out = new (__buf) L4Re::Rm::F::Flags(std::move(*__1));

  struct l4_re_rm_f_flags __ret;

  static_cast<void>(__out);

  struct l4_re_rm_f_flags __tmp;
  cppbind::c::make_owning_struct_mem<L4Re::Rm::F::Flags>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

void l4_re_rm_f_flags_delete(const struct l4_re_rm_f_flags * __self)
{
  using namespace L4Re;

  const L4Re::Rm::F::Flags * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Rm::F::Flags>(__self);

  ___self->~Flags();
}

struct l4_re_rm_f_flags l4_re_rm_f_flags_bw_or_assign(struct l4_re_rm_f_flags * __self, l4_uint_32_t r)
{
  using namespace L4;
  using namespace Types;

  L4Re::Rm::F::Flags * ___self;
  const L4Re::Rm::F::Flags * _r;

  ___self = cppbind::c::struct_cast<L4Re::Rm::F::Flags>(__self);

  auto __r = L4Re::Rm::F::Flags(r);
  _r = &__r;

  auto __out = ___self->operator|=(*_r);

  struct l4_re_rm_f_flags __ret;

  struct l4_re_rm_f_flags __tmp;
  cppbind::c::make_owning_struct_args<L4Re::Rm::F::Flags>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_re_rm_f_flags l4_re_rm_f_flags_bw_and_assign(struct l4_re_rm_f_flags * __self, l4_uint_32_t r)
{
  using namespace L4;
  using namespace Types;

  L4Re::Rm::F::Flags * ___self;
  const L4Re::Rm::F::Flags * _r;

  ___self = cppbind::c::struct_cast<L4Re::Rm::F::Flags>(__self);

  auto __r = L4Re::Rm::F::Flags(r);
  _r = &__r;

  auto __out = ___self->operator&=(*_r);

  struct l4_re_rm_f_flags __ret;

  struct l4_re_rm_f_flags __tmp;
  cppbind::c::make_owning_struct_args<L4Re::Rm::F::Flags>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

int l4_re_rm_f_flags_cast_bool(const struct l4_re_rm_f_flags * __self)
{
  using namespace L4;
  using namespace Types;

  const L4Re::Rm::F::Flags * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Rm::F::Flags>(__self);

  auto __out = ___self->operator bool();

  int __ret;

  __ret = __out;

  return __ret;
}

struct l4_re_rm_f_flags l4_re_rm_f_flags_bw_not(const struct l4_re_rm_f_flags * __self)
{
  using namespace L4;
  using namespace Types;

  const L4Re::Rm::F::Flags * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Rm::F::Flags>(__self);

  auto __out = ___self->operator~();

  struct l4_re_rm_f_flags __ret;

  struct l4_re_rm_f_flags __tmp;
  cppbind::c::make_owning_struct_args<L4Re::Rm::F::Flags>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

} // extern "C"