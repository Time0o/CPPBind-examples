#include <l4/re/env>
#include <l4/re/util/br_manager>
#include <l4/re/util/object_registry>
#include <l4/sys/cxx/ipc_epiface>

#include "example_kobject_shared.h"

class Dummy_kobject_server : public L4::Epiface_t<Dummy_kobject_server, Dummy_kobject>
{
public:
  int op_call(Dummy_kobject::Rights, l4_int64_t a, l4_int64_t b, l4_int64_t &res)
  {
    res = a + b;
    return L4_EOK;
  }
};

int
main()
{
  static L4Re::Util::Registry_server<L4Re::Util::Br_manager_hooks> server;

  static Dummy_kobject_server obj;

  server.registry()->register_obj(&obj, "kobject_server");

  server.loop();
}
