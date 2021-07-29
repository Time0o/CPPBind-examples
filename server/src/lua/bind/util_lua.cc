#define LUA_LIB

#include <cstring>

#include "lua.h"
#include "lauxlib.h"

namespace
{

void *lua_addr(lua_State *L, int i)
{
  if (lua_isinteger(L, i))
    return reinterpret_cast<void *>(lua_tointeger(L, i));

  return lua_touserdata(L, 1);
}

int lua_strcmp(lua_State *L)
{
  void *start = lua_addr(L, 1);
  char const *str = lua_tostring(L, 2);

  lua_pushinteger(L, std::strcmp(static_cast<char const *>(start), str));

  return 1;
}

int lua_strcpy(lua_State *L)
{
  void *dest = lua_addr(L, 1);
  char const *str = lua_tostring(L, 2);

  std::memcpy(dest, str, std::strlen(str) + 1);

  return 0;
}

extern "C"
{

LUALIB_API int luaopen_util(lua_State *L)
{
  lua_createtable(L, 0, 0);

  static luaL_Reg const functions[] = {
    {"strcmp", lua_strcmp},
    {"strcpy", lua_strcpy},
    {nullptr, nullptr}
  };

  luaL_setfuncs(L, functions, 0);

  return 1;
}

} // extern "C"

} // namespace
