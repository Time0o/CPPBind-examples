#include <cassert>
#include <cerrno>
#include <exception>
#include <stdexcept>
#include <utility>

#include "cppbind/c/c_bind_error_cc.h"
#include "cppbind/c/c_util_cc.h"

#include "/home/timo/github/l4re/l4/pkg/l4re-c-examples/shared/example_pingpong_shared.h"
#include "/home/timo/github/l4re/l4/pkg/l4re-c-examples/shared/example_pingpong_shared.h"

extern "C" {

#include "/home/timo/github/l4re/l4/pkg/l4re-c-examples/server/src/c/bind/example_pingpong_shared_c.h"

int pseudo_ping_pong_ping(const struct pseudo_ping_pong * __self, l4_int_32_t arg, l4_int_32_t * res)
{
  using namespace pseudo;

  const pseudo::Ping_pong * ___self;
  l4_int32_t _arg;
  l4_int32_t * _res;

  ___self = cppbind::c::struct_cast<const pseudo::Ping_pong>(__self);

  _arg = arg;

  _res = res;

  auto __out = ___self->ping(_arg, _res);

  int __ret;

  __ret = __out;

  return __ret;
}

struct pseudo_ping_pong pseudo_ping_pong_new(void)
{
  using namespace pseudo;

  char __buf[1];

  auto __out = new (__buf) pseudo::Ping_pong();

  struct pseudo_ping_pong __ret;

  static_cast<void>(__out);

  struct pseudo_ping_pong __tmp;
  cppbind::c::make_owning_struct_mem<pseudo::Ping_pong>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

void pseudo_ping_pong_delete(const struct pseudo_ping_pong * __self)
{
  using namespace pseudo;

  const pseudo::Ping_pong * ___self;

  ___self = cppbind::c::struct_cast<const pseudo::Ping_pong>(__self);

  ___self->~Ping_pong();
}

struct pseudo_cap_base pseudo_cap_base_new(l4_cap_idx_t c)
{
  using namespace pseudo;

  l4_cap_idx_t _c;

  _c = c;

  char __buf[8];

  auto __out = new (__buf) pseudo::Cap_base(_c);

  struct pseudo_cap_base __ret;

  static_cast<void>(__out);

  struct pseudo_cap_base __tmp;
  cppbind::c::make_owning_struct_mem<pseudo::Cap_base>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct pseudo_cap_base pseudo_cap_base_copy(const struct pseudo_cap_base * _1)
{
  using namespace pseudo;

  const pseudo::Cap_base * __1;

  __1 = cppbind::c::struct_cast<const pseudo::Cap_base>(_1);

  char __buf[8];

  auto __out = new (__buf) pseudo::Cap_base(*__1);

  struct pseudo_cap_base __ret;

  static_cast<void>(__out);

  struct pseudo_cap_base __tmp;
  cppbind::c::make_owning_struct_mem<pseudo::Cap_base>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct pseudo_cap_base pseudo_cap_base_move(struct pseudo_cap_base * _1)
{
  using namespace pseudo;

  pseudo::Cap_base * __1;

  __1 = cppbind::c::struct_cast<pseudo::Cap_base>(_1);

  char __buf[8];

  auto __out = new (__buf) pseudo::Cap_base(std::move(*__1));

  struct pseudo_cap_base __ret;

  static_cast<void>(__out);

  struct pseudo_cap_base __tmp;
  cppbind::c::make_owning_struct_mem<pseudo::Cap_base>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

void pseudo_cap_base_delete(const struct pseudo_cap_base * __self)
{
  using namespace pseudo;

  const pseudo::Cap_base * ___self;

  ___self = cppbind::c::struct_cast<const pseudo::Cap_base>(__self);

  ___self->~Cap_base();
}

struct pseudo_cap_ping_pong pseudo_cap_ping_pong_new(const struct pseudo_ping_pong * p)
{
  using namespace pseudo;

  const pseudo::Ping_pong * _p;

  _p = cppbind::c::struct_cast<const pseudo::Ping_pong>(p);

  char __buf[8];

  auto __out = new (__buf) pseudo::Cap<pseudo::Ping_pong>(_p);

  struct pseudo_cap_ping_pong __ret;

  static_cast<void>(__out);

  struct pseudo_cap_ping_pong __tmp;
  cppbind::c::make_owning_struct_mem<pseudo::Cap<pseudo::Ping_pong>>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

struct pseudo_ping_pong pseudo_cap_ping_pong_access(const struct pseudo_cap_ping_pong * __self)
{
  using namespace pseudo;

  const pseudo::Cap<pseudo::Ping_pong> * ___self;

  ___self = cppbind::c::struct_cast<const pseudo::Cap<pseudo::Ping_pong>>(__self);

  auto __out = ___self->operator->();

  struct pseudo_ping_pong __ret;

  struct pseudo_ping_pong __tmp;
  cppbind::c::make_non_owning_struct(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

void pseudo_cap_ping_pong_delete(const struct pseudo_cap_ping_pong * __self)
{
  using namespace pseudo;

  const pseudo::Cap<pseudo::Ping_pong> * ___self;

  ___self = cppbind::c::struct_cast<const pseudo::Cap<pseudo::Ping_pong>>(__self);

  ___self->~Cap<pseudo::Ping_pong>();
}

} // extern "C"