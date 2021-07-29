#include <cassert>
#include <cerrno>
#include <exception>
#include <stdexcept>
#include <utility>

#include "cppbind/c/c_bind_error_cc.h"
#include "cppbind/c/c_util_cc.h"

#include "/home/timo/github/projects/l4re/l4/pkg/l4re-core/l4re/util/include/cap_alloc"

extern "C" {

#include "/home/timo/github/projects/l4re/l4/pkg/cppbind-examples/server/src/c/bind/cap_alloc_c.h"

struct l4_re_util_counting_cap_alloc_counter
{
  union {
    char mem[32];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

l4_re_util_cap_alloc_t l4_re_util_get_cap_alloc(void)
{
  using namespace L4Re;
  using namespace Util;

  auto __out = &L4Re::Util::cap_alloc;

  l4_re_util_cap_alloc_t __ret;

  l4_re_util_cap_alloc_t __tmp;
  cppbind::c::make_non_owning_struct(&__tmp, __out);
  __ret = __tmp;

  return __ret;
}

} // extern "C"