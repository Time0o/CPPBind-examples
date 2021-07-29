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

#include "/home/timo/github/projects/l4re/l4/pkg/l4re-core/l4sys/include/cxx/ipc_types"
#include </home/timo/github/projects/l4re/l4/pkg/l4re-core/l4re/include/dataspace>

namespace cppbind::type_info {
  type_instance<L4::Ipc::Cap<L4Re::Dataspace>> _ZTSN2L43Ipc3CapIN4L4Re9DataspaceEEE;
  type_instance<L4::Cap<L4Re::Dataspace>, L4::Cap_base> _ZTSN2L43CapIN4L4Re9DataspaceEEE;
}

namespace
{

int l4_ipc_cap_dataspace_new_1(lua_State *L)
{
  try {
    if (lua_gettop(L) != 1)
      return luaL_error(L, "function expects 1 arguments");

    using namespace L4;
    using namespace Ipc;

    const L4::Cap<L4Re::Dataspace> * _cap;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    _cap = cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Dataspace>>(lua_touserdata(L, 1));

    auto __out = new L4::Ipc::Cap<L4Re::Dataspace>(*_cap);

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43Ipc3CapIN4L4Re9DataspaceEEE");

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

int l4_ipc_cap_dataspace_new_2(lua_State *L)
{
  if (lua_gettop(L) != 0)
    return luaL_error(L, "function expects 0 arguments");

  using namespace L4;
  using namespace Ipc;

  auto __out = new L4::Ipc::Cap<L4Re::Dataspace>();

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43Ipc3CapIN4L4Re9DataspaceEEE");

  return 1;
}

int l4_ipc_cap_dataspace_new_3(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;
    using namespace Ipc;

    const L4::Cap<L4Re::Dataspace> * _cap;
    unsigned char _rights;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    _cap = cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Dataspace>>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TNUMBER);
    _rights = cppbind::lua::tointegral<unsigned char>(L, 2);

    auto __out = new L4::Ipc::Cap<L4Re::Dataspace>(*_cap, _rights);

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43Ipc3CapIN4L4Re9DataspaceEEE");

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

int l4_ipc_cap_dataspace_from_ci(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;
  using namespace Ipc;

  l4_cap_idx_t _c;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _c = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);

  auto __out = L4::Ipc::Cap<L4Re::Dataspace>::from_ci(_c);

  cppbind::type_info::make_typed(new L4::Ipc::Cap<L4Re::Dataspace>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43Ipc3CapIN4L4Re9DataspaceEEE");

  return 1;
}

int l4_ipc_cap_dataspace_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;
  using namespace Ipc;

  const L4::Ipc::Cap<L4Re::Dataspace> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Ipc::Cap<L4Re::Dataspace>>(lua_touserdata(L, 1));

  auto __out = ___self->cap();

  cppbind::type_info::make_typed(new L4::Cap<L4Re::Dataspace>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9DataspaceEEE");

  return 1;
}

int l4_ipc_cap_dataspace_rights(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;
  using namespace Ipc;

  const L4::Ipc::Cap<L4Re::Dataspace> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Ipc::Cap<L4Re::Dataspace>>(lua_touserdata(L, 1));

  auto __out = ___self->rights();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_ipc_cap_dataspace_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;
  using namespace Ipc;

  const L4::Ipc::Cap<L4Re::Dataspace> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Ipc::Cap<L4Re::Dataspace>>(lua_touserdata(L, 1));

  auto __out = ___self->is_valid();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_ipc_cap_dataspace_copy(lua_State *L)
{
  try {
    if (lua_gettop(L) != 1)
      return luaL_error(L, "function expects 1 arguments");

    using namespace L4;
    using namespace Ipc;

    const L4::Ipc::Cap<L4Re::Dataspace> * __1;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    __1 = cppbind::type_info::typed_pointer_cast<const L4::Ipc::Cap<L4Re::Dataspace>>(lua_touserdata(L, 1));

    auto __out = new L4::Ipc::Cap<L4Re::Dataspace>(*__1);

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43Ipc3CapIN4L4Re9DataspaceEEE");

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

int l4_ipc_cap_dataspace_move(lua_State *L)
{
  try {
    if (lua_gettop(L) != 1)
      return luaL_error(L, "function expects 1 arguments");

    using namespace L4;
    using namespace Ipc;

    L4::Ipc::Cap<L4Re::Dataspace> * __1;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    __1 = cppbind::type_info::typed_pointer_cast<L4::Ipc::Cap<L4Re::Dataspace>>(lua_touserdata(L, 1));

    auto __out = new L4::Ipc::Cap<L4Re::Dataspace>(std::move(*__1));

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43Ipc3CapIN4L4Re9DataspaceEEE");

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

int l4_ipc_cap_dataspace_new_dataspace(lua_State *L)
{
  try {
    if (lua_gettop(L) != 1)
      return luaL_error(L, "function expects 1 arguments");

    using namespace L4;
    using namespace Ipc;

    const L4::Ipc::Cap<L4Re::Dataspace> * _o;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    _o = cppbind::type_info::typed_pointer_cast<const L4::Ipc::Cap<L4Re::Dataspace>>(lua_touserdata(L, 1));

    auto __out = new L4::Ipc::Cap<L4Re::Dataspace>(*_o);

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43Ipc3CapIN4L4Re9DataspaceEEE");

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

void _register(lua_State *L)
{
  lua_getglobal(L, "_G");
  if (lua_isnil(L, -1)) {
    lua_pop(L, 1);
    lua_createtable(L, 0, 0);
  }

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

  lua_createtable(L, 0, 7);

  {
    static luaL_Reg const _functions[] = {
      {"new_1", l4_ipc_cap_dataspace_new_1},
      {"new_2", l4_ipc_cap_dataspace_new_2},
      {"new_3", l4_ipc_cap_dataspace_new_3},
      {"from_ci", l4_ipc_cap_dataspace_from_ci},
      {"copy", l4_ipc_cap_dataspace_copy},
      {"move", l4_ipc_cap_dataspace_move},
      {"new_dataspace", l4_ipc_cap_dataspace_new_dataspace},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "CapDataspace");

  lua_setfield(L, -2, "Ipc");

  lua_setfield(L, -2, "L4");

  lua_getfield(L, -1, "L4Re");
  if (lua_isnil(L, -1)) {
    lua_pop(L, 1);
    lua_createtable(L, 0, 0);
  }

  lua_setfield(L, -2, "L4Re");

  lua_setglobal(L, "_G");
}

void _createmetatables(lua_State *L)
{
  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43Ipc3CapIN4L4Re9DataspaceEEE",
    {
      {"from_ci", l4_ipc_cap_dataspace_from_ci},
      {"cap", l4_ipc_cap_dataspace_cap},
      {"rights", l4_ipc_cap_dataspace_rights},
      {"is_valid", l4_ipc_cap_dataspace_is_valid},
      {"copy", cppbind::lua::bind_copy},
      {"move", cppbind::lua::bind_move}
    });
}

extern "C"
{

LUALIB_API int luaopen_ipc_types(lua_State *L)
{
  _register(L);
  _createmetatables(L);

  return 1;
}

} // extern "C"

} // namespace