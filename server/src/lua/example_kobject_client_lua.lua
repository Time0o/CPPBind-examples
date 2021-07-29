--[ NOTE: It's important to set 'cpath' here instead of 'path' because we're
--  importing shared objects.
--]
package.cpath = '/rom/?.so;' .. package.cpath

--[ NOTE: Typically, 'require' returns a table but here, each module instead
--  adds elements to global tables representing C++ namespaces. E.g.,
--  'require capability' will create a 'L4CapDataspace' element in the 'L4Re'
--  table.
--]
require 'capability'
require 'env'
require 'example_kobject_shared'

local server = L4Re.Env.env():get_cap_dummy_kobject_2("kobject_server")
assert(server:is_valid())

local a = 1
local b = 2

local err, res = server:access():call(a, b, 0)
assert(err == 0)

print("Lua client: result = " .. res)
