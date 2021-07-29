mod ipc_types_c {
  #![allow(unused_imports)]
  use super::*;

  #[link(name="ipc_types_c")]
  extern "C" {
      pub fn l4_ipc_cap_dataspace_new_1(cap: *const L4CapDataspace) -> L4IpcCapDataspace;
      pub fn l4_ipc_cap_dataspace_new_2() -> L4IpcCapDataspace;
      pub fn l4_ipc_cap_dataspace_new_3(cap: *const L4CapDataspace, rights: c_uchar) -> L4IpcCapDataspace;
      pub fn l4_ipc_cap_dataspace_from_ci(c: c_ulong) -> L4IpcCapDataspace;
      pub fn l4_ipc_cap_dataspace_cap(__self: *const L4IpcCapDataspace) -> L4CapDataspace;
      pub fn l4_ipc_cap_dataspace_rights(__self: *const L4IpcCapDataspace) -> c_uint;
      pub fn l4_ipc_cap_dataspace_is_valid(__self: *const L4IpcCapDataspace) -> c_int;
      pub fn l4_ipc_cap_dataspace_copy(_1: *const L4IpcCapDataspace) -> L4IpcCapDataspace;
      pub fn l4_ipc_cap_dataspace_move(_1: *mut L4IpcCapDataspace) -> L4IpcCapDataspace;
      pub fn l4_ipc_cap_dataspace_delete(__self: *const L4IpcCapDataspace);
      pub fn l4_ipc_cap_dataspace_new_dataspace(o: *const L4IpcCapDataspace) -> L4IpcCapDataspace;
  }
}

#[repr(C)]
union L4IpcCapDataspaceUnion {
    mem: [c_char; 8],
    ptr: *mut c_void,
}

#[repr(C)]
pub struct L4IpcCapDataspace {
    obj : L4IpcCapDataspaceUnion,

    is_const: c_char,
    is_owning: c_char,
}

impl L4IpcCapDataspace {
    pub unsafe fn new_1<'_0>(cap: &'_0 L4CapDataspace) -> L4IpcCapDataspace {
        let _cap: *const L4CapDataspace;

        _cap = cap as *const L4CapDataspace;

        let __ret = ipc_types_c::l4_ipc_cap_dataspace_new_1(_cap);

        __ret
    }

    pub unsafe fn new_2() -> L4IpcCapDataspace {
        let __ret = ipc_types_c::l4_ipc_cap_dataspace_new_2();

        __ret
    }

    pub unsafe fn new_3<'_0>(cap: &'_0 L4CapDataspace, rights: c_uchar) -> L4IpcCapDataspace {
        let _cap: *const L4CapDataspace;
        let _rights: c_uchar;

        _cap = cap as *const L4CapDataspace;

        _rights = rights;

        let __ret = ipc_types_c::l4_ipc_cap_dataspace_new_3(_cap, _rights);

        __ret
    }

    pub unsafe fn from_ci(c: L4CapIdxT) -> L4IpcCapDataspace {
        let _c: c_ulong;

        _c = c;

        let __ret = ipc_types_c::l4_ipc_cap_dataspace_from_ci(_c);

        __ret
    }

    pub unsafe fn cap(&self) -> L4CapDataspace {
        let ___self: *const L4IpcCapDataspace;

        ___self = self as *const L4IpcCapDataspace;

        let __ret = ipc_types_c::l4_ipc_cap_dataspace_cap(___self);

        __ret
    }

    pub unsafe fn rights(&self) -> c_uint {
        let ___self: *const L4IpcCapDataspace;

        ___self = self as *const L4IpcCapDataspace;

        let __ret = ipc_types_c::l4_ipc_cap_dataspace_rights(___self);

        __ret
    }

    pub unsafe fn is_valid(&self) -> bool {
        let ___self: *const L4IpcCapDataspace;

        ___self = self as *const L4IpcCapDataspace;

        let __ret = ipc_types_c::l4_ipc_cap_dataspace_is_valid(___self) != 0;

        __ret
    }

    pub unsafe fn new_dataspace<'_0>(o: &'_0 L4IpcCapDataspace) -> L4IpcCapDataspace {
        let _o: *const L4IpcCapDataspace;

        _o = o;

        let __ret = ipc_types_c::l4_ipc_cap_dataspace_new_dataspace(_o);

        __ret
    }
}

impl Clone for L4IpcCapDataspace {
    fn clone(&self) -> L4IpcCapDataspace {
        unsafe {
            ipc_types_c::l4_ipc_cap_dataspace_copy(self as *const L4IpcCapDataspace)
        }
    }
}

impl Drop for L4IpcCapDataspace {
    fn drop(&mut self) {
        unsafe {
            if self.is_owning == 0{
                return;
            }

            let ___self: *const L4IpcCapDataspace;

            ___self = self as *const L4IpcCapDataspace;

            ipc_types_c::l4_ipc_cap_dataspace_delete(___self)
        }
    }
}