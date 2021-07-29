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

#include "/home/timo/github/projects/l4re/l4/pkg/l4re-core/l4sys/include/cxx/capability.h"
#include </home/timo/github/projects/l4re/l4/pkg/l4re-core/l4re/include/dataspace>
#include </home/timo/github/projects/l4re/l4/pkg/l4re-core/l4re/include/mem_alloc>
#include </home/timo/github/projects/l4re/l4/pkg/l4re-core/l4re/include/rm>
#include "/home/timo/github/projects/l4re/l4/pkg/cppbind-examples/shared/example_kobject_shared.h"

namespace cppbind::type_info {
  type_instance<L4::Cap<L4::Task>, L4::Cap_base> _ZTSN2L43CapINS_4TaskEEE;
  type_instance<L4::Cap<L4::Kobject>, L4::Cap_base> _ZTSN2L43CapINS_7KobjectEEE;
  type_instance<L4::Cap<L4::Meta>, L4::Cap_base> _ZTSN2L43CapINS_4MetaEEE;
  type_instance<L4::Cap<void>, L4::Cap_base> _ZTSN2L43CapIvEE;
  type_instance<Dummy_kobject, L4::Kobject_t<Dummy_kobject, L4::Kobject, 66>, L4::Kobject> _ZTS13Dummy_kobject;
  type_instance<L4::Cap<L4::Factory>, L4::Cap_base> _ZTSN2L43CapINS_7FactoryEEE;
  type_instance<L4::Cap<L4::Thread>, L4::Cap_base> _ZTSN2L43CapINS_6ThreadEEE;
  type_instance<L4::Cap<L4::Irq>, L4::Cap_base> _ZTSN2L43CapINS_3IrqEEE;
  type_instance<L4::Cap<L4::Vm>, L4::Cap_base> _ZTSN2L43CapINS_2VmEEE;
  type_instance<L4Re::Dataspace, L4::Kobject_t<L4Re::Dataspace, L4::Kobject, 16384, L4::Type_info::Demand_t<'\x01', '\x00', '\x00', '\x00'>>, L4::Kobject> _ZTSN4L4Re9DataspaceE;
  type_instance<L4Re::Mem_alloc, L4::Kobject_t<L4Re::Mem_alloc, L4::Factory, -19>, L4::Factory, L4::Kobject_t<L4::Factory, L4::Kobject, -15>, L4::Kobject> _ZTSN4L4Re9Mem_allocE;
  type_instance<L4Re::Rm, L4::Kobject_t<L4Re::Rm, L4::Pager, 16389, L4::Type_info::Demand_t<'\x01', '\x00', '\x00', '\x00'>>, L4::Pager, L4::Kobject_t<L4::Pager, L4::Io_pager, -2>, L4::Io_pager, L4::Kobject_0t<L4::Io_pager, -8>, L4::Kobject_t<L4::Io_pager, L4::Kobject, -8>, L4::Kobject> _ZTSN4L4Re2RmE;
  type_instance<L4::Cap<L4Re::Dataspace>, L4::Cap_base> _ZTSN2L43CapIN4L4Re9DataspaceEEE;
  type_instance<L4::Cap<L4Re::Mem_alloc>, L4::Cap_base> _ZTSN2L43CapIN4L4Re9Mem_allocEEE;
  type_instance<L4::Cap<L4Re::Rm>, L4::Cap_base> _ZTSN2L43CapIN4L4Re2RmEEE;
  type_instance<L4::Cap<Dummy_kobject>, L4::Cap_base> _ZTSN2L43CapI13Dummy_kobjectEE;
}

namespace
{

int l4_cap_task_new_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<L4::Cap_base::Cap_type>(cppbind::lua::tointegral<unsigned long>(L, 1));

  auto __out = new L4::Cap<L4::Task>(_cap);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4TaskEEE");

  return 1;
}

int l4_cap_task_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  l4_default_caps_t _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<l4_default_caps_t>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4::Task>(_cap);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4TaskEEE");

  return 1;
}

int l4_cap_task_new_3(lua_State *L)
{
  if (lua_gettop(L) < 0 || lua_gettop(L) > 1)
    return luaL_error(L, "function expects between 0 and 1 arguments");

  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  if (lua_gettop(L) < 1) goto function_call;
  luaL_checktype(L, 1, LUA_TNUMBER);
  _idx = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);

  function_call:

  auto __out = new L4::Cap<L4::Task>(_idx);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4TaskEEE");

  return 1;
}

int l4_cap_task_new_4(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::No_init_type __1;

  luaL_checktype(L, 1, LUA_TNUMBER);
  __1 = static_cast<L4::Cap_base::No_init_type>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4::Task>(__1);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4TaskEEE");

  return 1;
}

int l4_cap_task_move_1(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;

    const L4::Cap<L4::Task> * ___self;
    const L4::Cap<L4::Task> * _src;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(lua_touserdata(L, 2));

    auto __out = ___self->move(*_src);

    cppbind::type_info::make_typed(new L4::Cap<L4::Task>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4TaskEEE");

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

int l4_cap_task_copy_1(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;

    const L4::Cap<L4::Task> * ___self;
    const L4::Cap<L4::Task> * _src;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(lua_touserdata(L, 2));

    auto __out = ___self->copy(*_src);

    cppbind::type_info::make_typed(new L4::Cap<L4::Task>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4TaskEEE");

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

int l4_cap_task_copy_2(lua_State *L)
{
  try {
    if (lua_gettop(L) != 1)
      return luaL_error(L, "function expects 1 arguments");

    using namespace L4;

    const L4::Cap<L4::Task> * __1;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    __1 = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(lua_touserdata(L, 1));

    auto __out = new L4::Cap<L4::Task>(*__1);

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4TaskEEE");

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

int l4_cap_task_move_2(lua_State *L)
{
  try {
    if (lua_gettop(L) != 1)
      return luaL_error(L, "function expects 1 arguments");

    using namespace L4;

    L4::Cap<L4::Task> * __1;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    __1 = cppbind::type_info::typed_pointer_cast<L4::Cap<L4::Task>>(lua_touserdata(L, 1));

    auto __out = new L4::Cap<L4::Task>(std::move(*__1));

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4TaskEEE");

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

int l4_cap_task_new_task(lua_State *L)
{
  try {
    if (lua_gettop(L) != 1)
      return luaL_error(L, "function expects 1 arguments");

    using namespace L4;

    const L4::Cap<L4::Task> * _o;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    _o = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(lua_touserdata(L, 1));

    auto __out = new L4::Cap<L4::Task>(*_o);

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4TaskEEE");

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

int l4_cap_task_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Task> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(lua_touserdata(L, 1));

  auto __out = ___self->cap();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_task_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Task> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(lua_touserdata(L, 1));

  auto __out = ___self->is_valid();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_task_snd_base(lua_State *L)
{
  if (lua_gettop(L) < 1 || lua_gettop(L) > 3)
    return luaL_error(L, "function expects between 1 and 3 arguments");

  using namespace L4;

  const L4::Cap<L4::Task> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(lua_touserdata(L, 1));

  if (lua_gettop(L) < 2) goto function_call;
  luaL_checktype(L, 2, LUA_TNUMBER);
  _grant = cppbind::lua::tointegral<unsigned int>(L, 2);

  if (lua_gettop(L) < 3) goto function_call;
  luaL_checktype(L, 3, LUA_TNUMBER);
  _base = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);

  function_call:

  auto __out = ___self->snd_base(_grant, _base);

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_task_invalidate(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<L4::Task> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<L4::Task>>(lua_touserdata(L, 1));

  ___self->invalidate();

  return 0;
}

int l4_cap_kobject_new_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<L4::Cap_base::Cap_type>(cppbind::lua::tointegral<unsigned long>(L, 1));

  auto __out = new L4::Cap<L4::Kobject>(_cap);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7KobjectEEE");

  return 1;
}

int l4_cap_kobject_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  l4_default_caps_t _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<l4_default_caps_t>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4::Kobject>(_cap);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7KobjectEEE");

  return 1;
}

int l4_cap_kobject_new_3(lua_State *L)
{
  if (lua_gettop(L) < 0 || lua_gettop(L) > 1)
    return luaL_error(L, "function expects between 0 and 1 arguments");

  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  if (lua_gettop(L) < 1) goto function_call;
  luaL_checktype(L, 1, LUA_TNUMBER);
  _idx = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);

  function_call:

  auto __out = new L4::Cap<L4::Kobject>(_idx);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7KobjectEEE");

  return 1;
}

int l4_cap_kobject_new_4(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::No_init_type __1;

  luaL_checktype(L, 1, LUA_TNUMBER);
  __1 = static_cast<L4::Cap_base::No_init_type>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4::Kobject>(__1);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7KobjectEEE");

  return 1;
}

int l4_cap_kobject_move(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;

    const L4::Cap<L4::Kobject> * ___self;
    const L4::Cap<L4::Kobject> * _src;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Kobject>>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Kobject>>(lua_touserdata(L, 2));

    auto __out = ___self->move(*_src);

    cppbind::type_info::make_typed(new L4::Cap<L4::Kobject>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7KobjectEEE");

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

int l4_cap_kobject_copy(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;

    const L4::Cap<L4::Kobject> * ___self;
    const L4::Cap<L4::Kobject> * _src;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Kobject>>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Kobject>>(lua_touserdata(L, 2));

    auto __out = ___self->copy(*_src);

    cppbind::type_info::make_typed(new L4::Cap<L4::Kobject>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7KobjectEEE");

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

int l4_cap_kobject_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Kobject>>(lua_touserdata(L, 1));

  auto __out = ___self->cap();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_kobject_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Kobject>>(lua_touserdata(L, 1));

  auto __out = ___self->is_valid();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_kobject_snd_base(lua_State *L)
{
  if (lua_gettop(L) < 1 || lua_gettop(L) > 3)
    return luaL_error(L, "function expects between 1 and 3 arguments");

  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Kobject>>(lua_touserdata(L, 1));

  if (lua_gettop(L) < 2) goto function_call;
  luaL_checktype(L, 2, LUA_TNUMBER);
  _grant = cppbind::lua::tointegral<unsigned int>(L, 2);

  if (lua_gettop(L) < 3) goto function_call;
  luaL_checktype(L, 3, LUA_TNUMBER);
  _base = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);

  function_call:

  auto __out = ___self->snd_base(_grant, _base);

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_kobject_invalidate(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<L4::Kobject> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<L4::Kobject>>(lua_touserdata(L, 1));

  ___self->invalidate();

  return 0;
}

int l4_cap_meta_new_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<L4::Cap_base::Cap_type>(cppbind::lua::tointegral<unsigned long>(L, 1));

  auto __out = new L4::Cap<L4::Meta>(_cap);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4MetaEEE");

  return 1;
}

int l4_cap_meta_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  l4_default_caps_t _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<l4_default_caps_t>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4::Meta>(_cap);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4MetaEEE");

  return 1;
}

int l4_cap_meta_new_3(lua_State *L)
{
  if (lua_gettop(L) < 0 || lua_gettop(L) > 1)
    return luaL_error(L, "function expects between 0 and 1 arguments");

  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  if (lua_gettop(L) < 1) goto function_call;
  luaL_checktype(L, 1, LUA_TNUMBER);
  _idx = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);

  function_call:

  auto __out = new L4::Cap<L4::Meta>(_idx);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4MetaEEE");

  return 1;
}

int l4_cap_meta_new_4(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::No_init_type __1;

  luaL_checktype(L, 1, LUA_TNUMBER);
  __1 = static_cast<L4::Cap_base::No_init_type>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4::Meta>(__1);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4MetaEEE");

  return 1;
}

int l4_cap_meta_move(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;

    const L4::Cap<L4::Meta> * ___self;
    const L4::Cap<L4::Meta> * _src;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Meta>>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Meta>>(lua_touserdata(L, 2));

    auto __out = ___self->move(*_src);

    cppbind::type_info::make_typed(new L4::Cap<L4::Meta>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4MetaEEE");

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

int l4_cap_meta_copy(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;

    const L4::Cap<L4::Meta> * ___self;
    const L4::Cap<L4::Meta> * _src;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Meta>>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Meta>>(lua_touserdata(L, 2));

    auto __out = ___self->copy(*_src);

    cppbind::type_info::make_typed(new L4::Cap<L4::Meta>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4MetaEEE");

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

int l4_cap_meta_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Meta>>(lua_touserdata(L, 1));

  auto __out = ___self->cap();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_meta_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Meta>>(lua_touserdata(L, 1));

  auto __out = ___self->is_valid();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_meta_snd_base(lua_State *L)
{
  if (lua_gettop(L) < 1 || lua_gettop(L) > 3)
    return luaL_error(L, "function expects between 1 and 3 arguments");

  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Meta>>(lua_touserdata(L, 1));

  if (lua_gettop(L) < 2) goto function_call;
  luaL_checktype(L, 2, LUA_TNUMBER);
  _grant = cppbind::lua::tointegral<unsigned int>(L, 2);

  if (lua_gettop(L) < 3) goto function_call;
  luaL_checktype(L, 3, LUA_TNUMBER);
  _base = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);

  function_call:

  auto __out = ___self->snd_base(_grant, _base);

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_meta_invalidate(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<L4::Meta> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<L4::Meta>>(lua_touserdata(L, 1));

  ___self->invalidate();

  return 0;
}

int l4_cap_void_new_1(lua_State *L)
{
  try {
    if (lua_gettop(L) != 1)
      return luaL_error(L, "function expects 1 arguments");

    using namespace L4;

    const void * _p;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    _p = cppbind::type_info::typed_pointer_cast<const void>(lua_touserdata(L, 1));

    auto __out = new L4::Cap<void>(_p);

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");

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

int l4_cap_void_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<L4::Cap_base::Cap_type>(cppbind::lua::tointegral<unsigned long>(L, 1));

  auto __out = new L4::Cap<void>(_cap);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");

  return 1;
}

int l4_cap_void_new_3(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  l4_default_caps_t _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<l4_default_caps_t>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<void>(_cap);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");

  return 1;
}

int l4_cap_void_new_4(lua_State *L)
{
  if (lua_gettop(L) < 0 || lua_gettop(L) > 1)
    return luaL_error(L, "function expects between 0 and 1 arguments");

  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  if (lua_gettop(L) < 1) goto function_call;
  luaL_checktype(L, 1, LUA_TNUMBER);
  _idx = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);

  function_call:

  auto __out = new L4::Cap<void>(_idx);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");

  return 1;
}

int l4_cap_void_new_5(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::No_init_type __1;

  luaL_checktype(L, 1, LUA_TNUMBER);
  __1 = static_cast<L4::Cap_base::No_init_type>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<void>(__1);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");

  return 1;
}

int l4_cap_void_move_1(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;

    const L4::Cap<void> * ___self;
    const L4::Cap<void> * _src;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<void>>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<void>>(lua_touserdata(L, 2));

    auto __out = ___self->move(*_src);

    cppbind::type_info::make_typed(new L4::Cap<void>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");

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

int l4_cap_void_copy_1(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;

    const L4::Cap<void> * ___self;
    const L4::Cap<void> * _src;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<void>>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<void>>(lua_touserdata(L, 2));

    auto __out = ___self->copy(*_src);

    cppbind::type_info::make_typed(new L4::Cap<void>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");

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

int l4_cap_void_copy_2(lua_State *L)
{
  try {
    if (lua_gettop(L) != 1)
      return luaL_error(L, "function expects 1 arguments");

    using namespace L4;

    const L4::Cap<void> * __1;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    __1 = cppbind::type_info::typed_pointer_cast<const L4::Cap<void>>(lua_touserdata(L, 1));

    auto __out = new L4::Cap<void>(*__1);

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");

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

int l4_cap_void_move_2(lua_State *L)
{
  try {
    if (lua_gettop(L) != 1)
      return luaL_error(L, "function expects 1 arguments");

    using namespace L4;

    L4::Cap<void> * __1;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    __1 = cppbind::type_info::typed_pointer_cast<L4::Cap<void>>(lua_touserdata(L, 1));

    auto __out = new L4::Cap<void>(std::move(*__1));

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");

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

int l4_cap_void_new_void(lua_State *L)
{
  try {
    if (lua_gettop(L) != 1)
      return luaL_error(L, "function expects 1 arguments");

    using namespace L4;

    const L4::Cap<void> * _o;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    _o = cppbind::type_info::typed_pointer_cast<const L4::Cap<void>>(lua_touserdata(L, 1));

    auto __out = new L4::Cap<void>(*_o);

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");

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

int l4_cap_void_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<void> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<void>>(lua_touserdata(L, 1));

  auto __out = ___self->cap();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_void_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<void> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<void>>(lua_touserdata(L, 1));

  auto __out = ___self->is_valid();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_void_snd_base(lua_State *L)
{
  if (lua_gettop(L) < 1 || lua_gettop(L) > 3)
    return luaL_error(L, "function expects between 1 and 3 arguments");

  using namespace L4;

  const L4::Cap<void> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<void>>(lua_touserdata(L, 1));

  if (lua_gettop(L) < 2) goto function_call;
  luaL_checktype(L, 2, LUA_TNUMBER);
  _grant = cppbind::lua::tointegral<unsigned int>(L, 2);

  if (lua_gettop(L) < 3) goto function_call;
  luaL_checktype(L, 3, LUA_TNUMBER);
  _base = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);

  function_call:

  auto __out = ___self->snd_base(_grant, _base);

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_void_invalidate(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<void> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<void>>(lua_touserdata(L, 1));

  ___self->invalidate();

  return 0;
}

int l4_cap_factory_new_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<L4::Cap_base::Cap_type>(cppbind::lua::tointegral<unsigned long>(L, 1));

  auto __out = new L4::Cap<L4::Factory>(_cap);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7FactoryEEE");

  return 1;
}

int l4_cap_factory_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  l4_default_caps_t _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<l4_default_caps_t>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4::Factory>(_cap);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7FactoryEEE");

  return 1;
}

int l4_cap_factory_new_3(lua_State *L)
{
  if (lua_gettop(L) < 0 || lua_gettop(L) > 1)
    return luaL_error(L, "function expects between 0 and 1 arguments");

  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  if (lua_gettop(L) < 1) goto function_call;
  luaL_checktype(L, 1, LUA_TNUMBER);
  _idx = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);

  function_call:

  auto __out = new L4::Cap<L4::Factory>(_idx);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7FactoryEEE");

  return 1;
}

int l4_cap_factory_new_4(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::No_init_type __1;

  luaL_checktype(L, 1, LUA_TNUMBER);
  __1 = static_cast<L4::Cap_base::No_init_type>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4::Factory>(__1);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7FactoryEEE");

  return 1;
}

int l4_cap_factory_move(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;

    const L4::Cap<L4::Factory> * ___self;
    const L4::Cap<L4::Factory> * _src;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Factory>>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Factory>>(lua_touserdata(L, 2));

    auto __out = ___self->move(*_src);

    cppbind::type_info::make_typed(new L4::Cap<L4::Factory>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7FactoryEEE");

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

int l4_cap_factory_copy(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;

    const L4::Cap<L4::Factory> * ___self;
    const L4::Cap<L4::Factory> * _src;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Factory>>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Factory>>(lua_touserdata(L, 2));

    auto __out = ___self->copy(*_src);

    cppbind::type_info::make_typed(new L4::Cap<L4::Factory>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7FactoryEEE");

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

int l4_cap_factory_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Factory> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Factory>>(lua_touserdata(L, 1));

  auto __out = ___self->cap();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_factory_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Factory> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Factory>>(lua_touserdata(L, 1));

  auto __out = ___self->is_valid();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_factory_snd_base(lua_State *L)
{
  if (lua_gettop(L) < 1 || lua_gettop(L) > 3)
    return luaL_error(L, "function expects between 1 and 3 arguments");

  using namespace L4;

  const L4::Cap<L4::Factory> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Factory>>(lua_touserdata(L, 1));

  if (lua_gettop(L) < 2) goto function_call;
  luaL_checktype(L, 2, LUA_TNUMBER);
  _grant = cppbind::lua::tointegral<unsigned int>(L, 2);

  if (lua_gettop(L) < 3) goto function_call;
  luaL_checktype(L, 3, LUA_TNUMBER);
  _base = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);

  function_call:

  auto __out = ___self->snd_base(_grant, _base);

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_factory_invalidate(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<L4::Factory> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<L4::Factory>>(lua_touserdata(L, 1));

  ___self->invalidate();

  return 0;
}

int l4_cap_thread_new_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<L4::Cap_base::Cap_type>(cppbind::lua::tointegral<unsigned long>(L, 1));

  auto __out = new L4::Cap<L4::Thread>(_cap);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_6ThreadEEE");

  return 1;
}

int l4_cap_thread_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  l4_default_caps_t _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<l4_default_caps_t>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4::Thread>(_cap);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_6ThreadEEE");

  return 1;
}

int l4_cap_thread_new_3(lua_State *L)
{
  if (lua_gettop(L) < 0 || lua_gettop(L) > 1)
    return luaL_error(L, "function expects between 0 and 1 arguments");

  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  if (lua_gettop(L) < 1) goto function_call;
  luaL_checktype(L, 1, LUA_TNUMBER);
  _idx = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);

  function_call:

  auto __out = new L4::Cap<L4::Thread>(_idx);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_6ThreadEEE");

  return 1;
}

int l4_cap_thread_new_4(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::No_init_type __1;

  luaL_checktype(L, 1, LUA_TNUMBER);
  __1 = static_cast<L4::Cap_base::No_init_type>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4::Thread>(__1);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_6ThreadEEE");

  return 1;
}

int l4_cap_thread_move(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;

    const L4::Cap<L4::Thread> * ___self;
    const L4::Cap<L4::Thread> * _src;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Thread>>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Thread>>(lua_touserdata(L, 2));

    auto __out = ___self->move(*_src);

    cppbind::type_info::make_typed(new L4::Cap<L4::Thread>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_6ThreadEEE");

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

int l4_cap_thread_copy(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;

    const L4::Cap<L4::Thread> * ___self;
    const L4::Cap<L4::Thread> * _src;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Thread>>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Thread>>(lua_touserdata(L, 2));

    auto __out = ___self->copy(*_src);

    cppbind::type_info::make_typed(new L4::Cap<L4::Thread>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_6ThreadEEE");

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

int l4_cap_thread_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Thread> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Thread>>(lua_touserdata(L, 1));

  auto __out = ___self->cap();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_thread_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Thread> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Thread>>(lua_touserdata(L, 1));

  auto __out = ___self->is_valid();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_thread_snd_base(lua_State *L)
{
  if (lua_gettop(L) < 1 || lua_gettop(L) > 3)
    return luaL_error(L, "function expects between 1 and 3 arguments");

  using namespace L4;

  const L4::Cap<L4::Thread> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Thread>>(lua_touserdata(L, 1));

  if (lua_gettop(L) < 2) goto function_call;
  luaL_checktype(L, 2, LUA_TNUMBER);
  _grant = cppbind::lua::tointegral<unsigned int>(L, 2);

  if (lua_gettop(L) < 3) goto function_call;
  luaL_checktype(L, 3, LUA_TNUMBER);
  _base = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);

  function_call:

  auto __out = ___self->snd_base(_grant, _base);

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_thread_invalidate(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<L4::Thread> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<L4::Thread>>(lua_touserdata(L, 1));

  ___self->invalidate();

  return 0;
}

int l4_cap_irq_new_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<L4::Cap_base::Cap_type>(cppbind::lua::tointegral<unsigned long>(L, 1));

  auto __out = new L4::Cap<L4::Irq>(_cap);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_3IrqEEE");

  return 1;
}

int l4_cap_irq_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  l4_default_caps_t _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<l4_default_caps_t>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4::Irq>(_cap);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_3IrqEEE");

  return 1;
}

int l4_cap_irq_new_3(lua_State *L)
{
  if (lua_gettop(L) < 0 || lua_gettop(L) > 1)
    return luaL_error(L, "function expects between 0 and 1 arguments");

  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  if (lua_gettop(L) < 1) goto function_call;
  luaL_checktype(L, 1, LUA_TNUMBER);
  _idx = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);

  function_call:

  auto __out = new L4::Cap<L4::Irq>(_idx);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_3IrqEEE");

  return 1;
}

int l4_cap_irq_new_4(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::No_init_type __1;

  luaL_checktype(L, 1, LUA_TNUMBER);
  __1 = static_cast<L4::Cap_base::No_init_type>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4::Irq>(__1);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_3IrqEEE");

  return 1;
}

int l4_cap_irq_move(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;

    const L4::Cap<L4::Irq> * ___self;
    const L4::Cap<L4::Irq> * _src;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Irq>>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Irq>>(lua_touserdata(L, 2));

    auto __out = ___self->move(*_src);

    cppbind::type_info::make_typed(new L4::Cap<L4::Irq>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_3IrqEEE");

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

int l4_cap_irq_copy(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;

    const L4::Cap<L4::Irq> * ___self;
    const L4::Cap<L4::Irq> * _src;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Irq>>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Irq>>(lua_touserdata(L, 2));

    auto __out = ___self->copy(*_src);

    cppbind::type_info::make_typed(new L4::Cap<L4::Irq>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_3IrqEEE");

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

int l4_cap_irq_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Irq> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Irq>>(lua_touserdata(L, 1));

  auto __out = ___self->cap();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_irq_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Irq> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Irq>>(lua_touserdata(L, 1));

  auto __out = ___self->is_valid();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_irq_snd_base(lua_State *L)
{
  if (lua_gettop(L) < 1 || lua_gettop(L) > 3)
    return luaL_error(L, "function expects between 1 and 3 arguments");

  using namespace L4;

  const L4::Cap<L4::Irq> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Irq>>(lua_touserdata(L, 1));

  if (lua_gettop(L) < 2) goto function_call;
  luaL_checktype(L, 2, LUA_TNUMBER);
  _grant = cppbind::lua::tointegral<unsigned int>(L, 2);

  if (lua_gettop(L) < 3) goto function_call;
  luaL_checktype(L, 3, LUA_TNUMBER);
  _base = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);

  function_call:

  auto __out = ___self->snd_base(_grant, _base);

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_irq_invalidate(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<L4::Irq> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<L4::Irq>>(lua_touserdata(L, 1));

  ___self->invalidate();

  return 0;
}

int l4_cap_vm_new_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<L4::Cap_base::Cap_type>(cppbind::lua::tointegral<unsigned long>(L, 1));

  auto __out = new L4::Cap<L4::Vm>(_cap);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_2VmEEE");

  return 1;
}

int l4_cap_vm_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  l4_default_caps_t _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<l4_default_caps_t>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4::Vm>(_cap);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_2VmEEE");

  return 1;
}

int l4_cap_vm_new_3(lua_State *L)
{
  if (lua_gettop(L) < 0 || lua_gettop(L) > 1)
    return luaL_error(L, "function expects between 0 and 1 arguments");

  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  if (lua_gettop(L) < 1) goto function_call;
  luaL_checktype(L, 1, LUA_TNUMBER);
  _idx = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);

  function_call:

  auto __out = new L4::Cap<L4::Vm>(_idx);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_2VmEEE");

  return 1;
}

int l4_cap_vm_new_4(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::No_init_type __1;

  luaL_checktype(L, 1, LUA_TNUMBER);
  __1 = static_cast<L4::Cap_base::No_init_type>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4::Vm>(__1);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_2VmEEE");

  return 1;
}

int l4_cap_vm_move(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;

    const L4::Cap<L4::Vm> * ___self;
    const L4::Cap<L4::Vm> * _src;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Vm>>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Vm>>(lua_touserdata(L, 2));

    auto __out = ___self->move(*_src);

    cppbind::type_info::make_typed(new L4::Cap<L4::Vm>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_2VmEEE");

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

int l4_cap_vm_copy(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;

    const L4::Cap<L4::Vm> * ___self;
    const L4::Cap<L4::Vm> * _src;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Vm>>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Vm>>(lua_touserdata(L, 2));

    auto __out = ___self->copy(*_src);

    cppbind::type_info::make_typed(new L4::Cap<L4::Vm>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_2VmEEE");

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

int l4_cap_vm_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Vm> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Vm>>(lua_touserdata(L, 1));

  auto __out = ___self->cap();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_vm_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Vm> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Vm>>(lua_touserdata(L, 1));

  auto __out = ___self->is_valid();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_vm_snd_base(lua_State *L)
{
  if (lua_gettop(L) < 1 || lua_gettop(L) > 3)
    return luaL_error(L, "function expects between 1 and 3 arguments");

  using namespace L4;

  const L4::Cap<L4::Vm> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Vm>>(lua_touserdata(L, 1));

  if (lua_gettop(L) < 2) goto function_call;
  luaL_checktype(L, 2, LUA_TNUMBER);
  _grant = cppbind::lua::tointegral<unsigned int>(L, 2);

  if (lua_gettop(L) < 3) goto function_call;
  luaL_checktype(L, 3, LUA_TNUMBER);
  _base = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);

  function_call:

  auto __out = ___self->snd_base(_grant, _base);

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_vm_invalidate(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<L4::Vm> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<L4::Vm>>(lua_touserdata(L, 1));

  ___self->invalidate();

  return 0;
}

int l4_cap_dataspace_new_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<L4::Cap_base::Cap_type>(cppbind::lua::tointegral<unsigned long>(L, 1));

  auto __out = new L4::Cap<L4Re::Dataspace>(_cap);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9DataspaceEEE");

  return 1;
}

int l4_cap_dataspace_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  l4_default_caps_t _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<l4_default_caps_t>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4Re::Dataspace>(_cap);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9DataspaceEEE");

  return 1;
}

int l4_cap_dataspace_new_3(lua_State *L)
{
  if (lua_gettop(L) < 0 || lua_gettop(L) > 1)
    return luaL_error(L, "function expects between 0 and 1 arguments");

  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  if (lua_gettop(L) < 1) goto function_call;
  luaL_checktype(L, 1, LUA_TNUMBER);
  _idx = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);

  function_call:

  auto __out = new L4::Cap<L4Re::Dataspace>(_idx);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9DataspaceEEE");

  return 1;
}

int l4_cap_dataspace_new_4(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::No_init_type __1;

  luaL_checktype(L, 1, LUA_TNUMBER);
  __1 = static_cast<L4::Cap_base::No_init_type>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4Re::Dataspace>(__1);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9DataspaceEEE");

  return 1;
}

int l4_cap_dataspace_move_1(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;

    const L4::Cap<L4Re::Dataspace> * ___self;
    const L4::Cap<L4Re::Dataspace> * _src;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Dataspace>>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Dataspace>>(lua_touserdata(L, 2));

    auto __out = ___self->move(*_src);

    cppbind::type_info::make_typed(new L4::Cap<L4Re::Dataspace>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9DataspaceEEE");

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

int l4_cap_dataspace_copy_1(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;

    const L4::Cap<L4Re::Dataspace> * ___self;
    const L4::Cap<L4Re::Dataspace> * _src;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Dataspace>>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Dataspace>>(lua_touserdata(L, 2));

    auto __out = ___self->copy(*_src);

    cppbind::type_info::make_typed(new L4::Cap<L4Re::Dataspace>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9DataspaceEEE");

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

int l4_cap_dataspace_access(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Dataspace>>(lua_touserdata(L, 1));

  auto __out = ___self->operator->();

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), false);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN4L4Re9DataspaceE");

  return 1;
}

int l4_cap_dataspace_copy_2(lua_State *L)
{
  try {
    if (lua_gettop(L) != 1)
      return luaL_error(L, "function expects 1 arguments");

    using namespace L4;

    const L4::Cap<L4Re::Dataspace> * __1;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    __1 = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Dataspace>>(lua_touserdata(L, 1));

    auto __out = new L4::Cap<L4Re::Dataspace>(*__1);

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9DataspaceEEE");

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

int l4_cap_dataspace_move_2(lua_State *L)
{
  try {
    if (lua_gettop(L) != 1)
      return luaL_error(L, "function expects 1 arguments");

    using namespace L4;

    L4::Cap<L4Re::Dataspace> * __1;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    __1 = cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Dataspace>>(lua_touserdata(L, 1));

    auto __out = new L4::Cap<L4Re::Dataspace>(std::move(*__1));

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9DataspaceEEE");

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

int l4_cap_dataspace_new_dataspace(lua_State *L)
{
  try {
    if (lua_gettop(L) != 1)
      return luaL_error(L, "function expects 1 arguments");

    using namespace L4;

    const L4::Cap<L4Re::Dataspace> * _o;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    _o = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Dataspace>>(lua_touserdata(L, 1));

    auto __out = new L4::Cap<L4Re::Dataspace>(*_o);

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9DataspaceEEE");

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

int l4_cap_dataspace_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Dataspace>>(lua_touserdata(L, 1));

  auto __out = ___self->cap();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_dataspace_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Dataspace>>(lua_touserdata(L, 1));

  auto __out = ___self->is_valid();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_dataspace_snd_base(lua_State *L)
{
  if (lua_gettop(L) < 1 || lua_gettop(L) > 3)
    return luaL_error(L, "function expects between 1 and 3 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Dataspace>>(lua_touserdata(L, 1));

  if (lua_gettop(L) < 2) goto function_call;
  luaL_checktype(L, 2, LUA_TNUMBER);
  _grant = cppbind::lua::tointegral<unsigned int>(L, 2);

  if (lua_gettop(L) < 3) goto function_call;
  luaL_checktype(L, 3, LUA_TNUMBER);
  _base = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);

  function_call:

  auto __out = ___self->snd_base(_grant, _base);

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_dataspace_invalidate(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<L4Re::Dataspace> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Dataspace>>(lua_touserdata(L, 1));

  ___self->invalidate();

  return 0;
}

int l4_cap_mem_alloc_new_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<L4::Cap_base::Cap_type>(cppbind::lua::tointegral<unsigned long>(L, 1));

  auto __out = new L4::Cap<L4Re::Mem_alloc>(_cap);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9Mem_allocEEE");

  return 1;
}

int l4_cap_mem_alloc_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  l4_default_caps_t _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<l4_default_caps_t>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4Re::Mem_alloc>(_cap);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9Mem_allocEEE");

  return 1;
}

int l4_cap_mem_alloc_new_3(lua_State *L)
{
  if (lua_gettop(L) < 0 || lua_gettop(L) > 1)
    return luaL_error(L, "function expects between 0 and 1 arguments");

  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  if (lua_gettop(L) < 1) goto function_call;
  luaL_checktype(L, 1, LUA_TNUMBER);
  _idx = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);

  function_call:

  auto __out = new L4::Cap<L4Re::Mem_alloc>(_idx);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9Mem_allocEEE");

  return 1;
}

int l4_cap_mem_alloc_new_4(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::No_init_type __1;

  luaL_checktype(L, 1, LUA_TNUMBER);
  __1 = static_cast<L4::Cap_base::No_init_type>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4Re::Mem_alloc>(__1);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9Mem_allocEEE");

  return 1;
}

int l4_cap_mem_alloc_move_1(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;

    const L4::Cap<L4Re::Mem_alloc> * ___self;
    const L4::Cap<L4Re::Mem_alloc> * _src;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Mem_alloc>>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Mem_alloc>>(lua_touserdata(L, 2));

    auto __out = ___self->move(*_src);

    cppbind::type_info::make_typed(new L4::Cap<L4Re::Mem_alloc>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9Mem_allocEEE");

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

int l4_cap_mem_alloc_copy_1(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;

    const L4::Cap<L4Re::Mem_alloc> * ___self;
    const L4::Cap<L4Re::Mem_alloc> * _src;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Mem_alloc>>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Mem_alloc>>(lua_touserdata(L, 2));

    auto __out = ___self->copy(*_src);

    cppbind::type_info::make_typed(new L4::Cap<L4Re::Mem_alloc>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9Mem_allocEEE");

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

int l4_cap_mem_alloc_access(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Mem_alloc>>(lua_touserdata(L, 1));

  auto __out = ___self->operator->();

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), false);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN4L4Re9Mem_allocE");

  return 1;
}

int l4_cap_mem_alloc_copy_2(lua_State *L)
{
  try {
    if (lua_gettop(L) != 1)
      return luaL_error(L, "function expects 1 arguments");

    using namespace L4;

    const L4::Cap<L4Re::Mem_alloc> * __1;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    __1 = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Mem_alloc>>(lua_touserdata(L, 1));

    auto __out = new L4::Cap<L4Re::Mem_alloc>(*__1);

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9Mem_allocEEE");

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

int l4_cap_mem_alloc_move_2(lua_State *L)
{
  try {
    if (lua_gettop(L) != 1)
      return luaL_error(L, "function expects 1 arguments");

    using namespace L4;

    L4::Cap<L4Re::Mem_alloc> * __1;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    __1 = cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Mem_alloc>>(lua_touserdata(L, 1));

    auto __out = new L4::Cap<L4Re::Mem_alloc>(std::move(*__1));

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9Mem_allocEEE");

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

int l4_cap_mem_alloc_new_mem_alloc(lua_State *L)
{
  try {
    if (lua_gettop(L) != 1)
      return luaL_error(L, "function expects 1 arguments");

    using namespace L4;

    const L4::Cap<L4Re::Mem_alloc> * _o;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    _o = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Mem_alloc>>(lua_touserdata(L, 1));

    auto __out = new L4::Cap<L4Re::Mem_alloc>(*_o);

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9Mem_allocEEE");

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

int l4_cap_mem_alloc_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Mem_alloc>>(lua_touserdata(L, 1));

  auto __out = ___self->cap();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_mem_alloc_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Mem_alloc>>(lua_touserdata(L, 1));

  auto __out = ___self->is_valid();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_mem_alloc_snd_base(lua_State *L)
{
  if (lua_gettop(L) < 1 || lua_gettop(L) > 3)
    return luaL_error(L, "function expects between 1 and 3 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Mem_alloc>>(lua_touserdata(L, 1));

  if (lua_gettop(L) < 2) goto function_call;
  luaL_checktype(L, 2, LUA_TNUMBER);
  _grant = cppbind::lua::tointegral<unsigned int>(L, 2);

  if (lua_gettop(L) < 3) goto function_call;
  luaL_checktype(L, 3, LUA_TNUMBER);
  _base = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);

  function_call:

  auto __out = ___self->snd_base(_grant, _base);

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_mem_alloc_invalidate(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<L4Re::Mem_alloc> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Mem_alloc>>(lua_touserdata(L, 1));

  ___self->invalidate();

  return 0;
}

int l4_cap_rm_new_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<L4::Cap_base::Cap_type>(cppbind::lua::tointegral<unsigned long>(L, 1));

  auto __out = new L4::Cap<L4Re::Rm>(_cap);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re2RmEEE");

  return 1;
}

int l4_cap_rm_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  l4_default_caps_t _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<l4_default_caps_t>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4Re::Rm>(_cap);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re2RmEEE");

  return 1;
}

int l4_cap_rm_new_3(lua_State *L)
{
  if (lua_gettop(L) < 0 || lua_gettop(L) > 1)
    return luaL_error(L, "function expects between 0 and 1 arguments");

  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  if (lua_gettop(L) < 1) goto function_call;
  luaL_checktype(L, 1, LUA_TNUMBER);
  _idx = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);

  function_call:

  auto __out = new L4::Cap<L4Re::Rm>(_idx);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re2RmEEE");

  return 1;
}

int l4_cap_rm_new_4(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::No_init_type __1;

  luaL_checktype(L, 1, LUA_TNUMBER);
  __1 = static_cast<L4::Cap_base::No_init_type>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4Re::Rm>(__1);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re2RmEEE");

  return 1;
}

int l4_cap_rm_move_1(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;

    const L4::Cap<L4Re::Rm> * ___self;
    const L4::Cap<L4Re::Rm> * _src;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Rm>>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Rm>>(lua_touserdata(L, 2));

    auto __out = ___self->move(*_src);

    cppbind::type_info::make_typed(new L4::Cap<L4Re::Rm>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re2RmEEE");

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

int l4_cap_rm_copy_1(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;

    const L4::Cap<L4Re::Rm> * ___self;
    const L4::Cap<L4Re::Rm> * _src;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Rm>>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Rm>>(lua_touserdata(L, 2));

    auto __out = ___self->copy(*_src);

    cppbind::type_info::make_typed(new L4::Cap<L4Re::Rm>(__out), lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re2RmEEE");

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

int l4_cap_rm_access(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Rm> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Rm>>(lua_touserdata(L, 1));

  auto __out = ___self->operator->();

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), false);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN4L4Re2RmE");

  return 1;
}

int l4_cap_rm_copy_2(lua_State *L)
{
  try {
    if (lua_gettop(L) != 1)
      return luaL_error(L, "function expects 1 arguments");

    using namespace L4;

    const L4::Cap<L4Re::Rm> * __1;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    __1 = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Rm>>(lua_touserdata(L, 1));

    auto __out = new L4::Cap<L4Re::Rm>(*__1);

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re2RmEEE");

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

int l4_cap_rm_move_2(lua_State *L)
{
  try {
    if (lua_gettop(L) != 1)
      return luaL_error(L, "function expects 1 arguments");

    using namespace L4;

    L4::Cap<L4Re::Rm> * __1;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    __1 = cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Rm>>(lua_touserdata(L, 1));

    auto __out = new L4::Cap<L4Re::Rm>(std::move(*__1));

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re2RmEEE");

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

int l4_cap_rm_copy_assign(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;

    L4::Cap<L4Re::Rm> * ___self;
    const L4::Cap<L4Re::Rm> * __1;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Rm>>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    __1 = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Rm>>(lua_touserdata(L, 2));

    auto __out = &___self->operator=(*__1);

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), false);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re2RmEEE");

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

int l4_cap_rm_move_assign(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;

    L4::Cap<L4Re::Rm> * ___self;
    L4::Cap<L4Re::Rm> * __1;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Rm>>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    __1 = cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Rm>>(lua_touserdata(L, 2));

    auto __out = &___self->operator=(std::move(*__1));

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), false);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re2RmEEE");

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

int l4_cap_rm_new_rm(lua_State *L)
{
  try {
    if (lua_gettop(L) != 1)
      return luaL_error(L, "function expects 1 arguments");

    using namespace L4;

    const L4::Cap<L4Re::Rm> * _o;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    _o = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Rm>>(lua_touserdata(L, 1));

    auto __out = new L4::Cap<L4Re::Rm>(*_o);

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
    cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re2RmEEE");

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

int l4_cap_rm_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Rm> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Rm>>(lua_touserdata(L, 1));

  auto __out = ___self->cap();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_rm_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Rm> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Rm>>(lua_touserdata(L, 1));

  auto __out = ___self->is_valid();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_rm_snd_base(lua_State *L)
{
  if (lua_gettop(L) < 1 || lua_gettop(L) > 3)
    return luaL_error(L, "function expects between 1 and 3 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Rm> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Rm>>(lua_touserdata(L, 1));

  if (lua_gettop(L) < 2) goto function_call;
  luaL_checktype(L, 2, LUA_TNUMBER);
  _grant = cppbind::lua::tointegral<unsigned int>(L, 2);

  if (lua_gettop(L) < 3) goto function_call;
  luaL_checktype(L, 3, LUA_TNUMBER);
  _base = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);

  function_call:

  auto __out = ___self->snd_base(_grant, _base);

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_rm_invalidate(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<L4Re::Rm> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Rm>>(lua_touserdata(L, 1));

  ___self->invalidate();

  return 0;
}

int l4_cap_dummy_kobject_new_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<L4::Cap_base::Cap_type>(cppbind::lua::tointegral<unsigned long>(L, 1));

  auto __out = new L4::Cap<Dummy_kobject>(_cap);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapI13Dummy_kobjectEE");

  return 1;
}

int l4_cap_dummy_kobject_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  l4_default_caps_t _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<l4_default_caps_t>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<Dummy_kobject>(_cap);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapI13Dummy_kobjectEE");

  return 1;
}

int l4_cap_dummy_kobject_new_3(lua_State *L)
{
  if (lua_gettop(L) < 0 || lua_gettop(L) > 1)
    return luaL_error(L, "function expects between 0 and 1 arguments");

  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  if (lua_gettop(L) < 1) goto function_call;
  luaL_checktype(L, 1, LUA_TNUMBER);
  _idx = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);

  function_call:

  auto __out = new L4::Cap<Dummy_kobject>(_idx);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapI13Dummy_kobjectEE");

  return 1;
}

int l4_cap_dummy_kobject_new_4(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::No_init_type __1;

  luaL_checktype(L, 1, LUA_TNUMBER);
  __1 = static_cast<L4::Cap_base::No_init_type>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<Dummy_kobject>(__1);

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapI13Dummy_kobjectEE");

  return 1;
}

int l4_cap_dummy_kobject_move_1(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;

    const L4::Cap<Dummy_kobject> * ___self;
    const L4::Cap<Dummy_kobject> * _src;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<Dummy_kobject>>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<Dummy_kobject>>(lua_touserdata(L, 2));

    auto __out = ___self->move(*_src);

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

int l4_cap_dummy_kobject_copy_1(lua_State *L)
{
  try {
    if (lua_gettop(L) != 2)
      return luaL_error(L, "function expects 2 arguments");

    using namespace L4;

    const L4::Cap<Dummy_kobject> * ___self;
    const L4::Cap<Dummy_kobject> * _src;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<Dummy_kobject>>(lua_touserdata(L, 1));

    luaL_checktype(L, 2, LUA_TUSERDATA);
    _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<Dummy_kobject>>(lua_touserdata(L, 2));

    auto __out = ___self->copy(*_src);

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

int l4_cap_dummy_kobject_access(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<Dummy_kobject> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<Dummy_kobject>>(lua_touserdata(L, 1));

  auto __out = ___self->operator->();

  cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), false);
  cppbind::lua::setmetatable(L, "METATABLE__ZTS13Dummy_kobject");

  return 1;
}

int l4_cap_dummy_kobject_copy_2(lua_State *L)
{
  try {
    if (lua_gettop(L) != 1)
      return luaL_error(L, "function expects 1 arguments");

    using namespace L4;

    const L4::Cap<Dummy_kobject> * __1;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    __1 = cppbind::type_info::typed_pointer_cast<const L4::Cap<Dummy_kobject>>(lua_touserdata(L, 1));

    auto __out = new L4::Cap<Dummy_kobject>(*__1);

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
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

int l4_cap_dummy_kobject_move_2(lua_State *L)
{
  try {
    if (lua_gettop(L) != 1)
      return luaL_error(L, "function expects 1 arguments");

    using namespace L4;

    L4::Cap<Dummy_kobject> * __1;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    __1 = cppbind::type_info::typed_pointer_cast<L4::Cap<Dummy_kobject>>(lua_touserdata(L, 1));

    auto __out = new L4::Cap<Dummy_kobject>(std::move(*__1));

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
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

int l4_cap_dummy_kobject_new_dummy_kobject(lua_State *L)
{
  try {
    if (lua_gettop(L) != 1)
      return luaL_error(L, "function expects 1 arguments");

    using namespace L4;

    const L4::Cap<Dummy_kobject> * _o;

    luaL_checktype(L, 1, LUA_TUSERDATA);
    _o = cppbind::type_info::typed_pointer_cast<const L4::Cap<Dummy_kobject>>(lua_touserdata(L, 1));

    auto __out = new L4::Cap<Dummy_kobject>(*_o);

    cppbind::type_info::make_typed(__out, lua_newuserdata(L, sizeof(cppbind::type_info::typed_ptr)), true);
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

int l4_cap_dummy_kobject_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<Dummy_kobject> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<Dummy_kobject>>(lua_touserdata(L, 1));

  auto __out = ___self->cap();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_dummy_kobject_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<Dummy_kobject> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<Dummy_kobject>>(lua_touserdata(L, 1));

  auto __out = ___self->is_valid();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_dummy_kobject_snd_base(lua_State *L)
{
  if (lua_gettop(L) < 1 || lua_gettop(L) > 3)
    return luaL_error(L, "function expects between 1 and 3 arguments");

  using namespace L4;

  const L4::Cap<Dummy_kobject> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<Dummy_kobject>>(lua_touserdata(L, 1));

  if (lua_gettop(L) < 2) goto function_call;
  luaL_checktype(L, 2, LUA_TNUMBER);
  _grant = cppbind::lua::tointegral<unsigned int>(L, 2);

  if (lua_gettop(L) < 3) goto function_call;
  luaL_checktype(L, 3, LUA_TNUMBER);
  _base = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);

  function_call:

  auto __out = ___self->snd_base(_grant, _base);

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_dummy_kobject_invalidate(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<Dummy_kobject> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<Dummy_kobject>>(lua_touserdata(L, 1));

  ___self->invalidate();

  return 0;
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

  lua_createtable(L, 0, 7);

  {
    static luaL_Reg const _functions[] = {
      {"new_1", l4_cap_task_new_1},
      {"new_2", l4_cap_task_new_2},
      {"new_3", l4_cap_task_new_3},
      {"new_4", l4_cap_task_new_4},
      {"copy_2", l4_cap_task_copy_2},
      {"move_2", l4_cap_task_move_2},
      {"new_task", l4_cap_task_new_task},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "CapTask");

  lua_createtable(L, 0, 4);

  {
    static luaL_Reg const _functions[] = {
      {"new_1", l4_cap_kobject_new_1},
      {"new_2", l4_cap_kobject_new_2},
      {"new_3", l4_cap_kobject_new_3},
      {"new_4", l4_cap_kobject_new_4},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "CapKobject");

  lua_createtable(L, 0, 4);

  {
    static luaL_Reg const _functions[] = {
      {"new_1", l4_cap_meta_new_1},
      {"new_2", l4_cap_meta_new_2},
      {"new_3", l4_cap_meta_new_3},
      {"new_4", l4_cap_meta_new_4},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "CapMeta");

  lua_createtable(L, 0, 8);

  {
    static luaL_Reg const _functions[] = {
      {"new_1", l4_cap_void_new_1},
      {"new_2", l4_cap_void_new_2},
      {"new_3", l4_cap_void_new_3},
      {"new_4", l4_cap_void_new_4},
      {"new_5", l4_cap_void_new_5},
      {"copy_2", l4_cap_void_copy_2},
      {"move_2", l4_cap_void_move_2},
      {"new_void", l4_cap_void_new_void},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "CapVoid");

  lua_createtable(L, 0, 4);

  {
    static luaL_Reg const _functions[] = {
      {"new_1", l4_cap_factory_new_1},
      {"new_2", l4_cap_factory_new_2},
      {"new_3", l4_cap_factory_new_3},
      {"new_4", l4_cap_factory_new_4},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "CapFactory");

  lua_createtable(L, 0, 4);

  {
    static luaL_Reg const _functions[] = {
      {"new_1", l4_cap_thread_new_1},
      {"new_2", l4_cap_thread_new_2},
      {"new_3", l4_cap_thread_new_3},
      {"new_4", l4_cap_thread_new_4},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "CapThread");

  lua_createtable(L, 0, 4);

  {
    static luaL_Reg const _functions[] = {
      {"new_1", l4_cap_irq_new_1},
      {"new_2", l4_cap_irq_new_2},
      {"new_3", l4_cap_irq_new_3},
      {"new_4", l4_cap_irq_new_4},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "CapIrq");

  lua_createtable(L, 0, 4);

  {
    static luaL_Reg const _functions[] = {
      {"new_1", l4_cap_vm_new_1},
      {"new_2", l4_cap_vm_new_2},
      {"new_3", l4_cap_vm_new_3},
      {"new_4", l4_cap_vm_new_4},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "CapVm");

  lua_createtable(L, 0, 7);

  {
    static luaL_Reg const _functions[] = {
      {"new_1", l4_cap_dataspace_new_1},
      {"new_2", l4_cap_dataspace_new_2},
      {"new_3", l4_cap_dataspace_new_3},
      {"new_4", l4_cap_dataspace_new_4},
      {"copy_2", l4_cap_dataspace_copy_2},
      {"move_2", l4_cap_dataspace_move_2},
      {"new_dataspace", l4_cap_dataspace_new_dataspace},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "CapDataspace");

  lua_createtable(L, 0, 7);

  {
    static luaL_Reg const _functions[] = {
      {"new_1", l4_cap_mem_alloc_new_1},
      {"new_2", l4_cap_mem_alloc_new_2},
      {"new_3", l4_cap_mem_alloc_new_3},
      {"new_4", l4_cap_mem_alloc_new_4},
      {"copy_2", l4_cap_mem_alloc_copy_2},
      {"move_2", l4_cap_mem_alloc_move_2},
      {"new_mem_alloc", l4_cap_mem_alloc_new_mem_alloc},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "CapMemAlloc");

  lua_createtable(L, 0, 7);

  {
    static luaL_Reg const _functions[] = {
      {"new_1", l4_cap_rm_new_1},
      {"new_2", l4_cap_rm_new_2},
      {"new_3", l4_cap_rm_new_3},
      {"new_4", l4_cap_rm_new_4},
      {"copy_2", l4_cap_rm_copy_2},
      {"move_2", l4_cap_rm_move_2},
      {"new_rm", l4_cap_rm_new_rm},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "CapRm");

  lua_createtable(L, 0, 7);

  {
    static luaL_Reg const _functions[] = {
      {"new_1", l4_cap_dummy_kobject_new_1},
      {"new_2", l4_cap_dummy_kobject_new_2},
      {"new_3", l4_cap_dummy_kobject_new_3},
      {"new_4", l4_cap_dummy_kobject_new_4},
      {"copy_2", l4_cap_dummy_kobject_copy_2},
      {"move_2", l4_cap_dummy_kobject_move_2},
      {"new_dummy_kobject", l4_cap_dummy_kobject_new_dummy_kobject},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "CapDummyKobject");

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

  lua_setfield(L, -2, "L4Re");

  lua_setglobal(L, "_G");
}

void _createmetatables(lua_State *L)
{
  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43CapINS_4TaskEEE",
    {
      {"move_1", l4_cap_task_move_1},
      {"copy_1", l4_cap_task_copy_1},
      {"cap", l4_cap_task_cap},
      {"is_valid", l4_cap_task_is_valid},
      {"snd_base", l4_cap_task_snd_base},
      {"invalidate", l4_cap_task_invalidate},
      {"copy", cppbind::lua::bind_copy},
      {"move", cppbind::lua::bind_move}
    });

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43CapINS_7KobjectEEE",
    {
      {"move", l4_cap_kobject_move},
      {"copy", l4_cap_kobject_copy},
      {"cap", l4_cap_kobject_cap},
      {"is_valid", l4_cap_kobject_is_valid},
      {"snd_base", l4_cap_kobject_snd_base},
      {"invalidate", l4_cap_kobject_invalidate}
    });

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43CapINS_4MetaEEE",
    {
      {"move", l4_cap_meta_move},
      {"copy", l4_cap_meta_copy},
      {"cap", l4_cap_meta_cap},
      {"is_valid", l4_cap_meta_is_valid},
      {"snd_base", l4_cap_meta_snd_base},
      {"invalidate", l4_cap_meta_invalidate}
    });

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43CapIvEE",
    {
      {"move_1", l4_cap_void_move_1},
      {"copy_1", l4_cap_void_copy_1},
      {"cap", l4_cap_void_cap},
      {"is_valid", l4_cap_void_is_valid},
      {"snd_base", l4_cap_void_snd_base},
      {"invalidate", l4_cap_void_invalidate},
      {"copy", cppbind::lua::bind_copy},
      {"move", cppbind::lua::bind_move}
    });

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43CapINS_7FactoryEEE",
    {
      {"move", l4_cap_factory_move},
      {"copy", l4_cap_factory_copy},
      {"cap", l4_cap_factory_cap},
      {"is_valid", l4_cap_factory_is_valid},
      {"snd_base", l4_cap_factory_snd_base},
      {"invalidate", l4_cap_factory_invalidate}
    });

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43CapINS_6ThreadEEE",
    {
      {"move", l4_cap_thread_move},
      {"copy", l4_cap_thread_copy},
      {"cap", l4_cap_thread_cap},
      {"is_valid", l4_cap_thread_is_valid},
      {"snd_base", l4_cap_thread_snd_base},
      {"invalidate", l4_cap_thread_invalidate}
    });

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43CapINS_3IrqEEE",
    {
      {"move", l4_cap_irq_move},
      {"copy", l4_cap_irq_copy},
      {"cap", l4_cap_irq_cap},
      {"is_valid", l4_cap_irq_is_valid},
      {"snd_base", l4_cap_irq_snd_base},
      {"invalidate", l4_cap_irq_invalidate}
    });

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43CapINS_2VmEEE",
    {
      {"move", l4_cap_vm_move},
      {"copy", l4_cap_vm_copy},
      {"cap", l4_cap_vm_cap},
      {"is_valid", l4_cap_vm_is_valid},
      {"snd_base", l4_cap_vm_snd_base},
      {"invalidate", l4_cap_vm_invalidate}
    });

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9DataspaceEEE",
    {
      {"move_1", l4_cap_dataspace_move_1},
      {"copy_1", l4_cap_dataspace_copy_1},
      {"access", l4_cap_dataspace_access},
      {"cap", l4_cap_dataspace_cap},
      {"is_valid", l4_cap_dataspace_is_valid},
      {"snd_base", l4_cap_dataspace_snd_base},
      {"invalidate", l4_cap_dataspace_invalidate},
      {"copy", cppbind::lua::bind_copy},
      {"move", cppbind::lua::bind_move}
    });

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9Mem_allocEEE",
    {
      {"move_1", l4_cap_mem_alloc_move_1},
      {"copy_1", l4_cap_mem_alloc_copy_1},
      {"access", l4_cap_mem_alloc_access},
      {"cap", l4_cap_mem_alloc_cap},
      {"is_valid", l4_cap_mem_alloc_is_valid},
      {"snd_base", l4_cap_mem_alloc_snd_base},
      {"invalidate", l4_cap_mem_alloc_invalidate},
      {"copy", cppbind::lua::bind_copy},
      {"move", cppbind::lua::bind_move}
    });

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re2RmEEE",
    {
      {"move_1", l4_cap_rm_move_1},
      {"copy_1", l4_cap_rm_copy_1},
      {"access", l4_cap_rm_access},
      {"copy_assign", l4_cap_rm_copy_assign},
      {"move_assign", l4_cap_rm_move_assign},
      {"cap", l4_cap_rm_cap},
      {"is_valid", l4_cap_rm_is_valid},
      {"snd_base", l4_cap_rm_snd_base},
      {"invalidate", l4_cap_rm_invalidate},
      {"copy", cppbind::lua::bind_copy},
      {"move", cppbind::lua::bind_move}
    });

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43CapI13Dummy_kobjectEE",
    {
      {"move_1", l4_cap_dummy_kobject_move_1},
      {"copy_1", l4_cap_dummy_kobject_copy_1},
      {"access", l4_cap_dummy_kobject_access},
      {"cap", l4_cap_dummy_kobject_cap},
      {"is_valid", l4_cap_dummy_kobject_is_valid},
      {"snd_base", l4_cap_dummy_kobject_snd_base},
      {"invalidate", l4_cap_dummy_kobject_invalidate},
      {"copy", cppbind::lua::bind_copy},
      {"move", cppbind::lua::bind_move}
    });
}

extern "C"
{

LUALIB_API int luaopen_capability(lua_State *L)
{
  _register(L);
  _createmetatables(L);

  return 1;
}

} // extern "C"

} // namespace