mod mem_alloc_c {
  #![allow(unused_imports)]
  use super::*;

  #[link(name="mem_alloc_c")]
  extern "C" {
      pub fn l4_re_mem_alloc_alloc(__self: *const L4ReMemAlloc, size: c_long, mem: *const L4CapDataspace, flags: c_ulong, align: c_ulong) -> c_long;
      pub fn l4_re_mem_alloc_free(__self: *const L4ReMemAlloc, mem: *const L4CapDataspace) -> c_long;
      pub fn l4_re_mem_alloc_delete(__self: *const L4ReMemAlloc);
  }
}

pub const L4_RE_MEM_ALLOC_CONTINUOUS: c_uint = 1;

pub const L4_RE_MEM_ALLOC_PINNED: c_uint = 2;

pub const L4_RE_MEM_ALLOC_SUPER_PAGES: c_uint = 4;

impl L4ReMemAlloc {
    pub unsafe fn alloc<'_0>(&self, size: c_long, mem: &'_0 L4CapDataspace, flags: c_ulong, align: c_ulong) -> c_long {
        let ___self: *const L4ReMemAlloc;
        let _size: c_long;
        let _mem: *const L4CapDataspace;
        let _flags: c_ulong;
        let _align: c_ulong;

        ___self = self as *const L4ReMemAlloc;

        _size = size;

        _mem = mem as *const L4CapDataspace;

        _flags = flags;

        _align = align;

        let __ret = mem_alloc_c::l4_re_mem_alloc_alloc(___self, _size, _mem, _flags, _align);

        __ret
    }

    pub unsafe fn free<'_0>(&self, mem: &'_0 L4CapDataspace) -> c_long {
        let ___self: *const L4ReMemAlloc;
        let _mem: *const L4CapDataspace;

        ___self = self as *const L4ReMemAlloc;

        _mem = mem as *const L4CapDataspace;

        let __ret = mem_alloc_c::l4_re_mem_alloc_free(___self, _mem);

        __ret
    }
}

impl Drop for L4ReMemAlloc {
    fn drop(&mut self) {
        unsafe {
            if self.is_owning == 0{
                return;
            }

            let ___self: *const L4ReMemAlloc;

            ___self = self as *const L4ReMemAlloc;

            mem_alloc_c::l4_re_mem_alloc_delete(___self)
        }
    }
}