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

#include "/home/timo/github/projects/l4re/l4/pkg/cppbind-examples/shared/example_kobject_shared.h"

namespace cppbind::type_info {
  type_instance<Dummy_kobject, L4::Kobject_t<Dummy_kobject, L4::Kobject, 66>, L4::Kobject> _ZTS13Dummy_kobject;
  type_instance<long long> _ZTSx;
}

namespace
{

int dummy_kobject_call(lua_State *L)
{
  try {
    if (lua_gettop(L) != 4)
      return luaL_error(L, "function expects 4 arguments");

    using namespace L4;
    using namespace Ipc;
    using namespace Msg;

    const Dummy_kobject * ___self;
    long long _a_1;
    long long _a_2;
    long long * _a_3;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const Dummy_kobject>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TNUMBER);
    _a_1 = cppbind::lua::tointegral<long long>(L, 2);

    luaL_checktype(L, 3, LUA_TNUMBER);
    _a_2 = cppbind::lua::tointegral<long long>(L, 3);

    if (lua_isuserdata(L, 4)) {
      _a_3 = cppbind::type_info::typed_pointer_cast<long long>(lua_touserdata(L, 4));
    } else {
      luaL_checktype(L, 4, LUA_TNUMBER);
      static auto __tmp = cppbind::lua::tointegral<long long>(L, 4);
      _a_3 = &__tmp;
    }

    auto __out = ___self->call(_a_1, _a_2, _a_3);

    cppbind::lua::pushintegral(L, __out);

    int __top = lua_gettop(L);

    if (!lua_isuserdata(L, 4) && _a_3)
       cppbind::lua::pushintegral(L, *_a_3);

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

void _register(lua_State *L)
{
  lua_getglobal(L, "_G");
  if (lua_isnil(L, -1)) {
    lua_pop(L, 1);
    lua_createtable(L, 0, 0);
  }

  lua_createtable(L, 0, 0);

  lua_setfield(L, -2, "DummyKobject");

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
  cppbind::lua::createmetatable(L, "METATABLE__ZTS13Dummy_kobject",
    {
      {"call", dummy_kobject_call}
    });
}

extern "C"
{

LUALIB_API int luaopen_example_kobject_shared(lua_State *L)
{
  _register(L);
  _createmetatables(L);

  return 1;
}

} // extern "C"

} // namespace