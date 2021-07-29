#include <l4/re/dataspace>

namespace L4Re
{

namespace Util
{

template class Counting_cap_alloc<>;
template L4::Cap<L4Re::Dataspace> Counting_cap_alloc<>::alloc<L4Re::Dataspace>();

}

}
