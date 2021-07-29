#include <cassert>
#include <cerrno>
#include <exception>
#include <stdexcept>
#include <utility>

#include "cppbind/c/c_bind_error_cc.h"
#include "cppbind/c/c_util_cc.h"

#include "/home/timo/github/projects/l4re/l4/pkg/l4re-core/l4sys/include/cxx/ipc_types"
#include </home/timo/github/projects/l4re/l4/pkg/l4re-core/l4re/include/dataspace>

extern "C" {

#include "/home/timo/github/projects/l4re/l4/pkg/cppbind-examples/server/src/rust/src/bind/ipc_types_c.h"

struct l4_cap_dataspace
{
  union {
    char mem[8];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_ipc_cap_dataspace l4_ipc_cap_dataspace_new_1(const struct l4_cap_dataspace * cap)
{
  using namespace L4;
  using namespace Ipc;

  const L4::Cap<L4Re::Dataspace> * _cap;

  _cap = cppbind::c::struct_cast<const L4::Cap<L4Re::Dataspace>>(cap);

  char __buf[8];

  auto __out = new (__buf) L4::Ipc::Cap<L4Re::Dataspace>(*_cap);

  struct l4_ipc_cap_dataspace __ret;

  static_cast<void>(__out);

  struct l4_ipc_cap_dataspace __tmp;
  cppbind::c::make_owning_struct_mem<L4::Ipc::Cap<L4Re::Dataspace>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_ipc_cap_dataspace l4_ipc_cap_dataspace_new_2(void)
{
  using namespace L4;
  using namespace Ipc;

  char __buf[8];

  auto __out = new (__buf) L4::Ipc::Cap<L4Re::Dataspace>();

  struct l4_ipc_cap_dataspace __ret;

  static_cast<void>(__out);

  struct l4_ipc_cap_dataspace __tmp;
  cppbind::c::make_owning_struct_mem<L4::Ipc::Cap<L4Re::Dataspace>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_ipc_cap_dataspace l4_ipc_cap_dataspace_new_3(const struct l4_cap_dataspace * cap, unsigned char rights)
{
  using namespace L4;
  using namespace Ipc;

  const L4::Cap<L4Re::Dataspace> * _cap;
  unsigned char _rights;

  _cap = cppbind::c::struct_cast<const L4::Cap<L4Re::Dataspace>>(cap);

  _rights = rights;

  char __buf[8];

  auto __out = new (__buf) L4::Ipc::Cap<L4Re::Dataspace>(*_cap, _rights);

  struct l4_ipc_cap_dataspace __ret;

  static_cast<void>(__out);

  struct l4_ipc_cap_dataspace __tmp;
  cppbind::c::make_owning_struct_mem<L4::Ipc::Cap<L4Re::Dataspace>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_ipc_cap_dataspace l4_ipc_cap_dataspace_from_ci(l4_cap_idx_t c)
{
  using namespace L4;
  using namespace Ipc;

  l4_cap_idx_t _c;

  _c = c;

  auto __out = L4::Ipc::Cap<L4Re::Dataspace>::from_ci(_c);

  struct l4_ipc_cap_dataspace __ret;

  struct l4_ipc_cap_dataspace __tmp;
  cppbind::c::make_owning_struct_args<L4::Ipc::Cap<L4Re::Dataspace>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

struct l4_cap_dataspace l4_ipc_cap_dataspace_cap(const struct l4_ipc_cap_dataspace * __self)
{
  using namespace L4;
  using namespace Ipc;

  const L4::Ipc::Cap<L4Re::Dataspace> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Ipc::Cap<L4Re::Dataspace>>(__self);

  auto __out = ___self->cap();

  struct l4_cap_dataspace __ret;

  struct l4_cap_dataspace __tmp;
  cppbind::c::make_owning_struct_args<L4::Cap<L4Re::Dataspace>>(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

unsigned int l4_ipc_cap_dataspace_rights(const struct l4_ipc_cap_dataspace * __self)
{
  using namespace L4;
  using namespace Ipc;

  const L4::Ipc::Cap<L4Re::Dataspace> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Ipc::Cap<L4Re::Dataspace>>(__self);

  auto __out = ___self->rights();

  unsigned int __ret;

  __ret = __out;

  return __ret;
}

int l4_ipc_cap_dataspace_is_valid(const struct l4_ipc_cap_dataspace * __self)
{
  using namespace L4;
  using namespace Ipc;

  const L4::Ipc::Cap<L4Re::Dataspace> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Ipc::Cap<L4Re::Dataspace>>(__self);

  auto __out = ___self->is_valid();

  int __ret;

  __ret = __out;

  return __ret;
}

struct l4_ipc_cap_dataspace l4_ipc_cap_dataspace_copy(const struct l4_ipc_cap_dataspace * _1)
{
  using namespace L4;
  using namespace Ipc;

  const L4::Ipc::Cap<L4Re::Dataspace> * __1;

  __1 = cppbind::c::struct_cast<const L4::Ipc::Cap<L4Re::Dataspace>>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Ipc::Cap<L4Re::Dataspace>(*__1);

  struct l4_ipc_cap_dataspace __ret;

  static_cast<void>(__out);

  struct l4_ipc_cap_dataspace __tmp;
  cppbind::c::make_owning_struct_mem<L4::Ipc::Cap<L4Re::Dataspace>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct l4_ipc_cap_dataspace l4_ipc_cap_dataspace_move(struct l4_ipc_cap_dataspace * _1)
{
  using namespace L4;
  using namespace Ipc;

  L4::Ipc::Cap<L4Re::Dataspace> * __1;

  __1 = cppbind::c::struct_cast<L4::Ipc::Cap<L4Re::Dataspace>>(_1);

  char __buf[8];

  auto __out = new (__buf) L4::Ipc::Cap<L4Re::Dataspace>(std::move(*__1));

  struct l4_ipc_cap_dataspace __ret;

  static_cast<void>(__out);

  struct l4_ipc_cap_dataspace __tmp;
  cppbind::c::make_owning_struct_mem<L4::Ipc::Cap<L4Re::Dataspace>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

void l4_ipc_cap_dataspace_delete(const struct l4_ipc_cap_dataspace * __self)
{
  using namespace L4;
  using namespace Ipc;

  const L4::Ipc::Cap<L4Re::Dataspace> * ___self;

  ___self = cppbind::c::struct_cast<const L4::Ipc::Cap<L4Re::Dataspace>>(__self);

  ___self->~Cap<L4Re::Dataspace>();
}

struct l4_ipc_cap_dataspace l4_ipc_cap_dataspace_new_dataspace(const struct l4_ipc_cap_dataspace * o)
{
  using namespace L4;
  using namespace Ipc;

  const L4::Ipc::Cap<L4Re::Dataspace> * _o;

  _o = cppbind::c::struct_cast<const L4::Ipc::Cap<L4Re::Dataspace>>(o);

  char __buf[8];

  auto __out = new (__buf) L4::Ipc::Cap<L4Re::Dataspace>(*_o);

  struct l4_ipc_cap_dataspace __ret;

  static_cast<void>(__out);

  struct l4_ipc_cap_dataspace __tmp;
  cppbind::c::make_owning_struct_mem<L4::Ipc::Cap<L4Re::Dataspace>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

} // extern "C"