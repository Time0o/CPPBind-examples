mod env_c {
  #![allow(unused_imports)]
  use super::*;

  #[link(name="env_c")]
  extern "C" {
      pub fn l4_re_env_env() -> L4ReEnv;
      pub fn l4_re_env_parent_1(__self: *const L4ReEnv) -> L4CapParent;
      pub fn l4_re_env_mem_alloc_1(__self: *const L4ReEnv) -> L4CapMemAlloc;
      pub fn l4_re_env_user_factory(__self: *const L4ReEnv) -> L4CapFactory;
      pub fn l4_re_env_rm_1(__self: *const L4ReEnv) -> L4CapRm;
      pub fn l4_re_env_log_1(__self: *const L4ReEnv) -> L4CapLog;
      pub fn l4_re_env_main_thread_1(__self: *const L4ReEnv) -> L4CapThread;
      pub fn l4_re_env_task(__self: *const L4ReEnv) -> L4CapTask;
      pub fn l4_re_env_factory_1(__self: *const L4ReEnv) -> L4CapFactory;
      pub fn l4_re_env_first_free_cap_1(__self: *const L4ReEnv) -> c_ulong;
      pub fn l4_re_env_first_free_utcb_1(__self: *const L4ReEnv) -> c_ulong;
      pub fn l4_re_env_parent_2(__self: *mut L4ReEnv, c: *const L4CapParent);
      pub fn l4_re_env_mem_alloc_2(__self: *mut L4ReEnv, c: *const L4CapMemAlloc);
      pub fn l4_re_env_rm_2(__self: *mut L4ReEnv, c: *const L4CapRm);
      pub fn l4_re_env_log_2(__self: *mut L4ReEnv, c: *const L4CapLog);
      pub fn l4_re_env_main_thread_2(__self: *mut L4ReEnv, c: *const L4CapThread);
      pub fn l4_re_env_factory_2(__self: *mut L4ReEnv, c: *const L4CapFactory);
      pub fn l4_re_env_first_free_cap_2(__self: *mut L4ReEnv, c: c_ulong);
      pub fn l4_re_env_first_free_utcb_2(__self: *mut L4ReEnv, u: c_ulong);
      pub fn l4_re_env_scheduler_1(__self: *const L4ReEnv) -> L4CapScheduler;
      pub fn l4_re_env_scheduler_2(__self: *mut L4ReEnv, c: *const L4CapScheduler);
      pub fn l4_re_env_new() -> L4ReEnv;
      pub fn l4_re_env_delete(__self: *const L4ReEnv);
      pub fn l4_re_env_get_cap_dummy_kobject_1(__self: *const L4ReEnv, name: *const c_char, l: c_uint) -> L4CapDummyKobject;
      pub fn l4_re_env_get_cap_dummy_kobject_2(__self: *const L4ReEnv, name: *const c_char) -> L4CapDummyKobject;
  }
}

type L4AddrT = c_ulong;

#[repr(C)]
union L4CapParentUnion {
    mem: [c_char; 8],
    ptr: *mut c_void,
}

#[repr(C)]
pub struct L4CapParent {
    obj : L4CapParentUnion,

    is_const: c_char,
    is_owning: c_char,
}

#[repr(C)]
union L4CapLogUnion {
    mem: [c_char; 8],
    ptr: *mut c_void,
}

#[repr(C)]
pub struct L4CapLog {
    obj : L4CapLogUnion,

    is_const: c_char,
    is_owning: c_char,
}

#[repr(C)]
union L4CapSchedulerUnion {
    mem: [c_char; 8],
    ptr: *mut c_void,
}

#[repr(C)]
pub struct L4CapScheduler {
    obj : L4CapSchedulerUnion,

    is_const: c_char,
    is_owning: c_char,
}

#[repr(C)]
union L4ReEnvUnion {
    mem: [c_char; 88],
    ptr: *mut c_void,
}

#[repr(C)]
pub struct L4ReEnv {
    obj : L4ReEnvUnion,

    is_const: c_char,
    is_owning: c_char,
}

impl L4ReEnv {
    pub unsafe fn env() -> L4ReEnv {
        let __ret = env_c::l4_re_env_env();

        __ret
    }

    pub unsafe fn parent_1(&self) -> L4CapParent {
        let ___self: *const L4ReEnv;

        ___self = self as *const L4ReEnv;

        let __ret = env_c::l4_re_env_parent_1(___self);

        __ret
    }

    pub unsafe fn mem_alloc_1(&self) -> L4CapMemAlloc {
        let ___self: *const L4ReEnv;

        ___self = self as *const L4ReEnv;

        let __ret = env_c::l4_re_env_mem_alloc_1(___self);

        __ret
    }

    pub unsafe fn user_factory(&self) -> L4CapFactory {
        let ___self: *const L4ReEnv;

        ___self = self as *const L4ReEnv;

        let __ret = env_c::l4_re_env_user_factory(___self);

        __ret
    }

    pub unsafe fn rm_1(&self) -> L4CapRm {
        let ___self: *const L4ReEnv;

        ___self = self as *const L4ReEnv;

        let __ret = env_c::l4_re_env_rm_1(___self);

        __ret
    }

    pub unsafe fn log_1(&self) -> L4CapLog {
        let ___self: *const L4ReEnv;

        ___self = self as *const L4ReEnv;

        let __ret = env_c::l4_re_env_log_1(___self);

        __ret
    }

    pub unsafe fn main_thread_1(&self) -> L4CapThread {
        let ___self: *const L4ReEnv;

        ___self = self as *const L4ReEnv;

        let __ret = env_c::l4_re_env_main_thread_1(___self);

        __ret
    }

    pub unsafe fn task(&self) -> L4CapTask {
        let ___self: *const L4ReEnv;

        ___self = self as *const L4ReEnv;

        let __ret = env_c::l4_re_env_task(___self);

        __ret
    }

    pub unsafe fn factory_1(&self) -> L4CapFactory {
        let ___self: *const L4ReEnv;

        ___self = self as *const L4ReEnv;

        let __ret = env_c::l4_re_env_factory_1(___self);

        __ret
    }

    pub unsafe fn first_free_cap_1(&self) -> L4CapIdxT {
        let ___self: *const L4ReEnv;

        ___self = self as *const L4ReEnv;

        let __ret = env_c::l4_re_env_first_free_cap_1(___self);

        __ret
    }

    pub unsafe fn first_free_utcb_1(&self) -> L4AddrT {
        let ___self: *const L4ReEnv;

        ___self = self as *const L4ReEnv;

        let __ret = env_c::l4_re_env_first_free_utcb_1(___self);

        __ret
    }

    pub unsafe fn parent_2<'_0>(&mut self, c: &'_0 L4CapParent) {
        let ___self: *mut L4ReEnv;
        let _c: *const L4CapParent;

        ___self = self as *mut L4ReEnv;

        _c = c;

        env_c::l4_re_env_parent_2(___self, _c)
    }

    pub unsafe fn mem_alloc_2<'_0>(&mut self, c: &'_0 L4CapMemAlloc) {
        let ___self: *mut L4ReEnv;
        let _c: *const L4CapMemAlloc;

        ___self = self as *mut L4ReEnv;

        _c = c;

        env_c::l4_re_env_mem_alloc_2(___self, _c)
    }

    pub unsafe fn rm_2<'_0>(&mut self, c: &'_0 L4CapRm) {
        let ___self: *mut L4ReEnv;
        let _c: *const L4CapRm;

        ___self = self as *mut L4ReEnv;

        _c = c;

        env_c::l4_re_env_rm_2(___self, _c)
    }

    pub unsafe fn log_2<'_0>(&mut self, c: &'_0 L4CapLog) {
        let ___self: *mut L4ReEnv;
        let _c: *const L4CapLog;

        ___self = self as *mut L4ReEnv;

        _c = c;

        env_c::l4_re_env_log_2(___self, _c)
    }

    pub unsafe fn main_thread_2<'_0>(&mut self, c: &'_0 L4CapThread) {
        let ___self: *mut L4ReEnv;
        let _c: *const L4CapThread;

        ___self = self as *mut L4ReEnv;

        _c = c;

        env_c::l4_re_env_main_thread_2(___self, _c)
    }

    pub unsafe fn factory_2<'_0>(&mut self, c: &'_0 L4CapFactory) {
        let ___self: *mut L4ReEnv;
        let _c: *const L4CapFactory;

        ___self = self as *mut L4ReEnv;

        _c = c;

        env_c::l4_re_env_factory_2(___self, _c)
    }

    pub unsafe fn first_free_cap_2(&mut self, c: L4CapIdxT) {
        let ___self: *mut L4ReEnv;
        let _c: c_ulong;

        ___self = self as *mut L4ReEnv;

        _c = c;

        env_c::l4_re_env_first_free_cap_2(___self, _c)
    }

    pub unsafe fn first_free_utcb_2(&mut self, u: L4AddrT) {
        let ___self: *mut L4ReEnv;
        let _u: c_ulong;

        ___self = self as *mut L4ReEnv;

        _u = u;

        env_c::l4_re_env_first_free_utcb_2(___self, _u)
    }

    pub unsafe fn scheduler_1(&self) -> L4CapScheduler {
        let ___self: *const L4ReEnv;

        ___self = self as *const L4ReEnv;

        let __ret = env_c::l4_re_env_scheduler_1(___self);

        __ret
    }

    pub unsafe fn scheduler_2<'_0>(&mut self, c: &'_0 L4CapScheduler) {
        let ___self: *mut L4ReEnv;
        let _c: *const L4CapScheduler;

        ___self = self as *mut L4ReEnv;

        _c = c;

        env_c::l4_re_env_scheduler_2(___self, _c)
    }

    pub unsafe fn new() -> L4ReEnv {
        let __ret = env_c::l4_re_env_new();

        __ret
    }

    pub unsafe fn get_cap_dummy_kobject_1<'_0>(&self, name: &'_0 CStr, l: c_uint) -> L4CapDummyKobject {
        let ___self: *const L4ReEnv;
        let _name: *const c_char;
        let _l: c_uint;

        ___self = self as *const L4ReEnv;

        _name = name.as_ptr();

        _l = l;

        let __ret = env_c::l4_re_env_get_cap_dummy_kobject_1(___self, _name, _l);

        __ret
    }

    pub unsafe fn get_cap_dummy_kobject_2<'_0>(&self, name: &'_0 CStr) -> L4CapDummyKobject {
        let ___self: *const L4ReEnv;
        let _name: *const c_char;

        ___self = self as *const L4ReEnv;

        _name = name.as_ptr();

        let __ret = env_c::l4_re_env_get_cap_dummy_kobject_2(___self, _name);

        __ret
    }
}

impl Drop for L4ReEnv {
    fn drop(&mut self) {
        unsafe {
            if self.is_owning == 0{
                return;
            }

            let ___self: *const L4ReEnv;

            ___self = self as *const L4ReEnv;

            env_c::l4_re_env_delete(___self)
        }
    }
}