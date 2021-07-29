#define LUA_LIB

#include "lua.h"
#include "lauxlib.h"

struct lua_longjmp {
  struct lua_longjmp *previous;
  int b;
  volatile int status;
};

#include "/home/timo/github/projects/cppbind/generate/cppbind/lua/lua_util.h"
#include "/home/timo/github/projects/cppbind/generate/cppbind/type_info.h"

#include "/home/timo/github/projects/l4re/l4/pkg/l4re-core/l4re/include/rm"
#include </home/timo/github/projects/l4re/l4/pkg/l4re-core/l4re/include/dataspace>
#include </home/timo/github/projects/l4re/l4/pkg/l4re-core/l4re/include/rm>

namespace cppbind::type_info {
  type_instance<L4::Cap<L4::Task>, L4::Cap_base> _ZTSN2L43CapINS_4TaskEEE;
  type_instance<L4::Ipc::Cap<L4Re::Dataspace>> _ZTSN2L43Ipc3CapIN4L4Re9DataspaceEEE;
  type_instance<L4Re::Rm, L4::Kobject_t<L4Re::Rm, L4::Pager, 16389, L4::Type_info::Demand_t<'\x01', '\x00', '\x00', '\x00'>>, L4::Pager, L4::Kobject_t<L4::Pager, L4::Io_pager, -2>, L4::Io_pager, L4::Kobject_0t<L4::Io_pager, -8>, L4::Kobject_t<L4::Io_pager, L4::Kobject, -8>, L4::Kobject> _ZTSN4L4Re2RmE;
  type_instance<L4Re::Rm::F> _ZTSN4L4Re2Rm1FE;
  type_instance<L4Re::Rm::F::Flags, L4::Types::Flags_ops_t<L4Re::Rm::F::Flags>> _ZTSN4L4Re2Rm1F5FlagsE;
  type_instance<L4::Cap<L4Re::Dataspace>, L4::Cap_base> _ZTSN2L43CapIN4L4Re9DataspaceEEE;
  type_instance<unsigned long> _ZTSm;
  type_instance<void *> _ZTSPv;
}

namespace
{

int l4_re_rm_reserve_area(lua_State *L)
{
  try {
    if (lua_gettop(L) < 3 || lua_gettop(L) > 5)
      return luaL_error(L, "function expects between 3 and 5 arguments");

    using namespace L4Re;

    const L4Re::Rm * ___self;
    l4_addr_t * _start;
    unsigned long _size;
    const L4Re::Rm::Flags _flags_default = L4Re::Rm::Flags(0);
    const L4Re::Rm::Flags * _flags = &_flags_default;
    unsigned char _align = 12;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Rm>(lua_touserdata(L, 1));

    if (lua_isuserdata(L, 2)) {
      _start = cppbind::type_info::typed_pointer_cast<l4_addr_t>(lua_touserdata(L, 2));
    } else {
      luaL_checktype(L, 2, LUA_TNUMBER);
      static auto __tmp = cppbind::lua::tointegral<l4_addr_t>(L, 2);
      _start = &__tmp;
    }

    luaL_checktype(L, 3, LUA_TNUMBER);
    _size = cppbind::lua::tointegral<unsigned long>(L, 3);

    if (lua_gettop(L) < 4) goto function_call;
    luaL_checktype(L, 4, LUA_TNUMBER);
    {
      static auto __tmp = L4Re::Rm::Flags(cppbind::lua::tointegral<l4_uint32_t>(L, 4));
      _flags = &__tmp;
    }

    if (lua_gettop(L) < 5) goto function_call;
    luaL_checktype(L, 5, LUA_TNUMBER);
    _align = cppbind::lua::tointegral<unsigned char>(L, 5);

    function_call:

    auto __out = ___self->reserve_area(_start, _size, *_flags, _align);

    cppbind::lua::pushintegral(L, __out);

    int __top = lua_gettop(L);

    if (!lua_isuserdata(L, 2) && _start)
       cppbind::lua::pushintegral(L, *_start);

    return 1 + (lua_gettop(L) - __top);
  } catch (std::exception const &__e) {
    lua_pushstring(L, __e.what());
  } catch (lua_longjmp *) {
    throw;
  } catch (...) {
    lua_pushstring(L, "exception");
  }

  return lua_error(L);
}

int l4_re_rm_attach(lua_State *L)
{
  try {
    if (lua_gettop(L) < 5 || lua_gettop(L) > 7)
      return luaL_error(L, "function expects between 5 and 7 arguments");

    using namespace L4Re;

    const L4Re::Rm * ___self;
    l4_addr_t * _start;
    unsigned long _size;
    const L4Re::Rm::Flags * _flags;
    const L4::Ipc::Cap<L4Re::Dataspace> * _mem;
    L4Re::Rm::Offset _offs = 0;
    unsigned char _align = 12;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Rm>(lua_touserdata(L, 1));

    if (lua_isuserdata(L, 2)) {
      _start = cppbind::type_info::typed_pointer_cast<l4_addr_t>(lua_touserdata(L, 2));
    } else {
      luaL_checktype(L, 2, LUA_TNUMBER);
      static auto __tmp = cppbind::lua::tointegral<l4_addr_t>(L, 2);
      _start = &__tmp;
    }

    luaL_checktype(L, 3, LUA_TNUMBER);
    _size = cppbind::lua::tointegral<unsigned long>(L, 3);

    luaL_checktype(L, 4, LUA_TNUMBER);
    {
      static auto __tmp = L4Re::Rm::Flags(cppbind::lua::tointegral<l4_uint32_t>(L, 4));
      _flags = &__tmp;
    }

    luaL_checktype(L, 5, LUA_TUSERDATA);
    _mem = cppbind::type_info::typed_pointer_cast<L4::Ipc::Cap<L4Re::Dataspace>>(lua_touserdata(L, 5));

    if (lua_gettop(L) < 6) goto function_call;
    luaL_checktype(L, 6, LUA_TNUMBER);
    _offs = cppbind::lua::tointegral<L4Re::Rm::Offset>(L, 6);

    if (lua_gettop(L) < 7) goto function_call;
    luaL_checktype(L, 7, LUA_TNUMBER);
    _align = cppbind::lua::tointegral<unsigned char>(L, 7);

    function_call:

    auto __out = ___self->attach(_start, _size, *_flags, *_mem, _offs, _align);

    cppbind::lua::pushintegral(L, __out);

    int __top = lua_gettop(L);

    if (!lua_isuserdata(L, 2) && _start)
       cppbind::lua::pushintegral(L, *_start);

    return 1 + (lua_gettop(L) - __top);
  } catch (std::exception const &__e) {
    lua_pushstring(L, __e.what());
  } catch (lua_longjmp *) {
    throw;
  } catch (...) {
    lua_pushstring(L, "exception");
  }

  return lua_error(L);
}

int l4_re_rm_detach_1(lua_State *L)
{
  try {
    if (lua_gettop(L) < 3 || lua_gettop(L) > 4)
      return luaL_error(L, "function expects between 3 and 4 arguments");

    using namespace L4Re;

    const L4Re::Rm * ___self;
    l4_addr_t _addr;
    L4::Cap<L4Re::Dataspace> * _mem;
    const L4::Cap<L4::Task> _task_default = This_task;
    const L4::Cap<L4::Task> * _task = &_task_default;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Rm>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TNUMBER);
    _addr = cppbind::lua::tointegral<l4_addr_t>(L, 2);

    luaL_checktype(L, 3, LUA_TUSERDATA);
    _mem = cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Dataspace>>(lua_touserdata(L, 3));

    if (lua_gettop(L) < 4) goto function_call;
    luaL_checktype(L, 4, LUA_TUSERDATA);
    _task = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(lua_touserdata(L, 4));

    function_call:

    auto __out = ___self->detach(_addr, _mem, *_task);

    cppbind::lua::pushintegral(L, __out);

    return 1;
  } catch (std::exception const &__e) {
    lua_pushstring(L, __e.what());
  } catch (lua_longjmp *) {
    throw;
  } catch (...) {
    lua_pushstring(L, "exception");
  }

  return lua_error(L);
}

int l4_re_rm_detach_2(lua_State *L)
{
  try {
    if (lua_gettop(L) < 3 || lua_gettop(L) > 4)
      return luaL_error(L, "function expects between 3 and 4 arguments");

    using namespace L4Re;

    const L4Re::Rm * ___self;
    void * _addr;
    L4::Cap<L4Re::Dataspace> * _mem;
    const L4::Cap<L4::Task> _task_default = This_task;
    const L4::Cap<L4::Task> * _task = &_task_default;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Rm>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _addr = cppbind::type_info::typed_pointer_cast<void>(lua_touserdata(L, 2));

    luaL_checktype(L, 3, LUA_TUSERDATA);
    _mem = cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Dataspace>>(lua_touserdata(L, 3));

    if (lua_gettop(L) < 4) goto function_call;
    luaL_checktype(L, 4, LUA_TUSERDATA);
    _task = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(lua_touserdata(L, 4));

    function_call:

    auto __out = ___self->detach(_addr, _mem, *_task);

    cppbind::lua::pushintegral(L, __out);

    int __top = lua_gettop(L);

    if (!lua_isuserdata(L, 2) && _addr)

    return 1 + (lua_gettop(L) - __top);
  } catch (std::exception const &__e) {
    lua_pushstring(L, __e.what());
  } catch (lua_longjmp *) {
    throw;
  } catch (...) {
    lua_pushstring(L, "exception");
  }

  return lua_error(L);
}

int l4_re_rm_detach_3(lua_State *L)
{
  try {
    if (lua_gettop(L) != 5)
      return luaL_error(L, "function expects 5 arguments");

    using namespace L4Re;

    const L4Re::Rm * ___self;
    l4_addr_t _start;
    unsigned long _size;
    L4::Cap<L4Re::Dataspace> * _mem;
    const L4::Cap<L4::Task> * _task;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Rm>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TNUMBER);
    _start = cppbind::lua::tointegral<l4_addr_t>(L, 2);

    luaL_checktype(L, 3, LUA_TNUMBER);
    _size = cppbind::lua::tointegral<unsigned long>(L, 3);

    luaL_checktype(L, 4, LUA_TUSERDATA);
    _mem = cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Dataspace>>(lua_touserdata(L, 4));

    luaL_checktype(L, 5, LUA_TUSERDATA);
    _task = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(lua_touserdata(L, 5));

    auto __out = ___self->detach(_start, _size, _mem, *_task);

    cppbind::lua::pushintegral(L, __out);

    return 1;
  } catch (std::exception const &__e) {
    lua_pushstring(L, __e.what());
  } catch (lua_longjmp *) {
    throw;
  } catch (...) {
    lua_pushstring(L, "exception");
  }

  return lua_error(L);
}

int l4_re_rm_find(lua_State *L)
{
  try {
    if (lua_gettop(L) != 6)
      return luaL_error(L, "function expects 6 arguments");

    using namespace L4Re;

    L4Re::Rm * ___self;
    l4_addr_t * _addr;
    unsigned long * _size;
    L4Re::Rm::Offset * _offset;
    L4Re::Rm::Flags * _flags;
    L4::Cap<L4Re::Dataspace> * _m;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<L4Re::Rm>(lua_touserdata(L, 1));

    if (lua_isuserdata(L, 2)) {
      _addr = cppbind::type_info::typed_pointer_cast<l4_addr_t>(lua_touserdata(L, 2));
    } else {
      luaL_checktype(L, 2, LUA_TNUMBER);
      static auto __tmp = cppbind::lua::tointegral<l4_addr_t>(L, 2);
      _addr = &__tmp;
    }

    if (lua_isuserdata(L, 3)) {
      _size = cppbind::type_info::typed_pointer_cast<unsigned long>(lua_touserdata(L, 3));
    } else {
      luaL_checktype(L, 3, LUA_TNUMBER);
      static auto __tmp = cppbind::lua::tointegral<unsigned long>(L, 3);
      _size = &__tmp;
    }

    if (lua_isuserdata(L, 4)) {
      _offset = cppbind::type_info::typed_pointer_cast<L4Re::Rm::Offset>(lua_touserdata(L, 4));
    } else {
      luaL_checktype(L, 4, LUA_TNUMBER);
      static auto __tmp = cppbind::lua::tointegral<L4Re::Rm::Offset>(L, 4);
      _offset = &__tmp;
    }

    luaL_checktype(L, 5, LUA_TUSERDATA);
    _flags = cppbind::type_info::typed_pointer_cast<L4Re::Rm::Flags>(lua_touserdata(L, 5));

    luaL_checktype(L, 6, LUA_TUSERDATA);
    _m = cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Dataspace>>(lua_touserdata(L, 6));

    auto __out = ___self->find(_addr, _size, _offset, _flags, _m);

    cppbind::lua::pushintegral(L, __out);

    int __top = lua_gettop(L);

    if (!lua_isuserdata(L, 2) && _addr)
       cppbind::lua::pushintegral(L, *_addr);
    if (!lua_isuserdata(L, 3) && _size)
       cppbind::lua::pushintegral(L, *_size);
    if (!lua_isuserdata(L, 4) && _offset)
       cppbind::lua::pushintegral(L, *_offset);

    return 1 + (lua_gettop(L) - __top);
  } catch (std::exception const &__e) {
    lua_pushstring(L, __e.what());
  } catch (lua_longjmp *) {
    throw;
  } catch (...) {
    lua_pushstring(L, "exception");
  }

  return lua_error(L);
}

int l4_re_rm_detach_4(lua_State *L)
{
  try {
    if (lua_gettop(L) != 6)
      return luaL_error(L, "function expects 6 arguments");

    using namespace L4Re;

    const L4Re::Rm * ___self;
    l4_addr_t _start;
    unsigned long _size;
    L4::Cap<L4Re::Dataspace> * _mem;
    const L4::Cap<L4::Task> * _task;
    unsigned int _flags;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Rm>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TNUMBER);
    _start = cppbind::lua::tointegral<l4_addr_t>(L, 2);

    luaL_checktype(L, 3, LUA_TNUMBER);
    _size = cppbind::lua::tointegral<unsigned long>(L, 3);

    luaL_checktype(L, 4, LUA_TUSERDATA);
    _mem = cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Dataspace>>(lua_touserdata(L, 4));

    luaL_checktype(L, 5, LUA_TUSERDATA);
    _task = cppbind::type_info::typed_pointer_cast<L4::Cap<L4::Task>>(lua_touserdata(L, 5));

    luaL_checktype(L, 6, LUA_TNUMBER);
    _flags = cppbind::lua::tointegral<unsigned int>(L, 6);

    auto __out = ___self->detach(_start, _size, _mem, *_task, _flags);

    cppbind::lua::pushintegral(L, __out);

    return 1;
  } catch (std::exception const &__e) {
    lua_pushstring(L, __e.what());
  } catch (lua_longjmp *) {
    throw;
  } catch (...) {
    lua_pushstring(L, "exception");
  }

  return lua_error(L);
}

int l4_re_rm_attach_void(lua_State *L)
{
  try {
    if (lua_gettop(L) < 5 || lua_gettop(L) > 7)
      return luaL_error(L, "function expects between 5 and 7 arguments");

    using namespace L4Re;

    const L4Re::Rm * ___self;
    void ** _start;
    unsigned long _size;
    const L4Re::Rm::Flags * _flags;
    const L4::Ipc::Cap<L4Re::Dataspace> * _mem;
    L4Re::Rm::Offset _offs = 0;
    unsigned char _align = 12;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Rm>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _start = cppbind::type_info::typed_pointer_cast<void *>(lua_touserdata(L, 2));

    luaL_checktype(L, 3, LUA_TNUMBER);
    _size = cppbind::lua::tointegral<unsigned long>(L, 3);

    luaL_checktype(L, 4, LUA_TNUMBER);
    {
      static auto __tmp = L4Re::Rm::Flags(cppbind::lua::tointegral<l4_uint32_t>(L, 4));
      _flags = &__tmp;
    }

    luaL_checktype(L, 5, LUA_TUSERDATA);
    _mem = cppbind::type_info::typed_pointer_cast<L4::Ipc::Cap<L4Re::Dataspace>>(lua_touserdata(L, 5));

    if (lua_gettop(L) < 6) goto function_call;
    luaL_checktype(L, 6, LUA_TNUMBER);
    _offs = cppbind::lua::tointegral<L4Re::Rm::Offset>(L, 6);

    if (lua_gettop(L) < 7) goto function_call;
    luaL_checktype(L, 7, LUA_TNUMBER);
    _align = cppbind::lua::tointegral<unsigned char>(L, 7);

    function_call:

    auto __out = ___self->attach<void>(_start, _size, *_flags, *_mem, _offs, _align);

    cppbind::lua::pushintegral(L, __out);

    return 1;
  } catch (std::exception const &__e) {
    lua_pushstring(L, __e.what());
  } catch (lua_longjmp *) {
    throw;
  } catch (...) {
    lua_pushstring(L, "exception");
  }

  return lua_error(L);
}

int l4_re_rm_free_area(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;
  using namespace Ipc;
  using namespace Msg;

  const L4Re::Rm * ___self;
  unsigned long _a;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Rm>(lua_touserdata(L, 1));

  luaL_checktype(L, 2, LUA_TNUMBER);
  _a = cppbind::lua::tointegral<unsigned long>(L, 2);

  auto __out = ___self->free_area(_a);

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_re_rm_f_new(lua_State *L)
{
  if (lua_gettop(L) != 0)
    return luaL_error(L, "function expects 0 arguments");

  using namespace L4Re;

  auto __out = new L4Re::Rm::F();

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN4L4Re2Rm1FE");

  return 1;
}

int l4_re_rm_f_flags_new_1(lua_State *L)
{
  if (lua_gettop(L) != 0)
    return luaL_error(L, "function expects 0 arguments");

  using namespace L4Re;

  auto __out = new L4Re::Rm::F::Flags();

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN4L4Re2Rm1F5FlagsE");

  return 1;
}

int l4_re_rm_f_flags_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  l4_uint32_t _f;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _f = cppbind::lua::tointegral<l4_uint32_t>(L, 1);

  auto __out = new L4Re::Rm::F::Flags(_f);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN4L4Re2Rm1F5FlagsE");

  return 1;
}

int l4_re_rm_f_flags_new_3(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  L4Re::Rm::F::Attach_flags _rf;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _rf = static_cast<L4Re::Rm::F::Attach_flags>(cppbind::lua::tointegral<l4_uint32_t>(L, 1));

  auto __out = new L4Re::Rm::F::Flags(_rf);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN4L4Re2Rm1F5FlagsE");

  return 1;
}

int l4_re_rm_f_flags_new_4(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  L4Re::Rm::F::Region_flags _rf;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _rf = static_cast<L4Re::Rm::F::Region_flags>(cppbind::lua::tointegral<l4_uint16_t>(L, 1));

  auto __out = new L4Re::Rm::F::Flags(_rf);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN4L4Re2Rm1F5FlagsE");

  return 1;
}

int l4_re_rm_f_flags_region_flags(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  const L4Re::Rm::F::Flags * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Rm::F::Flags>(lua_touserdata(L, 1));

  auto __out = ___self->region_flags();

  lua_pushinteger(L, __out);

  return 1;
}

int l4_re_rm_f_flags_attach_flags(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  const L4Re::Rm::F::Flags * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Rm::F::Flags>(lua_touserdata(L, 1));

  auto __out = ___self->attach_flags();

  lua_pushinteger(L, __out);

  return 1;
}

int l4_re_rm_f_flags_r(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  const L4Re::Rm::F::Flags * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Rm::F::Flags>(lua_touserdata(L, 1));

  auto __out = ___self->r();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_re_rm_f_flags_w(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  const L4Re::Rm::F::Flags * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Rm::F::Flags>(lua_touserdata(L, 1));

  auto __out = ___self->w();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_re_rm_f_flags_x(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  const L4Re::Rm::F::Flags * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Rm::F::Flags>(lua_touserdata(L, 1));

  auto __out = ___self->x();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_re_rm_f_flags_cap_rights(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  const L4Re::Rm::F::Flags * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Rm::F::Flags>(lua_touserdata(L, 1));

  auto __out = ___self->cap_rights();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_re_rm_f_flags_copy(lua_State *L)
{
  try {
    if (lua_gettop(L) != 1)
      return luaL_error(L, "function expects 1 arguments");

    using namespace L4Re;

    const L4Re::Rm::F::Flags * __1;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    __1 = cppbind::type_info::typed_pointer_cast<const L4Re::Rm::F::Flags>(lua_touserdata(L, 1));

    auto __out = new L4Re::Rm::F::Flags(*__1);

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN4L4Re2Rm1F5FlagsE");

    return 1;
  } catch (std::exception const &__e) {
    lua_pushstring(L, __e.what());
  } catch (lua_longjmp *) {
    throw;
  } catch (...) {
    lua_pushstring(L, "exception");
  }

  return lua_error(L);
}

int l4_re_rm_f_flags_move(lua_State *L)
{
  try {
    if (lua_gettop(L) != 1)
      return luaL_error(L, "function expects 1 arguments");

    using namespace L4Re;

    L4Re::Rm::F::Flags * __1;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    __1 = cppbind::type_info::typed_pointer_cast<L4Re::Rm::F::Flags>(lua_touserdata(L, 1));

    auto __out = new L4Re::Rm::F::Flags(std::move(*__1));

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN4L4Re2Rm1F5FlagsE");

    return 1;
  } catch (std::exception const &__e) {
    lua_pushstring(L, __e.what());
  } catch (lua_longjmp *) {
    throw;
  } catch (...) {
    lua_pushstring(L, "exception");
  }

  return lua_error(L);
}

int l4_re_rm_f_flags_bw_or_assign(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;
    using namespace Types;

    L4Re::Rm::F::Flags * ___self;
    const L4Re::Rm::F::Flags * _r;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<L4Re::Rm::F::Flags>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TNUMBER);
    {
      static auto __tmp = L4Re::Rm::F::Flags(cppbind::lua::tointegral<l4_uint32_t>(L, 2));
      _r = &__tmp;
    }

    auto __out = ___self->operator|=(*_r);

    cppbind::type_info::make_typed(new L4Re::Rm::F::Flags(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN4L4Re2Rm1F5FlagsE");

    return 1;
  } catch (std::exception const &__e) {
    lua_pushstring(L, __e.what());
  } catch (lua_longjmp *) {
    throw;
  } catch (...) {
    lua_pushstring(L, "exception");
  }

  return lua_error(L);
}

int l4_re_rm_f_flags_bw_and_assign(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;
    using namespace Types;

    L4Re::Rm::F::Flags * ___self;
    const L4Re::Rm::F::Flags * _r;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<L4Re::Rm::F::Flags>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TNUMBER);
    {
      static auto __tmp = L4Re::Rm::F::Flags(cppbind::lua::tointegral<l4_uint32_t>(L, 2));
      _r = &__tmp;
    }

    auto __out = ___self->operator&=(*_r);

    cppbind::type_info::make_typed(new L4Re::Rm::F::Flags(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN4L4Re2Rm1F5FlagsE");

    return 1;
  } catch (std::exception const &__e) {
    lua_pushstring(L, __e.what());
  } catch (lua_longjmp *) {
    throw;
  } catch (...) {
    lua_pushstring(L, "exception");
  }

  return lua_error(L);
}

int l4_re_rm_f_flags_cast_bool(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;
  using namespace Types;

  const L4Re::Rm::F::Flags * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Rm::F::Flags>(lua_touserdata(L, 1));

  auto __out = ___self->operator bool();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_re_rm_f_flags_bw_not(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;
  using namespace Types;

  const L4Re::Rm::F::Flags * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Rm::F::Flags>(lua_touserdata(L, 1));

  auto __out = ___self->operator~();

  cppbind::type_info::make_typed(new L4Re::Rm::F::Flags(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN4L4Re2Rm1F5FlagsE");

  return 1;
}

void _register(lua_State *L)
{
  lua_getglobal(L, "_G");
  if (lua_isnil(L, -1)) {
    lua_pop(L, 1);
    lua_createtable(L, 0, 0);
  }

  lua_getfield(L, -1, "L4Re");
  if (lua_isnil(L, -1)) {
    lua_pop(L, 1);
    lua_createtable(L, 0, 0);
  }

  lua_pushinteger(L, L4Re::Rm::F::Search_addr);
  lua_setfield(L, -2, "RM_F_SEARCH_ADDR");

  lua_pushinteger(L, L4Re::Rm::F::In_area);
  lua_setfield(L, -2, "RM_F_IN_AREA");

  lua_pushinteger(L, L4Re::Rm::F::Eager_map);
  lua_setfield(L, -2, "RM_F_EAGER_MAP");

  lua_pushinteger(L, L4Re::Rm::F::Attach_mask);
  lua_setfield(L, -2, "RM_F_ATTACH_MASK");

  lua_pushinteger(L, L4Re::Rm::F::Rights_mask);
  lua_setfield(L, -2, "RM_F_RIGHTS_MASK");

  lua_pushinteger(L, L4Re::Rm::F::R);
  lua_setfield(L, -2, "RM_F_R");

  lua_pushinteger(L, L4Re::Rm::F::W);
  lua_setfield(L, -2, "RM_F_W");

  lua_pushinteger(L, L4Re::Rm::F::X);
  lua_setfield(L, -2, "RM_F_X");

  lua_pushinteger(L, L4Re::Rm::F::RW);
  lua_setfield(L, -2, "RM_F_RW");

  lua_pushinteger(L, L4Re::Rm::F::RX);
  lua_setfield(L, -2, "RM_F_RX");

  lua_pushinteger(L, L4Re::Rm::F::RWX);
  lua_setfield(L, -2, "RM_F_RWX");

  lua_pushinteger(L, L4Re::Rm::F::Detach_free);
  lua_setfield(L, -2, "RM_F_DETACH_FREE");

  lua_pushinteger(L, L4Re::Rm::F::Pager);
  lua_setfield(L, -2, "RM_F_PAGER");

  lua_pushinteger(L, L4Re::Rm::F::Reserved);
  lua_setfield(L, -2, "RM_F_RESERVED");

  lua_pushinteger(L, L4Re::Rm::F::Caching_mask);
  lua_setfield(L, -2, "RM_F_CACHING_MASK");

  lua_pushinteger(L, L4Re::Rm::F::Cache_normal);
  lua_setfield(L, -2, "RM_F_CACHE_NORMAL");

  lua_pushinteger(L, L4Re::Rm::F::Cache_buffered);
  lua_setfield(L, -2, "RM_F_CACHE_BUFFERED");

  lua_pushinteger(L, L4Re::Rm::F::Cache_uncached);
  lua_setfield(L, -2, "RM_F_CACHE_UNCACHED");

  lua_pushinteger(L, L4Re::Rm::F::Ds_map_mask);
  lua_setfield(L, -2, "RM_F_DS_MAP_MASK");

  lua_pushinteger(L, L4Re::Rm::F::Region_flags_mask);
  lua_setfield(L, -2, "RM_F_REGION_FLAGS_MASK");

  lua_createtable(L, 0, 0);

  lua_setfield(L, -2, "Rm");

  lua_createtable(L, 0, 1);

  {
    static luaL_Reg const _functions[] = {
      {"new", l4_re_rm_f_new},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "RmF");

  lua_createtable(L, 0, 6);

  {
    static luaL_Reg const _functions[] = {
      {"new_1", l4_re_rm_f_flags_new_1},
      {"new_2", l4_re_rm_f_flags_new_2},
      {"new_3", l4_re_rm_f_flags_new_3},
      {"new_4", l4_re_rm_f_flags_new_4},
      {"copy", l4_re_rm_f_flags_copy},
      {"move", l4_re_rm_f_flags_move},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "RmFFlags");

  lua_setfield(L, -2, "L4Re");

  lua_getfield(L, -1, "L4");
  if (lua_isnil(L, -1)) {
    lua_pop(L, 1);
    lua_createtable(L, 0, 0);
  }

  lua_getfield(L, -1, "Ipc");
  if (lua_isnil(L, -1)) {
    lua_pop(L, 1);
    lua_createtable(L, 0, 0);
  }

  lua_setfield(L, -2, "Ipc");

  lua_setfield(L, -2, "L4");

  lua_setglobal(L, "_G");
}

void _createmetatables(lua_State *L)
{
  cppbind::lua::createmetatable(L, "METATABLE__ZTSN4L4Re2RmE",
    {
      {"reserve_area", l4_re_rm_reserve_area},
      {"attach", l4_re_rm_attach},
      {"detach_1", l4_re_rm_detach_1},
      {"detach_2", l4_re_rm_detach_2},
      {"detach_3", l4_re_rm_detach_3},
      {"find", l4_re_rm_find},
      {"detach_4", l4_re_rm_detach_4},
      {"attach_void", l4_re_rm_attach_void},
      {"free_area", l4_re_rm_free_area}
    });

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN4L4Re2Rm1FE", {});

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN4L4Re2Rm1F5FlagsE",
    {
      {"region_flags", l4_re_rm_f_flags_region_flags},
      {"attach_flags", l4_re_rm_f_flags_attach_flags},
      {"r", l4_re_rm_f_flags_r},
      {"w", l4_re_rm_f_flags_w},
      {"x", l4_re_rm_f_flags_x},
      {"cap_rights", l4_re_rm_f_flags_cap_rights},
      {"bw_or_assign", l4_re_rm_f_flags_bw_or_assign},
      {"bw_and_assign", l4_re_rm_f_flags_bw_and_assign},
      {"cast_bool", l4_re_rm_f_flags_cast_bool},
      {"bw_not", l4_re_rm_f_flags_bw_not},
      {"copy", cppbind::lua::bind_copy},
      {"move", cppbind::lua::bind_move}
    });
}

extern "C"
{

LUALIB_API int luaopen_rm(lua_State *L)
{
  _register(L);
  _createmetatables(L);

  return 1;
}

} // extern "C"

} // namespace