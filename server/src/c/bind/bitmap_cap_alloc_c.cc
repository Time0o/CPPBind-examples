#include <cassert>
#include <cerrno>
#include <exception>
#include <stdexcept>
#include <utility>

#include "cppbind/c/c_bind_error_cc.h"
#include "cppbind/c/c_util_cc.h"

#include "/home/timo/github/l4re/l4/pkg/l4re-core/l4re/util/include/bitmap_cap_alloc"

extern "C" {

#include "/home/timo/github/l4re/l4/pkg/l4re-c-examples/server/src/c/bind/bitmap_cap_alloc_c.h"

struct l4_re_util_cap_alloc_base l4_re_util_cap_alloc_base_new(long max, void * mem, long bias)
{
  using namespace L4Re;
  using namespace Util;

  long _max;
  void * _mem;
  long _bias = 0;

  _max = max;

  _mem = mem;

  _bias = bias;

  char __buf[32];

  auto __out = new (__buf) L4Re::Util::Cap_alloc_base(_max, _mem, _bias);

  struct l4_re_util_cap_alloc_base __ret;

  static_cast<void>(__out);

  struct l4_re_util_cap_alloc_base __tmp;
  cppbind::c::make_owning_struct_mem<L4Re::Util::Cap_alloc_base>(&__tmp, __buf);
  __ret = __tmp;

  return __ret;
}

long l4_re_util_cap_alloc_base_hint(const struct l4_re_util_cap_alloc_base * __self)
{
  using namespace L4Re;
  using namespace Util;

  const L4Re::Util::Cap_alloc_base * ___self;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4Re::Util::Cap_alloc_base>(__self);

  auto __out = ___self->hint();

  long __ret;

  __ret = __out;

  return __ret;
}

long l4_re_util_cap_alloc_base_last(struct l4_re_util_cap_alloc_base * __self)
{
  using namespace L4Re;
  using namespace Util;

  L4Re::Util::Cap_alloc_base * ___self;

  assert(__self->is_initialized);
  assert(!__self->is_const);
  ___self = cppbind::c::struct_cast<L4Re::Util::Cap_alloc_base>(__self);

  auto __out = ___self->last();

  long __ret;

  __ret = __out;

  return __ret;
}

void l4_re_util_cap_alloc_base_delete(struct l4_re_util_cap_alloc_base * __self)
{
  using namespace L4Re;
  using namespace Util;

  L4Re::Util::Cap_alloc_base * ___self;

  if (!__self->is_initialized) return;
  ___self = cppbind::c::struct_cast<L4Re::Util::Cap_alloc_base>(__self);

  ___self->~Cap_alloc_base();
}

} // extern "C"