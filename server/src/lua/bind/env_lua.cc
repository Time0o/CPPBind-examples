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

#include "/home/timo/github/projects/l4re/l4/pkg/l4re-core/l4re/include/env"
#include "/home/timo/github/projects/l4re/l4/pkg/cppbind-examples/shared/example_kobject_shared.h"

namespace cppbind::type_info {
  type_instance<L4::Cap<L4::Task>, L4::Cap_base> _ZTSN2L43CapINS_4TaskEEE;
  type_instance<L4::Cap<L4::Factory>, L4::Cap_base> _ZTSN2L43CapINS_7FactoryEEE;
  type_instance<L4::Cap<L4::Thread>, L4::Cap_base> _ZTSN2L43CapINS_6ThreadEEE;
  type_instance<L4::Cap<L4Re::Mem_alloc>, L4::Cap_base> _ZTSN2L43CapIN4L4Re9Mem_allocEEE;
  type_instance<L4::Cap<L4Re::Rm>, L4::Cap_base> _ZTSN2L43CapIN4L4Re2RmEEE;
  type_instance<L4::Cap<Dummy_kobject>, L4::Cap_base> _ZTSN2L43CapI13Dummy_kobjectEE;
  type_instance<L4::Cap<L4Re::Parent>, L4::Cap_base> _ZTSN2L43CapIN4L4Re6ParentEEE;
  type_instance<L4::Cap<L4Re::Log>, L4::Cap_base> _ZTSN2L43CapIN4L4Re3LogEEE;
  type_instance<L4::Cap<L4::Scheduler>, L4::Cap_base> _ZTSN2L43CapINS_9SchedulerEEE;
  type_instance<L4Re::Env> _ZTSN4L4Re3EnvE;
  type_instance<char> _ZTSc;
}

namespace
{

int l4_re_env_env(lua_State *L)
{
  if (lua_gettop(L) != 0)
    return luaL_error(L, "function expects 0 arguments");

  using namespace L4Re;

  auto __out = L4Re::Env::env();

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), false);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN4L4Re3EnvE");

  return 1;
}

int l4_re_env_parent_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  const L4Re::Env * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Env>(lua_touserdata(L, 1));

  auto __out = ___self->parent();

  cppbind::type_info::make_typed(new L4::Cap<L4Re::Parent>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re6ParentEEE");

  return 1;
}

int l4_re_env_mem_alloc_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  const L4Re::Env * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Env>(lua_touserdata(L, 1));

  auto __out = ___self->mem_alloc();

  cppbind::type_info::make_typed(new L4::Cap<L4Re::Mem_alloc>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9Mem_allocEEE");

  return 1;
}

int l4_re_env_user_factory(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  const L4Re::Env * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Env>(lua_touserdata(L, 1));

  auto __out = ___self->user_factory();

  cppbind::type_info::make_typed(new L4::Cap<L4::Factory>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7FactoryEEE");

  return 1;
}

int l4_re_env_rm_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  const L4Re::Env * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Env>(lua_touserdata(L, 1));

  auto __out = ___self->rm();

  cppbind::type_info::make_typed(new L4::Cap<L4Re::Rm>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re2RmEEE");

  return 1;
}

int l4_re_env_log_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  const L4Re::Env * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Env>(lua_touserdata(L, 1));

  auto __out = ___self->log();

  cppbind::type_info::make_typed(new L4::Cap<L4Re::Log>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re3LogEEE");

  return 1;
}

int l4_re_env_main_thread_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  const L4Re::Env * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Env>(lua_touserdata(L, 1));

  auto __out = ___self->main_thread();

  cppbind::type_info::make_typed(new L4::Cap<L4::Thread>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_6ThreadEEE");

  return 1;
}

int l4_re_env_task(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  const L4Re::Env * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Env>(lua_touserdata(L, 1));

  auto __out = ___self->task();

  cppbind::type_info::make_typed(new L4::Cap<L4::Task>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4TaskEEE");

  return 1;
}

int l4_re_env_factory_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  const L4Re::Env * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Env>(lua_touserdata(L, 1));

  auto __out = ___self->factory();

  cppbind::type_info::make_typed(new L4::Cap<L4::Factory>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7FactoryEEE");

  return 1;
}

int l4_re_env_first_free_cap_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  const L4Re::Env * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Env>(lua_touserdata(L, 1));

  auto __out = ___self->first_free_cap();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_re_env_first_free_utcb_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  const L4Re::Env * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Env>(lua_touserdata(L, 1));

  auto __out = ___self->first_free_utcb();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_re_env_parent_2(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4Re;

    L4Re::Env * ___self;
    const L4::Cap<L4Re::Parent> * _c;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<L4Re::Env>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _c = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Parent>>(lua_touserdata(L, 2));

    ___self->parent(*_c);

    return 0;
  } catch (std::exception const &__e) {
    lua_pushstring(L, __e.what());
  } catch (lua_longjmp *) {
    throw;
  } catch (...) {
    lua_pushstring(L, "exception");
  }

  return lua_error(L);
}

int l4_re_env_mem_alloc_2(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4Re;

    L4Re::Env * ___self;
    const L4::Cap<L4Re::Mem_alloc> * _c;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<L4Re::Env>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _c = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Mem_alloc>>(lua_touserdata(L, 2));

    ___self->mem_alloc(*_c);

    return 0;
  } catch (std::exception const &__e) {
    lua_pushstring(L, __e.what());
  } catch (lua_longjmp *) {
    throw;
  } catch (...) {
    lua_pushstring(L, "exception");
  }

  return lua_error(L);
}

int l4_re_env_rm_2(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4Re;

    L4Re::Env * ___self;
    const L4::Cap<L4Re::Rm> * _c;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<L4Re::Env>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _c = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Rm>>(lua_touserdata(L, 2));

    ___self->rm(*_c);

    return 0;
  } catch (std::exception const &__e) {
    lua_pushstring(L, __e.what());
  } catch (lua_longjmp *) {
    throw;
  } catch (...) {
    lua_pushstring(L, "exception");
  }

  return lua_error(L);
}

int l4_re_env_log_2(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4Re;

    L4Re::Env * ___self;
    const L4::Cap<L4Re::Log> * _c;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<L4Re::Env>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _c = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Log>>(lua_touserdata(L, 2));

    ___self->log(*_c);

    return 0;
  } catch (std::exception const &__e) {
    lua_pushstring(L, __e.what());
  } catch (lua_longjmp *) {
    throw;
  } catch (...) {
    lua_pushstring(L, "exception");
  }

  return lua_error(L);
}

int l4_re_env_main_thread_2(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4Re;

    L4Re::Env * ___self;
    const L4::Cap<L4::Thread> * _c;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<L4Re::Env>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _c = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Thread>>(lua_touserdata(L, 2));

    ___self->main_thread(*_c);

    return 0;
  } catch (std::exception const &__e) {
    lua_pushstring(L, __e.what());
  } catch (lua_longjmp *) {
    throw;
  } catch (...) {
    lua_pushstring(L, "exception");
  }

  return lua_error(L);
}

int l4_re_env_factory_2(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4Re;

    L4Re::Env * ___self;
    const L4::Cap<L4::Factory> * _c;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<L4Re::Env>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _c = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Factory>>(lua_touserdata(L, 2));

    ___self->factory(*_c);

    return 0;
  } catch (std::exception const &__e) {
    lua_pushstring(L, __e.what());
  } catch (lua_longjmp *) {
    throw;
  } catch (...) {
    lua_pushstring(L, "exception");
  }

  return lua_error(L);
}

int l4_re_env_first_free_cap_2(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4Re;

  L4Re::Env * ___self;
  l4_cap_idx_t _c;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4Re::Env>(lua_touserdata(L, 1));

  luaL_checktype(L, 2, LUA_TNUMBER);
  _c = cppbind::lua::tointegral<l4_cap_idx_t>(L, 2);

  ___self->first_free_cap(_c);

  return 0;
}

int l4_re_env_first_free_utcb_2(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4Re;

  L4Re::Env * ___self;
  l4_addr_t _u;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4Re::Env>(lua_touserdata(L, 1));

  luaL_checktype(L, 2, LUA_TNUMBER);
  _u = cppbind::lua::tointegral<l4_addr_t>(L, 2);

  ___self->first_free_utcb(_u);

  return 0;
}

int l4_re_env_scheduler_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;

  const L4Re::Env * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Env>(lua_touserdata(L, 1));

  auto __out = ___self->scheduler();

  cppbind::type_info::make_typed(new L4::Cap<L4::Scheduler>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_9SchedulerEEE");

  return 1;
}

int l4_re_env_scheduler_2(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4Re;

    L4Re::Env * ___self;
    const L4::Cap<L4::Scheduler> * _c;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<L4Re::Env>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _c = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Scheduler>>(lua_touserdata(L, 2));

    ___self->scheduler(*_c);

    return 0;
  } catch (std::exception const &__e) {
    lua_pushstring(L, __e.what());
  } catch (lua_longjmp *) {
    throw;
  } catch (...) {
    lua_pushstring(L, "exception");
  }

  return lua_error(L);
}

int l4_re_env_new(lua_State *L)
{
  if (lua_gettop(L) != 0)
    return luaL_error(L, "function expects 0 arguments");

  using namespace L4Re;

  auto __out = new L4Re::Env();

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN4L4Re3EnvE");

  return 1;
}

int l4_re_env_get_cap_dummy_kobject_1(lua_State *L)
{
  try {
    if (lua_gettop(L) != 3)
      return luaL_error(L, "function expects 3 arguments");

    using namespace L4Re;

    const L4Re::Env * ___self;
    const char * _name;
    unsigned int _l;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Env>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TSTRING);
    _name = lua_tostring(L, 2);

    luaL_checktype(L, 3, LUA_TNUMBER);
    _l = cppbind::lua::tointegral<unsigned int>(L, 3);

    auto __out = ___self->get_cap<Dummy_kobject>(_name, _l);

    cppbind::type_info::make_typed(new L4::Cap<Dummy_kobject>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapI13Dummy_kobjectEE");

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

int l4_re_env_get_cap_dummy_kobject_2(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4Re;

    const L4Re::Env * ___self;
    const char * _name;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Env>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TSTRING);
    _name = lua_tostring(L, 2);

    auto __out = ___self->get_cap<Dummy_kobject>(_name);

    cppbind::type_info::make_typed(new L4::Cap<Dummy_kobject>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapI13Dummy_kobjectEE");

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

  lua_setfield(L, -2, "Ipc");

  lua_setfield(L, -2, "L4");

  lua_getfield(L, -1, "L4Re");
  if (lua_isnil(L, -1)) {
    lua_pop(L, 1);
    lua_createtable(L, 0, 0);
  }

  lua_createtable(L, 0, 2);

  {
    static luaL_Reg const _functions[] = {
      {"env", l4_re_env_env},
      {"new", l4_re_env_new},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "Env");

  lua_setfield(L, -2, "L4Re");

  lua_setglobal(L, "_G");
}

void _createmetatables(lua_State *L)
{
  cppbind::lua::createmetatable(L, "METATABLE__ZTSN4L4Re3EnvE",
    {
      {"env", l4_re_env_env},
      {"parent_1", l4_re_env_parent_1},
      {"mem_alloc_1", l4_re_env_mem_alloc_1},
      {"user_factory", l4_re_env_user_factory},
      {"rm_1", l4_re_env_rm_1},
      {"log_1", l4_re_env_log_1},
      {"main_thread_1", l4_re_env_main_thread_1},
      {"task", l4_re_env_task},
      {"factory_1", l4_re_env_factory_1},
      {"first_free_cap_1", l4_re_env_first_free_cap_1},
      {"first_free_utcb_1", l4_re_env_first_free_utcb_1},
      {"parent_2", l4_re_env_parent_2},
      {"mem_alloc_2", l4_re_env_mem_alloc_2},
      {"rm_2", l4_re_env_rm_2},
      {"log_2", l4_re_env_log_2},
      {"main_thread_2", l4_re_env_main_thread_2},
      {"factory_2", l4_re_env_factory_2},
      {"first_free_cap_2", l4_re_env_first_free_cap_2},
      {"first_free_utcb_2", l4_re_env_first_free_utcb_2},
      {"scheduler_1", l4_re_env_scheduler_1},
      {"scheduler_2", l4_re_env_scheduler_2},
      {"get_cap_dummy_kobject_1", l4_re_env_get_cap_dummy_kobject_1},
      {"get_cap_dummy_kobject_2", l4_re_env_get_cap_dummy_kobject_2}
    });
}

extern "C"
{

LUALIB_API int luaopen_env(lua_State *L)
{
  _register(L);
  _createmetatables(L);

  return 1;
}

} // extern "C"

} // namespace