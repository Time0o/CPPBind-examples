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

#include "/home/timo/github/projects/l4re/l4/pkg/l4re-core/l4re/util/include/cap_alloc"

namespace cppbind::type_info {
  type_instance<L4Re::Util::Counting_cap_alloc<>> _ZTSN4L4Re4Util18Counting_cap_allocINS0_7CounterIhEEEE;
}

namespace
{

int l4_re_util_get_cap_alloc(lua_State *L)
{
  if (lua_gettop(L) != 0)
    return luaL_error(L, "function expects 0 arguments");

  using namespace L4Re;
  using namespace Util;

  auto __out = &L4Re::Util::cap_alloc;

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), false);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN4L4Re4Util18Counting_cap_allocINS0_7CounterIhEEEE");

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

  lua_getfield(L, -1, "Util");
  if (lua_isnil(L, -1)) {
    lua_pop(L, 1);
    lua_createtable(L, 0, 0);
  }

  {
    static luaL_Reg const _functions[] = {
      {"get_cap_alloc", l4_re_util_get_cap_alloc},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "Util");

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

}

extern "C"
{

LUALIB_API int luaopen_cap_alloc(lua_State *L)
{
  _register(L);
  _createmetatables(L);

  return 1;
}

} // extern "C"

} // namespace