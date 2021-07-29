#include <l4/re/dataspace>
#include <l4/re/rm>

namespace L4Re
{

template long Rm::attach<void>(void **start,
                               unsigned long,
                               Rm::Flags,
                               L4::Ipc::Cap<Dataspace>,
                               Rm::Offset offs,
                               unsigned char) const;

}
