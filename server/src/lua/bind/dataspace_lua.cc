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

#include "/home/timo/github/projects/l4re/l4/pkg/l4re-core/l4re/include/dataspace"

namespace cppbind::type_info {
  type_instance<L4Re::Dataspace, L4::Kobject_t<L4Re::Dataspace, L4::Kobject, 16384, L4::Type_info::Demand_t<'\x01', '\x00', '\x00', '\x00'>>, L4::Kobject> _ZTSN4L4Re9DataspaceE;
  type_instance<L4Re::Dataspace::F> _ZTSN4L4Re9Dataspace1FE;
  type_instance<L4Re::Dataspace::Flags, L4::Types::Flags_ops_t<L4Re::Dataspace::Flags>> _ZTSN4L4Re9Dataspace5FlagsE;
  type_instance<L4::Ipc::Cap<L4Re::Dataspace>> _ZTSN2L43Ipc3CapIN4L4Re9DataspaceEEE;
}

namespace
{

int l4_re_dataspace_map(lua_State *L)
{
  try {
    if (lua_gettop(L) != 6)
      return luaL_error(L, "function expects 6 arguments");

    using namespace L4Re;

    const L4Re::Dataspace * ___self;
    L4Re::Dataspace::Offset _offset;
    const L4Re::Dataspace::Flags * _flags;
    L4Re::Dataspace::Map_addr _local_addr;
    L4Re::Dataspace::Map_addr _min_addr;
    L4Re::Dataspace::Map_addr _max_addr;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Dataspace>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TNUMBER);
    _offset = cppbind::lua::tointegral<L4Re::Dataspace::Offset>(L, 2);

    luaL_checktype(L, 3, LUA_TNUMBER);
    {
      static auto __tmp = L4Re::Dataspace::Flags(cppbind::lua::tointegral<unsigned long>(L, 3));
      _flags = &__tmp;
    }

    luaL_checktype(L, 4, LUA_TNUMBER);
    _local_addr = cppbind::lua::tointegral<L4Re::Dataspace::Map_addr>(L, 4);

    luaL_checktype(L, 5, LUA_TNUMBER);
    _min_addr = cppbind::lua::tointegral<L4Re::Dataspace::Map_addr>(L, 5);

    luaL_checktype(L, 6, LUA_TNUMBER);
    _max_addr = cppbind::lua::tointegral<L4Re::Dataspace::Map_addr>(L, 6);

    auto __out = ___self->map(_offset, *_flags, _local_addr, _min_addr, _max_addr);

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

int l4_re_dataspace_map_region(lua_State *L)
{
  try {
    if (lua_gettop(L) != 5)
      return luaL_error(L, "function expects 5 arguments");

    using namespace L4Re;

    const L4Re::Dataspace * ___self;
    L4Re::Dataspace::Offset _offset;
    const L4Re::Dataspace::Flags * _flags;
    L4Re::Dataspace::Map_addr _min_addr;
    L4Re::Dataspace::Map_addr _max_addr;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Dataspace>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TNUMBER);
    _offset = cppbind::lua::tointegral<L4Re::Dataspace::Offset>(L, 2);

    luaL_checktype(L, 3, LUA_TNUMBER);
    {
      static auto __tmp = L4Re::Dataspace::Flags(cppbind::lua::tointegral<unsigned long>(L, 3));
      _flags = &__tmp;
    }

    luaL_checktype(L, 4, LUA_TNUMBER);
    _min_addr = cppbind::lua::tointegral<L4Re::Dataspace::Map_addr>(L, 4);

    luaL_checktype(L, 5, LUA_TNUMBER);
    _max_addr = cppbind::lua::tointegral<L4Re::Dataspace::Map_addr>(L, 5);

    auto __out = ___self->map_region(_offset, *_flags, _min_addr, _max_addr);

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

int l4_re_dataspace_size(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  const L4Re::Dataspace * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Dataspace>(lua_touserdata(L, 1));

  auto __out = ___self->size();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_re_dataspace_flags(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  const L4Re::Dataspace * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Dataspace>(lua_touserdata(L, 1));

  auto __out = ___self->flags();

  cppbind::type_info::make_typed(new L4Re::Dataspace::Flags(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN4L4Re9Dataspace5FlagsE");

  return 1;
}

int l4_re_dataspace_clear(lua_State *L)
{
  if (lua_gettop(L) != 3)
    return luaL_error(L, "function expects 3 arguments");

  using namespace L4;
  using namespace Ipc;
  using namespace Msg;

  const L4Re::Dataspace * ___self;
  unsigned long long _a_1;
  unsigned long long _a_2;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Dataspace>(lua_touserdata(L, 1));

  luaL_checktype(L, 2, LUA_TNUMBER);
  _a_1 = cppbind::lua::tointegral<unsigned long long>(L, 2);

  luaL_checktype(L, 3, LUA_TNUMBER);
  _a_2 = cppbind::lua::tointegral<unsigned long long>(L, 3);

  auto __out = ___self->clear(_a_1, _a_2);

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_re_dataspace_allocate(lua_State *L)
{
  if (lua_gettop(L) != 3)
    return luaL_error(L, "function expects 3 arguments");

  using namespace L4;
  using namespace Ipc;
  using namespace Msg;

  const L4Re::Dataspace * ___self;
  unsigned long long _a_1;
  unsigned long long _a_2;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Dataspace>(lua_touserdata(L, 1));

  luaL_checktype(L, 2, LUA_TNUMBER);
  _a_1 = cppbind::lua::tointegral<unsigned long long>(L, 2);

  luaL_checktype(L, 3, LUA_TNUMBER);
  _a_2 = cppbind::lua::tointegral<unsigned long long>(L, 3);

  auto __out = ___self->allocate(_a_1, _a_2);

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_re_dataspace_copy_in(lua_State *L)
{
  try {
    if (lua_gettop(L) != 5)
      return luaL_error(L, "function expects 5 arguments");

    using namespace L4;
    using namespace Ipc;
    using namespace Msg;

    const L4Re::Dataspace * ___self;
    unsigned long long _a_1;
    const L4::Ipc::Cap<L4Re::Dataspace> * _a_2;
    unsigned long long _a_3;
    unsigned long long _a_4;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Dataspace>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TNUMBER);
    _a_1 = cppbind::lua::tointegral<unsigned long long>(L, 2);

    luaL_checktype(L, 3, LUA_TUSERDATA);
    _a_2 = cppbind::type_info::typed_pointer_cast<L4::Ipc::Cap<L4Re::Dataspace>>(lua_touserdata(L, 3));

    luaL_checktype(L, 4, LUA_TNUMBER);
    _a_3 = cppbind::lua::tointegral<unsigned long long>(L, 4);

    luaL_checktype(L, 5, LUA_TNUMBER);
    _a_4 = cppbind::lua::tointegral<unsigned long long>(L, 5);

    auto __out = ___self->copy_in(_a_1, *_a_2, _a_3, _a_4);

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

int l4_re_dataspace_f_new(lua_State *L)
{
  if (lua_gettop(L) != 0)
    return luaL_error(L, "function expects 0 arguments");

  using namespace L4Re;

  auto __out = new L4Re::Dataspace::F();

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN4L4Re9Dataspace1FE");

  return 1;
}

int l4_re_dataspace_flags_new_1(lua_State *L)
{
  if (lua_gettop(L) != 0)
    return luaL_error(L, "function expects 0 arguments");

  using namespace L4Re;

  auto __out = new L4Re::Dataspace::Flags();

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN4L4Re9Dataspace5FlagsE");

  return 1;
}

int l4_re_dataspace_flags_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  unsigned long _f;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _f = cppbind::lua::tointegral<unsigned long>(L, 1);

  auto __out = new L4Re::Dataspace::Flags(_f);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN4L4Re9Dataspace5FlagsE");

  return 1;
}

int l4_re_dataspace_flags_new_3(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  L4Re::Dataspace::F::Flags _f;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _f = static_cast<L4Re::Dataspace::F::Flags>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4Re::Dataspace::Flags(_f);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN4L4Re9Dataspace5FlagsE");

  return 1;
}

int l4_re_dataspace_flags_r(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  const L4Re::Dataspace::Flags * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Dataspace::Flags>(lua_touserdata(L, 1));

  auto __out = ___self->r();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_re_dataspace_flags_w(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  const L4Re::Dataspace::Flags * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Dataspace::Flags>(lua_touserdata(L, 1));

  auto __out = ___self->w();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_re_dataspace_flags_x(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  const L4Re::Dataspace::Flags * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Dataspace::Flags>(lua_touserdata(L, 1));

  auto __out = ___self->x();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_re_dataspace_flags_fpage_rights(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  const L4Re::Dataspace::Flags * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Dataspace::Flags>(lua_touserdata(L, 1));

  auto __out = ___self->fpage_rights();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_re_dataspace_flags_bw_or_assign(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;
    using namespace Types;

    L4Re::Dataspace::Flags * ___self;
    const L4Re::Dataspace::Flags * _r;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<L4Re::Dataspace::Flags>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TNUMBER);
    {
      static auto __tmp = L4Re::Dataspace::Flags(cppbind::lua::tointegral<unsigned long>(L, 2));
      _r = &__tmp;
    }

    auto __out = ___self->operator|=(*_r);

    cppbind::type_info::make_typed(new L4Re::Dataspace::Flags(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN4L4Re9Dataspace5FlagsE");

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

int l4_re_dataspace_flags_bw_and_assign(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;
    using namespace Types;

    L4Re::Dataspace::Flags * ___self;
    const L4Re::Dataspace::Flags * _r;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<L4Re::Dataspace::Flags>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TNUMBER);
    {
      static auto __tmp = L4Re::Dataspace::Flags(cppbind::lua::tointegral<unsigned long>(L, 2));
      _r = &__tmp;
    }

    auto __out = ___self->operator&=(*_r);

    cppbind::type_info::make_typed(new L4Re::Dataspace::Flags(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN4L4Re9Dataspace5FlagsE");

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

int l4_re_dataspace_flags_cast_bool(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;
  using namespace Types;

  const L4Re::Dataspace::Flags * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Dataspace::Flags>(lua_touserdata(L, 1));

  auto __out = ___self->operator bool();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_re_dataspace_flags_bw_not(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;
  using namespace Types;

  const L4Re::Dataspace::Flags * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Dataspace::Flags>(lua_touserdata(L, 1));

  auto __out = ___self->operator~();

  cppbind::type_info::make_typed(new L4Re::Dataspace::Flags(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN4L4Re9Dataspace5FlagsE");

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

  lua_pushinteger(L, L4Re::Dataspace::F::R);
  lua_setfield(L, -2, "DATASPACE_F_R");

  lua_pushinteger(L, L4Re::Dataspace::F::Ro);
  lua_setfield(L, -2, "DATASPACE_F_RO");

  lua_pushinteger(L, L4Re::Dataspace::F::RW);
  lua_setfield(L, -2, "DATASPACE_F_RW");

  lua_pushinteger(L, L4Re::Dataspace::F::W);
  lua_setfield(L, -2, "DATASPACE_F_W");

  lua_pushinteger(L, L4Re::Dataspace::F::X);
  lua_setfield(L, -2, "DATASPACE_F_X");

  lua_pushinteger(L, L4Re::Dataspace::F::RX);
  lua_setfield(L, -2, "DATASPACE_F_RX");

  lua_pushinteger(L, L4Re::Dataspace::F::RWX);
  lua_setfield(L, -2, "DATASPACE_F_RWX");

  lua_pushinteger(L, L4Re::Dataspace::F::Rights_mask);
  lua_setfield(L, -2, "DATASPACE_F_RIGHTS_MASK");

  lua_pushinteger(L, L4Re::Dataspace::F::Normal);
  lua_setfield(L, -2, "DATASPACE_F_NORMAL");

  lua_pushinteger(L, L4Re::Dataspace::F::Cacheable);
  lua_setfield(L, -2, "DATASPACE_F_CACHEABLE");

  lua_pushinteger(L, L4Re::Dataspace::F::Bufferable);
  lua_setfield(L, -2, "DATASPACE_F_BUFFERABLE");

  lua_pushinteger(L, L4Re::Dataspace::F::Uncacheable);
  lua_setfield(L, -2, "DATASPACE_F_UNCACHEABLE");

  lua_pushinteger(L, L4Re::Dataspace::F::Caching_mask);
  lua_setfield(L, -2, "DATASPACE_F_CACHING_MASK");

  lua_createtable(L, 0, 0);

  lua_setfield(L, -2, "Dataspace");

  lua_createtable(L, 0, 1);

  {
    static luaL_Reg const _functions[] = {
      {"new", l4_re_dataspace_f_new},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "DataspaceF");

  lua_createtable(L, 0, 3);

  {
    static luaL_Reg const _functions[] = {
      {"new_1", l4_re_dataspace_flags_new_1},
      {"new_2", l4_re_dataspace_flags_new_2},
      {"new_3", l4_re_dataspace_flags_new_3},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "DataspaceFlags");

  lua_setfield(L, -2, "L4Re");

  lua_getfield(L, -1, "L4");
  if (lua_isnil(L, -1)) {
    lua_pop(L, 1);
    lua_createtable(L, 0, 0);
  }

  lua_setfield(L, -2, "L4");

  lua_setglobal(L, "_G");
}

void _createmetatables(lua_State *L)
{
  cppbind::lua::createmetatable(L, "METATABLE__ZTSN4L4Re9DataspaceE",
    {
      {"map", l4_re_dataspace_map},
      {"map_region", l4_re_dataspace_map_region},
      {"size", l4_re_dataspace_size},
      {"flags", l4_re_dataspace_flags},
      {"clear", l4_re_dataspace_clear},
      {"allocate", l4_re_dataspace_allocate},
      {"copy_in", l4_re_dataspace_copy_in}
    });

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN4L4Re9Dataspace1FE", {});

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN4L4Re9Dataspace5FlagsE",
    {
      {"r", l4_re_dataspace_flags_r},
      {"w", l4_re_dataspace_flags_w},
      {"x", l4_re_dataspace_flags_x},
      {"fpage_rights", l4_re_dataspace_flags_fpage_rights},
      {"bw_or_assign", l4_re_dataspace_flags_bw_or_assign},
      {"bw_and_assign", l4_re_dataspace_flags_bw_and_assign},
      {"cast_bool", l4_re_dataspace_flags_cast_bool},
      {"bw_not", l4_re_dataspace_flags_bw_not}
    });
}

extern "C"
{

LUALIB_API int luaopen_dataspace(lua_State *L)
{
  _register(L);
  _createmetatables(L);

  return 1;
}

} // extern "C"

} // namespace