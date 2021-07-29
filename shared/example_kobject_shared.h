#pragma once

#include <l4/sys/capability>
#include <l4/sys/cxx/ipc_iface>
#include <l4/sys/types.h>

enum { DUMMY_KOBJECT_PROTO = 0x42 };

struct Dummy_kobject : L4::Kobject_t<Dummy_kobject, L4::Kobject, DUMMY_KOBJECT_PROTO>
{
  L4_INLINE_RPC(int, call, (l4_int64_t a, l4_int64_t b, l4_int64_t *res));
  typedef L4::Typeid::Rpcs<call_t> Rpcs;
};
