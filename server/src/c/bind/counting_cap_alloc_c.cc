#include <cassert>
#include <cerrno>
#include <exception>
#include <stdexcept>
#include <utility>

#include "cppbind/c/c_bind_error_cc.h"
#include "cppbind/c/c_util_cc.h"

#include "/home/timo/github/projects/l4re/l4/pkg/l4re-core/l4re/util/include/counting_cap_alloc"
#include </home/timo/github/projects/l4re/l4/pkg/l4re-core/l4re/include/dataspace>

extern "C" {

#include "/home/timo/github/projects/l4re/l4/pkg/cppbind-examples/server/src/c/bind/counting_cap_alloc_c.h"

l4_cap_idx_t l4_re_util_counting_cap_alloc_counter_alloc(struct l4_re_util_counting_cap_alloc_counter * __self)
{
  using namespace L4Re;
  using namespace Util;

  L4Re::Util::Counting_cap_alloc<> * ___self;

  ___self = cppbind::c::struct_cast<L4Re::Util::Counting_cap_alloc<>>(__self);

  auto __out = ___self->alloc();

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

void l4_re_util_counting_cap_alloc_counter_take(struct l4_re_util_counting_cap_alloc_counter * __self, l4_cap_idx_t cap)
{
  using namespace L4Re;
  using namespace Util;

  L4Re::Util::Counting_cap_alloc<> * ___self;
  const L4::Cap<void> * _cap;

  ___self = cppbind::c::struct_cast<L4Re::Util::Counting_cap_alloc<>>(__self);

  auto __cap = L4::Cap<void>(cap);
  _cap = &__cap;

  ___self->take(*_cap);
}

int l4_re_util_counting_cap_alloc_counter_free(struct l4_re_util_counting_cap_alloc_counter * __self, l4_cap_idx_t cap, l4_cap_idx_t task, unsigned int unmap_flags)
{
  using namespace L4Re;
  using namespace Util;

  L4Re::Util::Counting_cap_alloc<> * ___self;
  const L4::Cap<void> * _cap;
  l4_cap_idx_t _task = L4_INVALID_CAP;
  unsigned int _unmap_flags = L4_FP_ALL_SPACES;

  ___self = cppbind::c::struct_cast<L4Re::Util::Counting_cap_alloc<>>(__self);

  auto __cap = L4::Cap<void>(cap);
  _cap = &__cap;

  _task = task;

  _unmap_flags = unmap_flags;

  auto __out = ___self->free(*_cap, _task, _unmap_flags);

  int __ret;

  __ret = __out;

  return __ret;
}

int l4_re_util_counting_cap_alloc_counter_release(struct l4_re_util_counting_cap_alloc_counter * __self, l4_cap_idx_t cap, l4_cap_idx_t task, unsigned int unmap_flags)
{
  using namespace L4Re;
  using namespace Util;

  L4Re::Util::Counting_cap_alloc<> * ___self;
  const L4::Cap<void> * _cap;
  l4_cap_idx_t _task = L4_INVALID_CAP;
  unsigned int _unmap_flags = L4_FP_ALL_SPACES;

  ___self = cppbind::c::struct_cast<L4Re::Util::Counting_cap_alloc<>>(__self);

  auto __cap = L4::Cap<void>(cap);
  _cap = &__cap;

  _task = task;

  _unmap_flags = unmap_flags;

  auto __out = ___self->release(*_cap, _task, _unmap_flags);

  int __ret;

  __ret = __out;

  return __ret;
}

long l4_re_util_counting_cap_alloc_counter_last(struct l4_re_util_counting_cap_alloc_counter * __self)
{
  using namespace L4Re;
  using namespace Util;

  L4Re::Util::Counting_cap_alloc<> * ___self;

  ___self = cppbind::c::struct_cast<L4Re::Util::Counting_cap_alloc<>>(__self);

  auto __out = ___self->last();

  long __ret;

  __ret = __out;

  return __ret;
}

void l4_re_util_counting_cap_alloc_counter_delete(const struct l4_re_util_counting_cap_alloc_counter * __self)
{
  using namespace L4Re;
  using namespace Util;

  const L4Re::Util::Counting_cap_alloc<> * ___self;

  ___self = cppbind::c::struct_cast<const L4Re::Util::Counting_cap_alloc<>>(__self);

  ___self->~Counting_cap_alloc<>();
}

l4_cap_idx_t l4_re_util_counting_cap_alloc_counter_alloc_dataspace(struct l4_re_util_counting_cap_alloc_counter * __self)
{
  using namespace L4Re;
  using namespace Util;

  L4Re::Util::Counting_cap_alloc<> * ___self;

  ___self = cppbind::c::struct_cast<L4Re::Util::Counting_cap_alloc<>>(__self);

  auto __out = ___self->alloc<L4Re::Dataspace>();

  l4_cap_idx_t __ret;

  return __out.cap();

  return __ret;
}

} // extern "C"