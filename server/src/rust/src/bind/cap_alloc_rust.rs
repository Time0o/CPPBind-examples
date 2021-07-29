mod cap_alloc_c {
  #![allow(unused_imports)]
  use super::*;

  #[link(name="cap_alloc_c")]
  extern "C" {
      pub fn l4_re_util_get_cap_alloc() -> L4ReUtilCapAlloc;
  }
}

type L4ReUtilCapAlloc = L4ReUtilCountingCapAllocCounter;

pub unsafe fn l4_re_util_get_cap_alloc() -> L4ReUtilCapAlloc {
    let __ret = cap_alloc_c::l4_re_util_get_cap_alloc();

    __ret
}