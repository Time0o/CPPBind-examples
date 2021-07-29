mod consts_c {
  #![allow(unused_imports)]
  use super::*;

  #[link(name="consts_c")]
  extern "C" {
      pub fn get_l4_pageshift() -> c_int;
      pub fn get_l4_superpageshift() -> c_int;
  }
}

pub unsafe fn get_l4_pageshift() -> c_int {
    let __ret = consts_c::get_l4_pageshift();

    __ret
}

pub unsafe fn get_l4_superpageshift() -> c_int {
    let __ret = consts_c::get_l4_superpageshift();

    __ret
}