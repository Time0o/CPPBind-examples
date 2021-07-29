mod rm_c {
  #![allow(unused_imports)]
  use super::*;

  #[link(name="rm_c")]
  extern "C" {
      pub fn l4_re_rm_reserve_area(__self: *const L4ReRm, start: *mut c_ulong, size: c_ulong, flags: c_uint, align: c_uchar) -> c_long;
      pub fn l4_re_rm_attach(__self: *const L4ReRm, start: *mut c_ulong, size: c_ulong, flags: c_uint, mem: *const L4IpcCapDataspace, offs: c_ulonglong, align: c_uchar) -> c_long;
      pub fn l4_re_rm_detach_1(__self: *const L4ReRm, addr: c_ulong, mem: *mut L4CapDataspace, task: *const L4CapTask) -> c_int;
      pub fn l4_re_rm_detach_2(__self: *const L4ReRm, addr: *mut c_void, mem: *mut L4CapDataspace, task: *const L4CapTask) -> c_int;
      pub fn l4_re_rm_detach_3(__self: *const L4ReRm, start: c_ulong, size: c_ulong, mem: *mut L4CapDataspace, task: *const L4CapTask) -> c_int;
      pub fn l4_re_rm_find(__self: *mut L4ReRm, addr: *mut c_ulong, size: *mut c_ulong, offset: *mut c_ulonglong, flags: *mut L4ReRmFlags, m: *mut L4CapDataspace) -> c_int;
      pub fn l4_re_rm_detach_4(__self: *const L4ReRm, start: c_ulong, size: c_ulong, mem: *mut L4CapDataspace, task: *const L4CapTask, flags: c_uint) -> c_int;
      pub fn l4_re_rm_delete(__self: *const L4ReRm);
      pub fn l4_re_rm_attach_void(__self: *const L4ReRm, start: *mut *mut c_void, size: c_ulong, flags: c_uint, mem: *const L4IpcCapDataspace, offs: c_ulonglong, align: c_uchar) -> c_long;
      pub fn l4_re_rm_free_area(__self: *const L4ReRm, a: c_ulong) -> c_long;
      pub fn l4_re_rm_f_new() -> L4ReRmF;
      pub fn l4_re_rm_f_delete(__self: *const L4ReRmF);
      pub fn l4_re_rm_f_flags_new_1() -> L4ReRmFFlags;
      pub fn l4_re_rm_f_flags_new_2(f: c_uint) -> L4ReRmFFlags;
      pub fn l4_re_rm_f_flags_new_3(rf: c_uint) -> L4ReRmFFlags;
      pub fn l4_re_rm_f_flags_new_4(rf: c_ushort) -> L4ReRmFFlags;
      pub fn l4_re_rm_f_flags_region_flags(__self: *const L4ReRmFFlags) -> c_ushort;
      pub fn l4_re_rm_f_flags_attach_flags(__self: *const L4ReRmFFlags) -> c_uint;
      pub fn l4_re_rm_f_flags_r(__self: *const L4ReRmFFlags) -> c_int;
      pub fn l4_re_rm_f_flags_w(__self: *const L4ReRmFFlags) -> c_int;
      pub fn l4_re_rm_f_flags_x(__self: *const L4ReRmFFlags) -> c_int;
      pub fn l4_re_rm_f_flags_cap_rights(__self: *const L4ReRmFFlags) -> c_uint;
      pub fn l4_re_rm_f_flags_copy(_1: *const L4ReRmFFlags) -> L4ReRmFFlags;
      pub fn l4_re_rm_f_flags_move(_1: *mut L4ReRmFFlags) -> L4ReRmFFlags;
      pub fn l4_re_rm_f_flags_delete(__self: *const L4ReRmFFlags);
      pub fn l4_re_rm_f_flags_bw_or_assign(__self: *mut L4ReRmFFlags, r: c_uint) -> L4ReRmFFlags;
      pub fn l4_re_rm_f_flags_bw_and_assign(__self: *mut L4ReRmFFlags, r: c_uint) -> L4ReRmFFlags;
      pub fn l4_re_rm_f_flags_cast_bool(__self: *const L4ReRmFFlags) -> c_int;
      pub fn l4_re_rm_f_flags_bw_not(__self: *const L4ReRmFFlags) -> L4ReRmFFlags;
  }
}

type L4ReRmFlags = L4ReRmFFlags;
type L4ReRmOffset = c_ulonglong;
type L4Uint16T = c_ushort;
type L4Uint32T = c_uint;

pub const L4_RE_RM_F_SEARCH_ADDR: L4Uint32T = 131072;

pub const L4_RE_RM_F_IN_AREA: L4Uint32T = 262144;

pub const L4_RE_RM_F_EAGER_MAP: L4Uint32T = 524288;

pub const L4_RE_RM_F_ATTACH_MASK: L4Uint32T = 983040;

pub const L4_RE_RM_F_RIGHTS_MASK: L4Uint16T = 15;

pub const L4_RE_RM_F_R: L4Uint16T = 4;

pub const L4_RE_RM_F_W: L4Uint16T = 2;

pub const L4_RE_RM_F_X: L4Uint16T = 1;

pub const L4_RE_RM_F_RW: L4Uint16T = 6;

pub const L4_RE_RM_F_RX: L4Uint16T = 5;

pub const L4_RE_RM_F_RWX: L4Uint16T = 7;

pub const L4_RE_RM_F_DETACH_FREE: L4Uint16T = 512;

pub const L4_RE_RM_F_PAGER: L4Uint16T = 1024;

pub const L4_RE_RM_F_RESERVED: L4Uint16T = 2048;

pub const L4_RE_RM_F_CACHING_MASK: L4Uint16T = 48;

pub const L4_RE_RM_F_CACHE_NORMAL: L4Uint16T = 0;

pub const L4_RE_RM_F_CACHE_BUFFERED: L4Uint16T = 16;

pub const L4_RE_RM_F_CACHE_UNCACHED: L4Uint16T = 32;

pub const L4_RE_RM_F_DS_MAP_MASK: L4Uint16T = 255;

pub const L4_RE_RM_F_REGION_FLAGS_MASK: L4Uint16T = 65535;

impl L4ReRm {
    pub unsafe fn reserve_area(&self, start: *mut L4AddrT, size: c_ulong, flags: L4Uint32T, align: c_uchar) -> c_long {
        let ___self: *const L4ReRm;
        let _start: *mut c_ulong;
        let _size: c_ulong;
        let _flags: c_uint;
        let _align: c_uchar;

        ___self = self as *const L4ReRm;

        _start = start;

        _size = size;

        _flags = flags;

        _align = align;

        let __ret = rm_c::l4_re_rm_reserve_area(___self, _start, _size, _flags, _align);

        __ret
    }

    pub unsafe fn attach<'_0>(&self, start: *mut L4AddrT, size: c_ulong, flags: L4Uint32T, mem: &'_0 L4IpcCapDataspace, offs: L4ReRmOffset, align: c_uchar) -> c_long {
        let ___self: *const L4ReRm;
        let _start: *mut c_ulong;
        let _size: c_ulong;
        let _flags: c_uint;
        let _mem: *const L4IpcCapDataspace;
        let _offs: c_ulonglong;
        let _align: c_uchar;

        ___self = self as *const L4ReRm;

        _start = start;

        _size = size;

        _flags = flags;

        _mem = mem as *const L4IpcCapDataspace;

        _offs = offs;

        _align = align;

        let __ret = rm_c::l4_re_rm_attach(___self, _start, _size, _flags, _mem, _offs, _align);

        __ret
    }

    pub unsafe fn detach_1<'_0>(&self, addr: L4AddrT, mem: *mut L4CapDataspace, task: &'_0 L4CapTask) -> c_int {
        let ___self: *const L4ReRm;
        let _addr: c_ulong;
        let _mem: *mut L4CapDataspace;
        let _task: *const L4CapTask;

        ___self = self as *const L4ReRm;

        _addr = addr;

        _mem = mem;

        _task = task;

        let __ret = rm_c::l4_re_rm_detach_1(___self, _addr, _mem, _task);

        __ret
    }

    pub unsafe fn detach_2<'_0>(&self, addr: *mut c_void, mem: *mut L4CapDataspace, task: &'_0 L4CapTask) -> c_int {
        let ___self: *const L4ReRm;
        let _addr: *mut c_void;
        let _mem: *mut L4CapDataspace;
        let _task: *const L4CapTask;

        ___self = self as *const L4ReRm;

        _addr = addr;

        _mem = mem;

        _task = task;

        let __ret = rm_c::l4_re_rm_detach_2(___self, _addr, _mem, _task);

        __ret
    }

    pub unsafe fn detach_3<'_0>(&self, start: L4AddrT, size: c_ulong, mem: *mut L4CapDataspace, task: &'_0 L4CapTask) -> c_int {
        let ___self: *const L4ReRm;
        let _start: c_ulong;
        let _size: c_ulong;
        let _mem: *mut L4CapDataspace;
        let _task: *const L4CapTask;

        ___self = self as *const L4ReRm;

        _start = start;

        _size = size;

        _mem = mem;

        _task = task;

        let __ret = rm_c::l4_re_rm_detach_3(___self, _start, _size, _mem, _task);

        __ret
    }

    pub unsafe fn find(&mut self, addr: *mut L4AddrT, size: *mut c_ulong, offset: *mut L4ReRmOffset, flags: *mut L4ReRmFlags, m: *mut L4CapDataspace) -> c_int {
        let ___self: *mut L4ReRm;
        let _addr: *mut c_ulong;
        let _size: *mut c_ulong;
        let _offset: *mut c_ulonglong;
        let _flags: *mut L4ReRmFlags;
        let _m: *mut L4CapDataspace;

        ___self = self as *mut L4ReRm;

        _addr = addr;

        _size = size;

        _offset = offset;

        _flags = flags;

        _m = m;

        let __ret = rm_c::l4_re_rm_find(___self, _addr, _size, _offset, _flags, _m);

        __ret
    }

    pub unsafe fn detach_4<'_0>(&self, start: L4AddrT, size: c_ulong, mem: *mut L4CapDataspace, task: &'_0 L4CapTask, flags: c_uint) -> c_int {
        let ___self: *const L4ReRm;
        let _start: c_ulong;
        let _size: c_ulong;
        let _mem: *mut L4CapDataspace;
        let _task: *const L4CapTask;
        let _flags: c_uint;

        ___self = self as *const L4ReRm;

        _start = start;

        _size = size;

        _mem = mem;

        _task = task as *const L4CapTask;

        _flags = flags;

        let __ret = rm_c::l4_re_rm_detach_4(___self, _start, _size, _mem, _task, _flags);

        __ret
    }

    pub unsafe fn attach_void<'_0>(&self, start: *mut *mut c_void, size: c_ulong, flags: L4Uint32T, mem: &'_0 L4IpcCapDataspace, offs: L4ReRmOffset, align: c_uchar) -> c_long {
        let ___self: *const L4ReRm;
        let _start: *mut *mut c_void;
        let _size: c_ulong;
        let _flags: c_uint;
        let _mem: *const L4IpcCapDataspace;
        let _offs: c_ulonglong;
        let _align: c_uchar;

        ___self = self as *const L4ReRm;

        _start = start;

        _size = size;

        _flags = flags;

        _mem = mem as *const L4IpcCapDataspace;

        _offs = offs;

        _align = align;

        let __ret = rm_c::l4_re_rm_attach_void(___self, _start, _size, _flags, _mem, _offs, _align);

        __ret
    }

    pub unsafe fn free_area(&self, a: c_ulong) -> c_long {
        let ___self: *const L4ReRm;
        let _a: c_ulong;

        ___self = self as *const L4ReRm;

        _a = a;

        let __ret = rm_c::l4_re_rm_free_area(___self, _a);

        __ret
    }
}

impl Drop for L4ReRm {
    fn drop(&mut self) {
        unsafe {
            if self.is_owning == 0{
                return;
            }

            let ___self: *const L4ReRm;

            ___self = self as *const L4ReRm;

            rm_c::l4_re_rm_delete(___self)
        }
    }
}

#[repr(C)]
union L4ReRmFUnion {
    mem: [c_char; 1],
    ptr: *mut c_void,
}

#[repr(C)]
pub struct L4ReRmF {
    obj : L4ReRmFUnion,

    is_const: c_char,
    is_owning: c_char,
}

impl L4ReRmF {
    pub unsafe fn new() -> L4ReRmF {
        let __ret = rm_c::l4_re_rm_f_new();

        __ret
    }
}

impl Drop for L4ReRmF {
    fn drop(&mut self) {
        unsafe {
            if self.is_owning == 0{
                return;
            }

            let ___self: *const L4ReRmF;

            ___self = self as *const L4ReRmF;

            rm_c::l4_re_rm_f_delete(___self)
        }
    }
}

#[repr(C)]
union L4ReRmFFlagsUnion {
    mem: [c_char; 4],
    ptr: *mut c_void,
}

#[repr(C)]
pub struct L4ReRmFFlags {
    obj : L4ReRmFFlagsUnion,

    is_const: c_char,
    is_owning: c_char,
}

impl L4ReRmFFlags {
    pub unsafe fn new_1() -> L4ReRmFFlags {
        let __ret = rm_c::l4_re_rm_f_flags_new_1();

        __ret
    }

    pub unsafe fn new_2(f: L4Uint32T) -> L4ReRmFFlags {
        let _f: c_uint;

        _f = f;

        let __ret = rm_c::l4_re_rm_f_flags_new_2(_f);

        __ret
    }

    pub unsafe fn new_3(rf: L4Uint32T) -> L4ReRmFFlags {
        let _rf: c_uint;

        _rf = rf as c_uint;

        let __ret = rm_c::l4_re_rm_f_flags_new_3(_rf);

        __ret
    }

    pub unsafe fn new_4(rf: L4Uint16T) -> L4ReRmFFlags {
        let _rf: c_ushort;

        _rf = rf as c_ushort;

        let __ret = rm_c::l4_re_rm_f_flags_new_4(_rf);

        __ret
    }

    pub unsafe fn region_flags(&self) -> L4Uint16T {
        let ___self: *const L4ReRmFFlags;

        ___self = self as *const L4ReRmFFlags;

        let __ret = rm_c::l4_re_rm_f_flags_region_flags(___self);

        __ret
    }

    pub unsafe fn attach_flags(&self) -> L4Uint32T {
        let ___self: *const L4ReRmFFlags;

        ___self = self as *const L4ReRmFFlags;

        let __ret = rm_c::l4_re_rm_f_flags_attach_flags(___self);

        __ret
    }

    pub unsafe fn r(&self) -> bool {
        let ___self: *const L4ReRmFFlags;

        ___self = self as *const L4ReRmFFlags;

        let __ret = rm_c::l4_re_rm_f_flags_r(___self) != 0;

        __ret
    }

    pub unsafe fn w(&self) -> bool {
        let ___self: *const L4ReRmFFlags;

        ___self = self as *const L4ReRmFFlags;

        let __ret = rm_c::l4_re_rm_f_flags_w(___self) != 0;

        __ret
    }

    pub unsafe fn x(&self) -> bool {
        let ___self: *const L4ReRmFFlags;

        ___self = self as *const L4ReRmFFlags;

        let __ret = rm_c::l4_re_rm_f_flags_x(___self) != 0;

        __ret
    }

    pub unsafe fn cap_rights(&self) -> c_uint {
        let ___self: *const L4ReRmFFlags;

        ___self = self as *const L4ReRmFFlags;

        let __ret = rm_c::l4_re_rm_f_flags_cap_rights(___self);

        __ret
    }

    pub unsafe fn bw_or_assign(&mut self, r: L4Uint32T) -> L4ReRmFFlags {
        let ___self: *mut L4ReRmFFlags;
        let _r: c_uint;

        ___self = self as *mut L4ReRmFFlags;

        _r = r;

        let __ret = rm_c::l4_re_rm_f_flags_bw_or_assign(___self, _r);

        __ret
    }

    pub unsafe fn bw_and_assign(&mut self, r: L4Uint32T) -> L4ReRmFFlags {
        let ___self: *mut L4ReRmFFlags;
        let _r: c_uint;

        ___self = self as *mut L4ReRmFFlags;

        _r = r;

        let __ret = rm_c::l4_re_rm_f_flags_bw_and_assign(___self, _r);

        __ret
    }

    pub unsafe fn cast_bool(&self) -> bool {
        let ___self: *const L4ReRmFFlags;

        ___self = self as *const L4ReRmFFlags;

        let __ret = rm_c::l4_re_rm_f_flags_cast_bool(___self) != 0;

        __ret
    }

    pub unsafe fn bw_not(&self) -> L4ReRmFFlags {
        let ___self: *const L4ReRmFFlags;

        ___self = self as *const L4ReRmFFlags;

        let __ret = rm_c::l4_re_rm_f_flags_bw_not(___self);

        __ret
    }
}

impl Clone for L4ReRmFFlags {
    fn clone(&self) -> L4ReRmFFlags {
        unsafe {
            rm_c::l4_re_rm_f_flags_copy(self as *const L4ReRmFFlags)
        }
    }
}

impl Drop for L4ReRmFFlags {
    fn drop(&mut self) {
        unsafe {
            if self.is_owning == 0{
                return;
            }

            let ___self: *const L4ReRmFFlags;

            ___self = self as *const L4ReRmFFlags;

            rm_c::l4_re_rm_f_flags_delete(___self)
        }
    }
}