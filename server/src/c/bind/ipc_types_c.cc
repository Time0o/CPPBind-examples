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

#include "/home/timo/github/projects/l4re/l4/pkg/cppbind-examples/server/src/c/bind/ipc_types_c.h"

l4_cap_idx_t l4_ipc_cap_dataspace_new_1(l4_cap_idx_t cap)
{
  using namespace L4;
  using namespace Ipc;

  const L4::Cap<L4Re::Dataspace> * _cap;

  auto __cap = L4::Cap<L4Re::Dataspace>(cap);
  _cap = &__cap;

  char __buf[8];

  auto __out = new (__buf) L4::Ipc::Cap<L4Re::Dataspace>(*_cap);

  l4_cap_idx_t __ret;

  return __out->cap().cap();

  return __ret;
}

l4_cap_idx_t l4_ipc_cap_dataspace_new_2(void)
{
  using namespace L4;
  using namespace Ipc;

  char __buf[8];

  auto __out = new (__buf) L4::Ipc::Cap<L4Re::Dataspace>();

  l4_cap_idx_t __ret;

  return __out->cap().cap();

  return __ret;
}

l4_cap_idx_t l4_ipc_cap_dataspace_new_3(l4_cap_idx_t cap, unsigned char rights)
{
  using namespace L4;
  using namespace Ipc;

  const L4::Cap<L4Re::Dataspace> * _cap;
  unsigned char _rights;

  auto __cap = L4::Cap<L4Re::Dataspace>(cap);
  _cap = &__cap;

  _rights = rights;

  char __buf[8];

  auto __out = new (__buf) L4::Ipc::Cap<L4Re::Dataspace>(*_cap, _rights);

  l4_cap_idx_t __ret;

  return __out->cap().cap();

  return __ret;
}

l4_cap_idx_t l4_ipc_cap_dataspace_from_ci(l4_cap_idx_t c)
{
  using namespace L4;
  using namespace Ipc;

  l4_cap_idx_t _c;

  _c = c;

  auto __out = L4::Ipc::Cap<L4Re::Dataspace>::from_ci(_c);

  l4_cap_idx_t __ret;

  return __out.cap().cap();

  return __ret;
}

l4_cap_idx_t l4_ipc_cap_dataspace_cap(l4_cap_idx_t __self)
{
  using namespace L4;
  using namespace Ipc;

  const L4::Ipc::Cap<L4Re::Dataspace> * ___self;

  auto ____self = L4::Ipc::Cap<L4Re::Dataspace>(L4::Cap<L4Re::Dataspace>(__self));
  ___self = &____self;

  auto __out = ___self->cap();

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

unsigned int l4_ipc_cap_dataspace_rights(l4_cap_idx_t __self)
{
  using namespace L4;
  using namespace Ipc;

  const L4::Ipc::Cap<L4Re::Dataspace> * ___self;

  auto ____self = L4::Ipc::Cap<L4Re::Dataspace>(L4::Cap<L4Re::Dataspace>(__self));
  ___self = &____self;

  auto __out = ___self->rights();

  unsigned int __ret;

  __ret = __out;

  return __ret;
}

int l4_ipc_cap_dataspace_is_valid(l4_cap_idx_t __self)
{
  using namespace L4;
  using namespace Ipc;

  const L4::Ipc::Cap<L4Re::Dataspace> * ___self;

  auto ____self = L4::Ipc::Cap<L4Re::Dataspace>(L4::Cap<L4Re::Dataspace>(__self));
  ___self = &____self;

  auto __out = ___self->is_valid();

  int __ret;

  __ret = __out;

  return __ret;
}

l4_cap_idx_t l4_ipc_cap_dataspace_copy(l4_cap_idx_t _1)
{
  using namespace L4;
  using namespace Ipc;

  const L4::Ipc::Cap<L4Re::Dataspace> * __1;

  auto ___1 = L4::Ipc::Cap<L4Re::Dataspace>(L4::Cap<L4Re::Dataspace>(_1));
  __1 = &___1;

  char __buf[8];

  auto __out = new (__buf) L4::Ipc::Cap<L4Re::Dataspace>(*__1);

  l4_cap_idx_t __ret;

  return __out->cap().cap();

  return __ret;
}

l4_cap_idx_t l4_ipc_cap_dataspace_move(l4_cap_idx_t _1)
{
  using namespace L4;
  using namespace Ipc;

  L4::Ipc::Cap<L4Re::Dataspace> * __1;

  auto ___1 = L4::Ipc::Cap<L4Re::Dataspace>(L4::Cap<L4Re::Dataspace>(_1));
  __1 = &___1;

  char __buf[8];

  auto __out = new (__buf) L4::Ipc::Cap<L4Re::Dataspace>(std::move(*__1));

  l4_cap_idx_t __ret;

  return __out->cap().cap();

  return __ret;
}

void l4_ipc_cap_dataspace_delete(l4_cap_idx_t __self)
{
  using namespace L4;
  using namespace Ipc;

  const L4::Ipc::Cap<L4Re::Dataspace> * ___self;

  auto ____self = L4::Ipc::Cap<L4Re::Dataspace>(L4::Cap<L4Re::Dataspace>(__self));
  ___self = &____self;

  ___self->~Cap<L4Re::Dataspace>();
}

l4_cap_idx_t l4_ipc_cap_dataspace_new_dataspace(l4_cap_idx_t o)
{
  using namespace L4;
  using namespace Ipc;

  const L4::Ipc::Cap<L4Re::Dataspace> * _o;

  auto __o = L4::Ipc::Cap<L4Re::Dataspace>(L4::Cap<L4Re::Dataspace>(o));
  _o = &__o;

  char __buf[8];

  auto __out = new (__buf) L4::Ipc::Cap<L4Re::Dataspace>(*_o);

  l4_cap_idx_t __ret;

  return __out->cap().cap();

  return __ret;
}

} // extern "C"