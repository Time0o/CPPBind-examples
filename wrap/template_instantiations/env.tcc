#include "example_kobject_shared.h"

namespace L4Re
{

template L4::Cap<Dummy_kobject> L4Re::Env::get_cap<Dummy_kobject>(char const *) const;

}
