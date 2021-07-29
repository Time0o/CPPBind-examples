#include <cassert>
#include <cerrno>
#include <exception>
#include <stdexcept>
#include <utility>

#include "cppbind/c/c_bind_error_cc.h"
#include "cppbind/c/c_util_cc.h"

#include "/home/timo/github/projects/l4re/l4/pkg/cppbind-examples/shared/example_kobject_shared.h"

extern "C" {

#include "/home/timo/github/projects/l4re/l4/pkg/cppbind-examples/server/src/rust/src/bind/example_kobject_shared_c.h"

void dummy_kobject_delete(const struct dummy_kobject * __self)
{
  const Dummy_kobject * ___self;

  ___self = cppbind::c::struct_cast<const Dummy_kobject>(__self);

  ___self->~Dummy_kobject();
}

int dummy_kobject_call(const struct dummy_kobject * __self, long long a_1, long long a_2, long long * a_3)
{
  using namespace L4;
  using namespace Ipc;
  using namespace Msg;

  const Dummy_kobject * ___self;
  long long _a_1;
  long long _a_2;
  long long * _a_3;

  ___self = cppbind::c::struct_cast<const Dummy_kobject>(__self);

  _a_1 = a_1;

  _a_2 = a_2;

  _a_3 = a_3;

  auto __out = ___self->call(_a_1, _a_2, _a_3);

  int __ret;

  __ret = __out;

  return __ret;
}

} // extern "C"