#define LUA_LIB

#include "lua.h"
#include "lauxlib.h"

#include "/home/timo/github/projects/cppbind/generate/cppbind/lua/lua_util.h"

#include "/home/timo/github/l4re/l4/pkg/l4re-c-examples/shared/example_pingpong_shared.h"
#include "/home/timo/github/l4re/l4/pkg/l4re-c-examples/shared/example_pingpong_shared.h"

#include "/home/timo/github/projects/cppbind/generate/cppbind/type_info.h"

namespace cppbind::type_info {
  type_instance<pseudo::Ping_pong> _ZTSN6pseudo9Ping_pongE;
  type_instance<pseudo::Cap_base> _ZTSN6pseudo8Cap_baseE;
  type_instance<pseudo::Cap<pseudo::Ping_pong>> _ZTSN6pseudo3CapINS_9Ping_pongEEE;
}

namespace
{

int pseudo_ping_pong_ping(lua_State *L)
{
  try {
    if (lua_gettop(L) != 3)
      return luaL_error(L, "function expects 3 arguments");

    using namespace pseudo;

    const pseudo::Ping_pong * ___self;
    l4_int32_t _arg;
    l4_int32_t * _res;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const pseudo::Ping_pong>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TNUMBER);
    _arg = cppbind::lua::tointegral<l4_int32_t>(L, 2);

    if (lua_isuserdata(L, 3)) {
      _res = cppbind::type_info::typed_pointer_cast<l4_int32_t>(lua_touserdata(L, 3));
    } else {
      luaL_checktype(L, 3, LUA_TNUMBER);
      static l4_int32_t __tmp = cppbind::lua::tointegral<l4_int32_t>(L, 3);
      _res = &__tmp;
    }

    auto __out = ___self->ping(_arg, _res);

    cppbind::lua::pushintegral(L, __out);

    int __top = lua_gettop(L);

    if (!lua_isuserdata(L, 3) && _res)
       cppbind::lua::pushintegral(L, *_res);

    return 1 + (lua_gettop(L) - __top);
  } catch (std::exception const &__e) {
    lua_pushstring(L, __e.what());
  } catch (...) {
    lua_pushstring(L, "exception");
  }

  return lua_error(L);
}

int pseudo_ping_pong_new(lua_State *L)
{
  if (lua_gettop(L) != 0)
    return luaL_error(L, "function expects 0 arguments");

  using namespace pseudo;

  auto __out = new pseudo::Ping_pong();

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN6pseudo9Ping_pongE");

  return 1;
}

int pseudo_cap_base_new(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace pseudo;

  l4_cap_idx_t _c;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _c = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);

  auto __out = new pseudo::Cap_base(_c);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN6pseudo8Cap_baseE");

  return 1;
}

int pseudo_cap_base_copy(lua_State *L)
{
  try {
    if (lua_gettop(L) != 1)
      return luaL_error(L, "function expects 1 arguments");

    using namespace pseudo;

    const pseudo::Cap_base * __1;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    __1 = cppbind::type_info::typed_pointer_cast<const pseudo::Cap_base>(lua_touserdata(L, 1));

    auto __out = new pseudo::Cap_base(*__1);

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN6pseudo8Cap_baseE");

    return 1;
  } catch (std::exception const &__e) {
    lua_pushstring(L, __e.what());
  } catch (...) {
    lua_pushstring(L, "exception");
  }

  return lua_error(L);
}

int pseudo_cap_base_move(lua_State *L)
{
  try {
    if (lua_gettop(L) != 1)
      return luaL_error(L, "function expects 1 arguments");

    using namespace pseudo;

    pseudo::Cap_base * __1;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    __1 = cppbind::type_info::typed_pointer_cast<pseudo::Cap_base>(lua_touserdata(L, 1));

    auto __out = new pseudo::Cap_base(std::move(*__1));

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN6pseudo8Cap_baseE");

    return 1;
  } catch (std::exception const &__e) {
    lua_pushstring(L, __e.what());
  } catch (...) {
    lua_pushstring(L, "exception");
  }

  return lua_error(L);
}

int pseudo_cap_ping_pong_new(lua_State *L)
{
  try {
    if (lua_gettop(L) != 1)
      return luaL_error(L, "function expects 1 arguments");

    using namespace pseudo;

    const pseudo::Ping_pong * _p;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    _p = cppbind::type_info::typed_pointer_cast<const pseudo::Ping_pong>(lua_touserdata(L, 1));

    auto __out = new pseudo::Cap<pseudo::Ping_pong>(_p);

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN6pseudo3CapINS_9Ping_pongEEE");

    return 1;
  } catch (std::exception const &__e) {
    lua_pushstring(L, __e.what());
  } catch (...) {
    lua_pushstring(L, "exception");
  }

  return lua_error(L);
}

int pseudo_cap_ping_pong_access(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace pseudo;

  const pseudo::Cap<pseudo::Ping_pong> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const pseudo::Cap<pseudo::Ping_pong>>(lua_touserdata(L, 1));

  auto __out = ___self->operator->();

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), false);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN6pseudo9Ping_pongE");

  return 1;
}

void _register(lua_State *L)
{
  lua_createtable(L, 0, 0);

  lua_createtable(L, 0, 0);

  lua_setfield(L, -2, "L4Cap");

  lua_createtable(L, 0, 0);

  lua_setfield(L, -2, "L4Cap");

  lua_createtable(L, 0, 0);

  lua_setfield(L, -2, "L4Cap");

  lua_createtable(L, 0, 0);

  lua_setfield(L, -2, "L4Cap");

  lua_createtable(L, 0, 0);

  lua_createtable(L, 0, 1);

  {
    static luaL_Reg const _functions[] = {
      {"new", pseudo_ping_pong_new},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "PingPong");

  lua_createtable(L, 0, 3);

  {
    static luaL_Reg const _functions[] = {
      {"new", pseudo_cap_base_new},
      {"copy", pseudo_cap_base_copy},
      {"move", pseudo_cap_base_move},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "CapBase");

  lua_createtable(L, 0, 1);

  {
    static luaL_Reg const _functions[] = {
      {"new", pseudo_cap_ping_pong_new},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "CapPingPong");

  lua_setfield(L, -2, "pseudo");
}

void _createmetatables(lua_State *L)
{
  cppbind::lua::createmetatable(L, "METATABLE__ZTSN6pseudo9Ping_pongE",
    {
      {"ping", pseudo_ping_pong_ping}
    });

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN6pseudo8Cap_baseE",
    {
      {"copy", cppbind::lua::bind_copy},
      {"move", cppbind::lua::bind_move}
    });

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN6pseudo3CapINS_9Ping_pongEEE",
    {
      {"access", pseudo_cap_ping_pong_access}
    });
}

extern "C"
{

LUALIB_API int luaopen_example_pingpong_shared(lua_State *L)
{
  _register(L);
  _createmetatables(L);

  return 1;
}

} // extern "C"

} // namespace