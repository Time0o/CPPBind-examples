--[ NOTE: It's important to set 'cpath' here instead of 'path' because we're
--  importing shared objects.
--]
package.cpath = '/rom/?.so;' .. package.cpath

--[ NOTE: Typically, 'require' returns a table but here, each module instead
--  adds elements to global tables representing C++ namespaces. E.g.,
--  'require capability' will create a 'L4CapDataspace' element in the 'L4Re'
--  table.
--]
require 'cap_alloc'
require 'capability'
require 'counting_cap_alloc'
require 'dataspace'
require 'env'
require 'ipc_types'
require 'mem_alloc'
require 'rm'

--[ NOTE: This module implements handwritten wrapper functions around 'memcpy'
--  etc. because we can't directly access memory in Lua.
--]
local util = require 'util'

local str =
  "Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod " ..
  "tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At " ..
  "vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd " ..
  "gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum " ..
  "dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor " ..
  "invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero " ..
  "eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no " ..
  "sea takimata sanctus est Lorem ipsum dolor sit amet."

local function alloc(ma, size)
  local cap_alloc = L4Re.Util.get_cap_alloc()

  local ds = cap_alloc:alloc_dataspace()

  assert(ma:access():alloc(size, ds) == 0)

  assert(ds:access():allocate(0, size) == 0)

  return ds
end

local function reserve(rm, size)
  local start = 0

  err, start = rm:access():reserve_area(start,
                                        size,
                                        L4Re.RM_F_SEARCH_ADDR)
  assert(err == 0)

  return start
end

local function map(ds, start, flags)
  assert(ds:access():map_region(0, flags, start, start + ds:access():size()) == 0)
end

local function attach(rm, ds, flags)
  local start = 0

  err, start = rm:access():attach(start,
                                  ds:access():size(),
                                  L4Re.RM_F_SEARCH_ADDR | flags,
                                  L4.Ipc.CapDataspace.new_1(ds))
  assert(err == 0)

  return start
end

-- environment
local env = L4Re.Env.env()

local ma = env:mem_alloc_1()
local rm = env:rm_1()

-- create dataspace
local ds = alloc(ma, #str)

local ds_size = ds:access():size()
assert(ds_size == #str)

local ds_flags = ds:access():flags()
local ds_rights = ds_flags:fpage_rights()
assert(ds_rights == L4Re.DATASPACE_F_RWX)

-- map dataspace
local ds_start = reserve(rm, ds_size)

map(ds, ds_start, L4Re.DATASPACE_F_RW)

util.strcpy(ds_start, str)
assert(util.strcmp(ds_start, str) == 0)

-- clear dataspace
ds:access():clear(0, ds_size)

-- copy in another dataspace
local ds_copy_in = alloc(ma, #str)

local ds_copy_in_start = attach(rm, ds_copy_in, L4Re.RM_F_RW)
util.strcpy(ds_copy_in_start, str)

ds:access():copy_in(0, L4.Ipc.CapDataspace.new_1(ds_copy_in), 0, ds_size)
assert(util.strcmp(ds_start, str) == 0)

print('Lua program: success')
