#include <cassert>
#include <cerrno>
#include <exception>
#include <stdexcept>
#include <utility>

#include "cppbind/c/c_bind_error_cc.h"
#include "cppbind/c/c_util_cc.h"

#include "/home/timo/github/projects/l4re/l4/pkg/l4re-core/l4re/include/dataspace"

extern "C" {

#include "/home/timo/github/projects/l4re/l4/pkg/cppbind-examples/server/src/c/bind/dataspace_c.h"

long l4_re_dataspace_map(const struct l4_re_dataspace * __self, l4_re_dataspace_offset_t offset, unsigned long flags, l4_re_dataspace_map_addr_t local_addr, l4_re_dataspace_map_addr_t min_addr, l4_re_dataspace_map_addr_t max_addr)
{
  using namespace L4Re;

  const L4Re::Dataspace * ___self;
  L4Re::Dataspace::Offset _offset;
  const L4Re::Dataspace::Flags * _flags;
  L4Re::Dataspace::Map_addr _local_addr;
  L4Re::Dataspace::Map_addr _min_addr;
  L4Re::Dataspace::Map_addr _max_addr;

  ___self = cppbind::c::struct_cast<const L4Re::Dataspace>(__self);

  _offset = offset;

  auto __flags = L4Re::Dataspace::Flags(flags);
  _flags = &__flags;

  _local_addr = local_addr;

  _min_addr = min_addr;

  _max_addr = max_addr;

  auto __out = ___self->map(_offset, *_flags, _local_addr, _min_addr, _max_addr);

  long __ret;

  __ret = __out;

  return __ret;
}

long l4_re_dataspace_map_region(const struct l4_re_dataspace * __self, l4_re_dataspace_offset_t offset, unsigned long flags, l4_re_dataspace_map_addr_t min_addr, l4_re_dataspace_map_addr_t max_addr)
{
  using namespace L4Re;

  const L4Re::Dataspace * ___self;
  L4Re::Dataspace::Offset _offset;
  const L4Re::Dataspace::Flags * _flags;
  L4Re::Dataspace::Map_addr _min_addr;
  L4Re::Dataspace::Map_addr _max_addr;

  ___self = cppbind::c::struct_cast<const L4Re::Dataspace>(__self);

  _offset = offset;

  auto __flags = L4Re::Dataspace::Flags(flags);
  _flags = &__flags;

  _min_addr = min_addr;

  _max_addr = max_addr;

  auto __out = ___self->map_region(_offset, *_flags, _min_addr, _max_addr);

  long __ret;

  __ret = __out;

  return __ret;
}

l4_re_dataspace_size_t l4_re_dataspace_size(const struct l4_re_dataspace * __self)
{
  using namespace L4Re;

  const L4Re::Dataspace * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Dataspace>(__self);

  auto __out = ___self->size();

  l4_re_dataspace_size_t __ret;

  __ret = __out;

  return __ret;
}

struct l4_re_dataspace_flags l4_re_dataspace_flags(const struct l4_re_dataspace * __self)
{
  using namespace L4Re;

  const L4Re::Dataspace * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Dataspace>(__self);

  auto __out = ___self->flags();

  struct l4_re_dataspace_flags __ret;

  struct l4_re_dataspace_flags __tmp;
  cppbind::c::make_owning_struct_args<L4Re::Dataspace::Flags>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

void l4_re_dataspace_delete(const struct l4_re_dataspace * __self)
{
  using namespace L4Re;

  const L4Re::Dataspace * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Dataspace>(__self);

  ___self->~Dataspace();
}

long l4_re_dataspace_clear(const struct l4_re_dataspace * __self, unsigned long long a_1, unsigned long long a_2)
{
  using namespace L4;
  using namespace Ipc;
  using namespace Msg;

  const L4Re::Dataspace * ___self;
  unsigned long long _a_1;
  unsigned long long _a_2;

  ___self = cppbind::c::struct_cast<const L4Re::Dataspace>(__self);

  _a_1 = a_1;

  _a_2 = a_2;

  auto __out = ___self->clear(_a_1, _a_2);

  long __ret;

  __ret = __out;

  return __ret;
}

long l4_re_dataspace_allocate(const struct l4_re_dataspace * __self, unsigned long long a_1, unsigned long long a_2)
{
  using namespace L4;
  using namespace Ipc;
  using namespace Msg;

  const L4Re::Dataspace * ___self;
  unsigned long long _a_1;
  unsigned long long _a_2;

  ___self = cppbind::c::struct_cast<const L4Re::Dataspace>(__self);

  _a_1 = a_1;

  _a_2 = a_2;

  auto __out = ___self->allocate(_a_1, _a_2);

  long __ret;

  __ret = __out;

  return __ret;
}

long l4_re_dataspace_copy_in(const struct l4_re_dataspace * __self, unsigned long long a_1, l4_cap_idx_t a_2, unsigned long long a_3, unsigned long long a_4)
{
  using namespace L4;
  using namespace Ipc;
  using namespace Msg;

  const L4Re::Dataspace * ___self;
  unsigned long long _a_1;
  const L4::Ipc::Cap<L4Re::Dataspace> * _a_2;
  unsigned long long _a_3;
  unsigned long long _a_4;

  ___self = cppbind::c::struct_cast<const L4Re::Dataspace>(__self);

  _a_1 = a_1;

  auto __a_2 = L4::Ipc::Cap<L4Re::Dataspace>(L4::Cap<L4Re::Dataspace>(a_2));
  _a_2 = &__a_2;

  _a_3 = a_3;

  _a_4 = a_4;

  auto __out = ___self->copy_in(_a_1, *_a_2, _a_3, _a_4);

  long __ret;

  __ret = __out;

  return __ret;
}

struct l4_re_dataspace_f l4_re_dataspace_f_new(void)
{
  using namespace L4Re;

  char __buf[1];

  auto __out = new (__buf) L4Re::Dataspace::F();

  struct l4_re_dataspace_f __ret;

  static_cast<void>(__out);

  struct l4_re_dataspace_f __tmp;
  cppbind::c::make_owning_struct_mem<L4Re::Dataspace::F>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

void l4_re_dataspace_f_delete(const struct l4_re_dataspace_f * __self)
{
  using namespace L4Re;

  const L4Re::Dataspace::F * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Dataspace::F>(__self);

  ___self->~F();
}

struct l4_re_dataspace_flags l4_re_dataspace_flags_new_1(void)
{
  using namespace L4Re;

  char __buf[8];

  auto __out = new (__buf) L4Re::Dataspace::Flags();

  struct l4_re_dataspace_flags __ret;

  static_cast<void>(__out);

  struct l4_re_dataspace_flags __tmp;
  cppbind::c::make_owning_struct_mem<L4Re::Dataspace::Flags>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_re_dataspace_flags l4_re_dataspace_flags_new_2(unsigned long f)
{
  using namespace L4Re;

  unsigned long _f;

  _f = f;

  char __buf[8];

  auto __out = new (__buf) L4Re::Dataspace::Flags(_f);

  struct l4_re_dataspace_flags __ret;

  static_cast<void>(__out);

  struct l4_re_dataspace_flags __tmp;
  cppbind::c::make_owning_struct_mem<L4Re::Dataspace::Flags>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_re_dataspace_flags l4_re_dataspace_flags_new_3(unsigned int f)
{
  using namespace L4Re;

  L4Re::Dataspace::F::Flags _f;

  _f = static_cast<L4Re::Dataspace::F::Flags>(f);

  char __buf[8];

  auto __out = new (__buf) L4Re::Dataspace::Flags(_f);

  struct l4_re_dataspace_flags __ret;

  static_cast<void>(__out);

  struct l4_re_dataspace_flags __tmp;
  cppbind::c::make_owning_struct_mem<L4Re::Dataspace::Flags>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

int l4_re_dataspace_flags_r(const struct l4_re_dataspace_flags * __self)
{
  using namespace L4Re;

  const L4Re::Dataspace::Flags * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Dataspace::Flags>(__self);

  auto __out = ___self->r();

  int __ret;

  __ret = __out;

  return __ret;
}

int l4_re_dataspace_flags_w(const struct l4_re_dataspace_flags * __self)
{
  using namespace L4Re;

  const L4Re::Dataspace::Flags * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Dataspace::Flags>(__self);

  auto __out = ___self->w();

  int __ret;

  __ret = __out;

  return __ret;
}

int l4_re_dataspace_flags_x(const struct l4_re_dataspace_flags * __self)
{
  using namespace L4Re;

  const L4Re::Dataspace::Flags * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Dataspace::Flags>(__self);

  auto __out = ___self->x();

  int __ret;

  __ret = __out;

  return __ret;
}

unsigned long l4_re_dataspace_flags_fpage_rights(const struct l4_re_dataspace_flags * __self)
{
  using namespace L4Re;

  const L4Re::Dataspace::Flags * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Dataspace::Flags>(__self);

  auto __out = ___self->fpage_rights();

  unsigned long __ret;

  __ret = __out;

  return __ret;
}

void l4_re_dataspace_flags_delete(const struct l4_re_dataspace_flags * __self)
{
  using namespace L4Re;

  const L4Re::Dataspace::Flags * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Dataspace::Flags>(__self);

  ___self->~Flags();
}

struct l4_re_dataspace_flags l4_re_dataspace_flags_bw_or_assign(struct l4_re_dataspace_flags * __self, unsigned long r)
{
  using namespace L4;
  using namespace Types;

  L4Re::Dataspace::Flags * ___self;
  const L4Re::Dataspace::Flags * _r;

  ___self = cppbind::c::struct_cast<L4Re::Dataspace::Flags>(__self);

  auto __r = L4Re::Dataspace::Flags(r);
  _r = &__r;

  auto __out = ___self->operator|=(*_r);

  struct l4_re_dataspace_flags __ret;

  struct l4_re_dataspace_flags __tmp;
  cppbind::c::make_owning_struct_args<L4Re::Dataspace::Flags>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_re_dataspace_flags l4_re_dataspace_flags_bw_and_assign(struct l4_re_dataspace_flags * __self, unsigned long r)
{
  using namespace L4;
  using namespace Types;

  L4Re::Dataspace::Flags * ___self;
  const L4Re::Dataspace::Flags * _r;

  ___self = cppbind::c::struct_cast<L4Re::Dataspace::Flags>(__self);

  auto __r = L4Re::Dataspace::Flags(r);
  _r = &__r;

  auto __out = ___self->operator&=(*_r);

  struct l4_re_dataspace_flags __ret;

  struct l4_re_dataspace_flags __tmp;
  cppbind::c::make_owning_struct_args<L4Re::Dataspace::Flags>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

int l4_re_dataspace_flags_cast_bool(const struct l4_re_dataspace_flags * __self)
{
  using namespace L4;
  using namespace Types;

  const L4Re::Dataspace::Flags * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Dataspace::Flags>(__self);

  auto __out = ___self->operator bool();

  int __ret;

  __ret = __out;

  return __ret;
}

struct l4_re_dataspace_flags l4_re_dataspace_flags_bw_not(const struct l4_re_dataspace_flags * __self)
{
  using namespace L4;
  using namespace Types;

  const L4Re::Dataspace::Flags * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Dataspace::Flags>(__self);

  auto __out = ___self->operator~();

  struct l4_re_dataspace_flags __ret;

  struct l4_re_dataspace_flags __tmp;
  cppbind::c::make_owning_struct_args<L4Re::Dataspace::Flags>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

} // extern "C"