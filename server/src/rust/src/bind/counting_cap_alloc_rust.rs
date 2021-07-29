mod counting_cap_alloc_c {
  #![allow(unused_imports)]
  use super::*;

  #[link(name="counting_cap_alloc_c")]
  extern "C" {
      pub fn l4_re_util_counting_cap_alloc_counter_alloc(__self: *mut L4ReUtilCountingCapAllocCounter) -> L4CapVoid;
      pub fn l4_re_util_counting_cap_alloc_counter_take(__self: *mut L4ReUtilCountingCapAllocCounter, cap: *const L4CapVoid);
      pub fn l4_re_util_counting_cap_alloc_counter_free(__self: *mut L4ReUtilCountingCapAllocCounter, cap: *const L4CapVoid, task: c_ulong, unmap_flags: c_uint) -> c_int;
      pub fn l4_re_util_counting_cap_alloc_counter_release(__self: *mut L4ReUtilCountingCapAllocCounter, cap: *const L4CapVoid, task: c_ulong, unmap_flags: c_uint) -> c_int;
      pub fn l4_re_util_counting_cap_alloc_counter_last(__self: *mut L4ReUtilCountingCapAllocCounter) -> c_long;
      pub fn l4_re_util_counting_cap_alloc_counter_delete(__self: *const L4ReUtilCountingCapAllocCounter);
      pub fn l4_re_util_counting_cap_alloc_counter_alloc_dataspace(__self: *mut L4ReUtilCountingCapAllocCounter) -> L4CapDataspace;
  }
}

#[repr(C)]
union L4ReUtilCountingCapAllocCounterUnion {
    mem: [c_char; 32],
    ptr: *mut c_void,
}

#[repr(C)]
pub struct L4ReUtilCountingCapAllocCounter {
    obj : L4ReUtilCountingCapAllocCounterUnion,

    is_const: c_char,
    is_owning: c_char,
}

impl L4ReUtilCountingCapAllocCounter {
    pub unsafe fn alloc(&mut self) -> L4CapVoid {
        let ___self: *mut L4ReUtilCountingCapAllocCounter;

        ___self = self as *mut L4ReUtilCountingCapAllocCounter;

        let __ret = counting_cap_alloc_c::l4_re_util_counting_cap_alloc_counter_alloc(___self);

        __ret
    }

    pub unsafe fn take<'_0>(&mut self, cap: &'_0 L4CapVoid) {
        let ___self: *mut L4ReUtilCountingCapAllocCounter;
        let _cap: *const L4CapVoid;

        ___self = self as *mut L4ReUtilCountingCapAllocCounter;

        _cap = cap as *const L4CapVoid;

        counting_cap_alloc_c::l4_re_util_counting_cap_alloc_counter_take(___self, _cap)
    }

    pub unsafe fn free<'_0>(&mut self, cap: &'_0 L4CapVoid, task: L4CapIdxT, unmap_flags: c_uint) -> bool {
        let ___self: *mut L4ReUtilCountingCapAllocCounter;
        let _cap: *const L4CapVoid;
        let _task: c_ulong;
        let _unmap_flags: c_uint;

        ___self = self as *mut L4ReUtilCountingCapAllocCounter;

        _cap = cap as *const L4CapVoid;

        _task = task;

        _unmap_flags = unmap_flags;

        let __ret = counting_cap_alloc_c::l4_re_util_counting_cap_alloc_counter_free(___self, _cap, _task, _unmap_flags) != 0;

        __ret
    }

    pub unsafe fn release<'_0>(&mut self, cap: &'_0 L4CapVoid, task: L4CapIdxT, unmap_flags: c_uint) -> bool {
        let ___self: *mut L4ReUtilCountingCapAllocCounter;
        let _cap: *const L4CapVoid;
        let _task: c_ulong;
        let _unmap_flags: c_uint;

        ___self = self as *mut L4ReUtilCountingCapAllocCounter;

        _cap = cap as *const L4CapVoid;

        _task = task;

        _unmap_flags = unmap_flags;

        let __ret = counting_cap_alloc_c::l4_re_util_counting_cap_alloc_counter_release(___self, _cap, _task, _unmap_flags) != 0;

        __ret
    }

    pub unsafe fn last(&mut self) -> c_long {
        let ___self: *mut L4ReUtilCountingCapAllocCounter;

        ___self = self as *mut L4ReUtilCountingCapAllocCounter;

        let __ret = counting_cap_alloc_c::l4_re_util_counting_cap_alloc_counter_last(___self);

        __ret
    }

    pub unsafe fn alloc_dataspace(&mut self) -> L4CapDataspace {
        let ___self: *mut L4ReUtilCountingCapAllocCounter;

        ___self = self as *mut L4ReUtilCountingCapAllocCounter;

        let __ret = counting_cap_alloc_c::l4_re_util_counting_cap_alloc_counter_alloc_dataspace(___self);

        __ret
    }
}

impl Drop for L4ReUtilCountingCapAllocCounter {
    fn drop(&mut self) {
        unsafe {
            if self.is_owning == 0{
                return;
            }

            let ___self: *const L4ReUtilCountingCapAllocCounter;

            ___self = self as *const L4ReUtilCountingCapAllocCounter;

            counting_cap_alloc_c::l4_re_util_counting_cap_alloc_counter_delete(___self)
        }
    }
}