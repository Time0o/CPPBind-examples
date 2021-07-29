mod dataspace_c {
  #![allow(unused_imports)]
  use super::*;

  #[link(name="dataspace_c")]
  extern "C" {
      pub fn l4_re_dataspace_map(__self: *const L4ReDataspace, offset: c_ulonglong, flags: c_ulong, local_addr: c_ulonglong, min_addr: c_ulonglong, max_addr: c_ulonglong) -> c_long;
      pub fn l4_re_dataspace_map_region(__self: *const L4ReDataspace, offset: c_ulonglong, flags: c_ulong, min_addr: c_ulonglong, max_addr: c_ulonglong) -> c_long;
      pub fn l4_re_dataspace_size(__self: *const L4ReDataspace) -> c_ulonglong;
      pub fn l4_re_dataspace_flags(__self: *const L4ReDataspace) -> L4ReDataspaceFlags;
      pub fn l4_re_dataspace_delete(__self: *const L4ReDataspace);
      pub fn l4_re_dataspace_clear(__self: *const L4ReDataspace, a_1: c_ulonglong, a_2: c_ulonglong) -> c_long;
      pub fn l4_re_dataspace_allocate(__self: *const L4ReDataspace, a_1: c_ulonglong, a_2: c_ulonglong) -> c_long;
      pub fn l4_re_dataspace_copy_in(__self: *const L4ReDataspace, a_1: c_ulonglong, a_2: *const L4IpcCapDataspace, a_3: c_ulonglong, a_4: c_ulonglong) -> c_long;
      pub fn l4_re_dataspace_f_new() -> L4ReDataspaceF;
      pub fn l4_re_dataspace_f_delete(__self: *const L4ReDataspaceF);
      pub fn l4_re_dataspace_flags_new_1() -> L4ReDataspaceFlags;
      pub fn l4_re_dataspace_flags_new_2(f: c_ulong) -> L4ReDataspaceFlags;
      pub fn l4_re_dataspace_flags_new_3(f: c_uint) -> L4ReDataspaceFlags;
      pub fn l4_re_dataspace_flags_r(__self: *const L4ReDataspaceFlags) -> c_int;
      pub fn l4_re_dataspace_flags_w(__self: *const L4ReDataspaceFlags) -> c_int;
      pub fn l4_re_dataspace_flags_x(__self: *const L4ReDataspaceFlags) -> c_int;
      pub fn l4_re_dataspace_flags_fpage_rights(__self: *const L4ReDataspaceFlags) -> c_ulong;
      pub fn l4_re_dataspace_flags_delete(__self: *const L4ReDataspaceFlags);
      pub fn l4_re_dataspace_flags_bw_or_assign(__self: *mut L4ReDataspaceFlags, r: c_ulong) -> L4ReDataspaceFlags;
      pub fn l4_re_dataspace_flags_bw_and_assign(__self: *mut L4ReDataspaceFlags, r: c_ulong) -> L4ReDataspaceFlags;
      pub fn l4_re_dataspace_flags_cast_bool(__self: *const L4ReDataspaceFlags) -> c_int;
      pub fn l4_re_dataspace_flags_bw_not(__self: *const L4ReDataspaceFlags) -> L4ReDataspaceFlags;
  }
}

type L4ReDataspaceMapAddr = c_ulonglong;
type L4ReDataspaceOffset = c_ulonglong;
type L4ReDataspaceSize = c_ulonglong;

pub const L4_RE_DATASPACE_F_R: c_uint = 4;

pub const L4_RE_DATASPACE_F_RO: c_uint = 4;

pub const L4_RE_DATASPACE_F_RW: c_uint = 6;

pub const L4_RE_DATASPACE_F_W: c_uint = 2;

pub const L4_RE_DATASPACE_F_X: c_uint = 1;

pub const L4_RE_DATASPACE_F_RX: c_uint = 5;

pub const L4_RE_DATASPACE_F_RWX: c_uint = 7;

pub const L4_RE_DATASPACE_F_RIGHTS_MASK: c_uint = 15;

pub const L4_RE_DATASPACE_F_NORMAL: c_uint = 0;

pub const L4_RE_DATASPACE_F_CACHEABLE: c_uint = 0;

pub const L4_RE_DATASPACE_F_BUFFERABLE: c_uint = 16;

pub const L4_RE_DATASPACE_F_UNCACHEABLE: c_uint = 32;

pub const L4_RE_DATASPACE_F_CACHING_MASK: c_uint = 48;

impl L4ReDataspace {
    pub unsafe fn map(&self, offset: L4ReDataspaceOffset, flags: c_ulong, local_addr: L4ReDataspaceMapAddr, min_addr: L4ReDataspaceMapAddr, max_addr: L4ReDataspaceMapAddr) -> c_long {
        let ___self: *const L4ReDataspace;
        let _offset: c_ulonglong;
        let _flags: c_ulong;
        let _local_addr: c_ulonglong;
        let _min_addr: c_ulonglong;
        let _max_addr: c_ulonglong;

        ___self = self as *const L4ReDataspace;

        _offset = offset;

        _flags = flags;

        _local_addr = local_addr;

        _min_addr = min_addr;

        _max_addr = max_addr;

        let __ret = dataspace_c::l4_re_dataspace_map(___self, _offset, _flags, _local_addr, _min_addr, _max_addr);

        __ret
    }

    pub unsafe fn map_region(&self, offset: L4ReDataspaceOffset, flags: c_ulong, min_addr: L4ReDataspaceMapAddr, max_addr: L4ReDataspaceMapAddr) -> c_long {
        let ___self: *const L4ReDataspace;
        let _offset: c_ulonglong;
        let _flags: c_ulong;
        let _min_addr: c_ulonglong;
        let _max_addr: c_ulonglong;

        ___self = self as *const L4ReDataspace;

        _offset = offset;

        _flags = flags;

        _min_addr = min_addr;

        _max_addr = max_addr;

        let __ret = dataspace_c::l4_re_dataspace_map_region(___self, _offset, _flags, _min_addr, _max_addr);

        __ret
    }

    pub unsafe fn size(&self) -> L4ReDataspaceSize {
        let ___self: *const L4ReDataspace;

        ___self = self as *const L4ReDataspace;

        let __ret = dataspace_c::l4_re_dataspace_size(___self);

        __ret
    }

    pub unsafe fn flags(&self) -> L4ReDataspaceFlags {
        let ___self: *const L4ReDataspace;

        ___self = self as *const L4ReDataspace;

        let __ret = dataspace_c::l4_re_dataspace_flags(___self);

        __ret
    }

    pub unsafe fn clear(&self, a_1: c_ulonglong, a_2: c_ulonglong) -> c_long {
        let ___self: *const L4ReDataspace;
        let _a_1: c_ulonglong;
        let _a_2: c_ulonglong;

        ___self = self as *const L4ReDataspace;

        _a_1 = a_1;

        _a_2 = a_2;

        let __ret = dataspace_c::l4_re_dataspace_clear(___self, _a_1, _a_2);

        __ret
    }

    pub unsafe fn allocate(&self, a_1: c_ulonglong, a_2: c_ulonglong) -> c_long {
        let ___self: *const L4ReDataspace;
        let _a_1: c_ulonglong;
        let _a_2: c_ulonglong;

        ___self = self as *const L4ReDataspace;

        _a_1 = a_1;

        _a_2 = a_2;

        let __ret = dataspace_c::l4_re_dataspace_allocate(___self, _a_1, _a_2);

        __ret
    }

    pub unsafe fn copy_in<'_0>(&self, a_1: c_ulonglong, a_2: &'_0 L4IpcCapDataspace, a_3: c_ulonglong, a_4: c_ulonglong) -> c_long {
        let ___self: *const L4ReDataspace;
        let _a_1: c_ulonglong;
        let _a_2: *const L4IpcCapDataspace;
        let _a_3: c_ulonglong;
        let _a_4: c_ulonglong;

        ___self = self as *const L4ReDataspace;

        _a_1 = a_1;

        _a_2 = a_2 as *const L4IpcCapDataspace;

        _a_3 = a_3;

        _a_4 = a_4;

        let __ret = dataspace_c::l4_re_dataspace_copy_in(___self, _a_1, _a_2, _a_3, _a_4);

        __ret
    }
}

impl Drop for L4ReDataspace {
    fn drop(&mut self) {
        unsafe {
            if self.is_owning == 0{
                return;
            }

            let ___self: *const L4ReDataspace;

            ___self = self as *const L4ReDataspace;

            dataspace_c::l4_re_dataspace_delete(___self)
        }
    }
}

#[repr(C)]
union L4ReDataspaceFUnion {
    mem: [c_char; 1],
    ptr: *mut c_void,
}

#[repr(C)]
pub struct L4ReDataspaceF {
    obj : L4ReDataspaceFUnion,

    is_const: c_char,
    is_owning: c_char,
}

impl L4ReDataspaceF {
    pub unsafe fn new() -> L4ReDataspaceF {
        let __ret = dataspace_c::l4_re_dataspace_f_new();

        __ret
    }
}

impl Drop for L4ReDataspaceF {
    fn drop(&mut self) {
        unsafe {
            if self.is_owning == 0{
                return;
            }

            let ___self: *const L4ReDataspaceF;

            ___self = self as *const L4ReDataspaceF;

            dataspace_c::l4_re_dataspace_f_delete(___self)
        }
    }
}

#[repr(C)]
union L4ReDataspaceFlagsUnion {
    mem: [c_char; 8],
    ptr: *mut c_void,
}

#[repr(C)]
pub struct L4ReDataspaceFlags {
    obj : L4ReDataspaceFlagsUnion,

    is_const: c_char,
    is_owning: c_char,
}

impl L4ReDataspaceFlags {
    pub unsafe fn new_1() -> L4ReDataspaceFlags {
        let __ret = dataspace_c::l4_re_dataspace_flags_new_1();

        __ret
    }

    pub unsafe fn new_2(f: c_ulong) -> L4ReDataspaceFlags {
        let _f: c_ulong;

        _f = f;

        let __ret = dataspace_c::l4_re_dataspace_flags_new_2(_f);

        __ret
    }

    pub unsafe fn new_3(f: c_uint) -> L4ReDataspaceFlags {
        let _f: c_uint;

        _f = f as c_uint;

        let __ret = dataspace_c::l4_re_dataspace_flags_new_3(_f);

        __ret
    }

    pub unsafe fn r(&self) -> bool {
        let ___self: *const L4ReDataspaceFlags;

        ___self = self as *const L4ReDataspaceFlags;

        let __ret = dataspace_c::l4_re_dataspace_flags_r(___self) != 0;

        __ret
    }

    pub unsafe fn w(&self) -> bool {
        let ___self: *const L4ReDataspaceFlags;

        ___self = self as *const L4ReDataspaceFlags;

        let __ret = dataspace_c::l4_re_dataspace_flags_w(___self) != 0;

        __ret
    }

    pub unsafe fn x(&self) -> bool {
        let ___self: *const L4ReDataspaceFlags;

        ___self = self as *const L4ReDataspaceFlags;

        let __ret = dataspace_c::l4_re_dataspace_flags_x(___self) != 0;

        __ret
    }

    pub unsafe fn fpage_rights(&self) -> c_ulong {
        let ___self: *const L4ReDataspaceFlags;

        ___self = self as *const L4ReDataspaceFlags;

        let __ret = dataspace_c::l4_re_dataspace_flags_fpage_rights(___self);

        __ret
    }

    pub unsafe fn bw_or_assign(&mut self, r: c_ulong) -> L4ReDataspaceFlags {
        let ___self: *mut L4ReDataspaceFlags;
        let _r: c_ulong;

        ___self = self as *mut L4ReDataspaceFlags;

        _r = r;

        let __ret = dataspace_c::l4_re_dataspace_flags_bw_or_assign(___self, _r);

        __ret
    }

    pub unsafe fn bw_and_assign(&mut self, r: c_ulong) -> L4ReDataspaceFlags {
        let ___self: *mut L4ReDataspaceFlags;
        let _r: c_ulong;

        ___self = self as *mut L4ReDataspaceFlags;

        _r = r;

        let __ret = dataspace_c::l4_re_dataspace_flags_bw_and_assign(___self, _r);

        __ret
    }

    pub unsafe fn cast_bool(&self) -> bool {
        let ___self: *const L4ReDataspaceFlags;

        ___self = self as *const L4ReDataspaceFlags;

        let __ret = dataspace_c::l4_re_dataspace_flags_cast_bool(___self) != 0;

        __ret
    }

    pub unsafe fn bw_not(&self) -> L4ReDataspaceFlags {
        let ___self: *const L4ReDataspaceFlags;

        ___self = self as *const L4ReDataspaceFlags;

        let __ret = dataspace_c::l4_re_dataspace_flags_bw_not(___self);

        __ret
    }
}

impl Drop for L4ReDataspaceFlags {
    fn drop(&mut self) {
        unsafe {
            if self.is_owning == 0{
                return;
            }

            let ___self: *const L4ReDataspaceFlags;

            ___self = self as *const L4ReDataspaceFlags;

            dataspace_c::l4_re_dataspace_flags_delete(___self)
        }
    }
}