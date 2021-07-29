mod example_kobject_shared_c {
  #![allow(unused_imports)]
  use super::*;

  #[link(name="example_kobject_shared_c")]
  extern "C" {
      pub fn dummy_kobject_delete(__self: *const DummyKobject);
      pub fn dummy_kobject_call(__self: *const DummyKobject, a_1: c_longlong, a_2: c_longlong, a_3: *mut c_longlong) -> c_int;
  }
}

#[repr(C)]
union DummyKobjectUnion {
    mem: [c_char; 1],
    ptr: *mut c_void,
}

#[repr(C)]
pub struct DummyKobject {
    obj : DummyKobjectUnion,

    is_const: c_char,
    is_owning: c_char,
}

impl DummyKobject {
    pub unsafe fn call(&self, a_1: c_longlong, a_2: c_longlong, a_3: *mut c_longlong) -> c_int {
        let ___self: *const DummyKobject;
        let _a_1: c_longlong;
        let _a_2: c_longlong;
        let _a_3: *mut c_longlong;

        ___self = self as *const DummyKobject;

        _a_1 = a_1;

        _a_2 = a_2;

        _a_3 = a_3;

        let __ret = example_kobject_shared_c::dummy_kobject_call(___self, _a_1, _a_2, _a_3);

        __ret
    }
}

impl Drop for DummyKobject {
    fn drop(&mut self) {
        unsafe {
            if self.is_owning == 0{
                return;
            }

            let ___self: *const DummyKobject;

            ___self = self as *const DummyKobject;

            example_kobject_shared_c::dummy_kobject_delete(___self)
        }
    }
}