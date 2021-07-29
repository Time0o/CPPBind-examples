mod capability_c {
  #![allow(unused_imports)]
  use super::*;

  #[link(name="capability_c")]
  extern "C" {
      pub fn l4_cap_task_new_1(cap: c_ulong) -> L4CapTask;
      pub fn l4_cap_task_new_2(cap: c_uint) -> L4CapTask;
      pub fn l4_cap_task_new_3(idx: c_ulong) -> L4CapTask;
      pub fn l4_cap_task_new_4(_1: c_uint) -> L4CapTask;
      pub fn l4_cap_task_move_1(__self: *const L4CapTask, src: *const L4CapTask) -> L4CapTask;
      pub fn l4_cap_task_copy_1(__self: *const L4CapTask, src: *const L4CapTask) -> L4CapTask;
      pub fn l4_cap_task_copy_2(_1: *const L4CapTask) -> L4CapTask;
      pub fn l4_cap_task_move_2(_1: *mut L4CapTask) -> L4CapTask;
      pub fn l4_cap_task_delete(__self: *const L4CapTask);
      pub fn l4_cap_task_new_task(o: *const L4CapTask) -> L4CapTask;
      pub fn l4_cap_task_cap(__self: *const L4CapTask) -> c_ulong;
      pub fn l4_cap_task_is_valid(__self: *const L4CapTask) -> c_int;
      pub fn l4_cap_task_snd_base(__self: *const L4CapTask, grant: c_uint, base: c_ulong) -> c_ulong;
      pub fn l4_cap_task_invalidate(__self: *mut L4CapTask);
      pub fn l4_cap_kobject_new_1(cap: c_ulong) -> L4CapKobject;
      pub fn l4_cap_kobject_new_2(cap: c_uint) -> L4CapKobject;
      pub fn l4_cap_kobject_new_3(idx: c_ulong) -> L4CapKobject;
      pub fn l4_cap_kobject_new_4(_1: c_uint) -> L4CapKobject;
      pub fn l4_cap_kobject_move(__self: *const L4CapKobject, src: *const L4CapKobject) -> L4CapKobject;
      pub fn l4_cap_kobject_copy(__self: *const L4CapKobject, src: *const L4CapKobject) -> L4CapKobject;
      pub fn l4_cap_kobject_cap(__self: *const L4CapKobject) -> c_ulong;
      pub fn l4_cap_kobject_is_valid(__self: *const L4CapKobject) -> c_int;
      pub fn l4_cap_kobject_snd_base(__self: *const L4CapKobject, grant: c_uint, base: c_ulong) -> c_ulong;
      pub fn l4_cap_kobject_invalidate(__self: *mut L4CapKobject);
      pub fn l4_cap_meta_new_1(cap: c_ulong) -> L4CapMeta;
      pub fn l4_cap_meta_new_2(cap: c_uint) -> L4CapMeta;
      pub fn l4_cap_meta_new_3(idx: c_ulong) -> L4CapMeta;
      pub fn l4_cap_meta_new_4(_1: c_uint) -> L4CapMeta;
      pub fn l4_cap_meta_move(__self: *const L4CapMeta, src: *const L4CapMeta) -> L4CapMeta;
      pub fn l4_cap_meta_copy(__self: *const L4CapMeta, src: *const L4CapMeta) -> L4CapMeta;
      pub fn l4_cap_meta_cap(__self: *const L4CapMeta) -> c_ulong;
      pub fn l4_cap_meta_is_valid(__self: *const L4CapMeta) -> c_int;
      pub fn l4_cap_meta_snd_base(__self: *const L4CapMeta, grant: c_uint, base: c_ulong) -> c_ulong;
      pub fn l4_cap_meta_invalidate(__self: *mut L4CapMeta);
      pub fn l4_cap_void_new_1(p: *const c_void) -> L4CapVoid;
      pub fn l4_cap_void_new_2(cap: c_ulong) -> L4CapVoid;
      pub fn l4_cap_void_new_3(cap: c_uint) -> L4CapVoid;
      pub fn l4_cap_void_new_4(idx: c_ulong) -> L4CapVoid;
      pub fn l4_cap_void_new_5(_1: c_uint) -> L4CapVoid;
      pub fn l4_cap_void_move_1(__self: *const L4CapVoid, src: *const L4CapVoid) -> L4CapVoid;
      pub fn l4_cap_void_copy_1(__self: *const L4CapVoid, src: *const L4CapVoid) -> L4CapVoid;
      pub fn l4_cap_void_copy_2(_1: *const L4CapVoid) -> L4CapVoid;
      pub fn l4_cap_void_move_2(_1: *mut L4CapVoid) -> L4CapVoid;
      pub fn l4_cap_void_delete(__self: *const L4CapVoid);
      pub fn l4_cap_void_new_void(o: *const L4CapVoid) -> L4CapVoid;
      pub fn l4_cap_void_cap(__self: *const L4CapVoid) -> c_ulong;
      pub fn l4_cap_void_is_valid(__self: *const L4CapVoid) -> c_int;
      pub fn l4_cap_void_snd_base(__self: *const L4CapVoid, grant: c_uint, base: c_ulong) -> c_ulong;
      pub fn l4_cap_void_invalidate(__self: *mut L4CapVoid);
      pub fn l4_cap_factory_new_1(cap: c_ulong) -> L4CapFactory;
      pub fn l4_cap_factory_new_2(cap: c_uint) -> L4CapFactory;
      pub fn l4_cap_factory_new_3(idx: c_ulong) -> L4CapFactory;
      pub fn l4_cap_factory_new_4(_1: c_uint) -> L4CapFactory;
      pub fn l4_cap_factory_move(__self: *const L4CapFactory, src: *const L4CapFactory) -> L4CapFactory;
      pub fn l4_cap_factory_copy(__self: *const L4CapFactory, src: *const L4CapFactory) -> L4CapFactory;
      pub fn l4_cap_factory_cap(__self: *const L4CapFactory) -> c_ulong;
      pub fn l4_cap_factory_is_valid(__self: *const L4CapFactory) -> c_int;
      pub fn l4_cap_factory_snd_base(__self: *const L4CapFactory, grant: c_uint, base: c_ulong) -> c_ulong;
      pub fn l4_cap_factory_invalidate(__self: *mut L4CapFactory);
      pub fn l4_cap_thread_new_1(cap: c_ulong) -> L4CapThread;
      pub fn l4_cap_thread_new_2(cap: c_uint) -> L4CapThread;
      pub fn l4_cap_thread_new_3(idx: c_ulong) -> L4CapThread;
      pub fn l4_cap_thread_new_4(_1: c_uint) -> L4CapThread;
      pub fn l4_cap_thread_move(__self: *const L4CapThread, src: *const L4CapThread) -> L4CapThread;
      pub fn l4_cap_thread_copy(__self: *const L4CapThread, src: *const L4CapThread) -> L4CapThread;
      pub fn l4_cap_thread_cap(__self: *const L4CapThread) -> c_ulong;
      pub fn l4_cap_thread_is_valid(__self: *const L4CapThread) -> c_int;
      pub fn l4_cap_thread_snd_base(__self: *const L4CapThread, grant: c_uint, base: c_ulong) -> c_ulong;
      pub fn l4_cap_thread_invalidate(__self: *mut L4CapThread);
      pub fn l4_cap_irq_new_1(cap: c_ulong) -> L4CapIrq;
      pub fn l4_cap_irq_new_2(cap: c_uint) -> L4CapIrq;
      pub fn l4_cap_irq_new_3(idx: c_ulong) -> L4CapIrq;
      pub fn l4_cap_irq_new_4(_1: c_uint) -> L4CapIrq;
      pub fn l4_cap_irq_move(__self: *const L4CapIrq, src: *const L4CapIrq) -> L4CapIrq;
      pub fn l4_cap_irq_copy(__self: *const L4CapIrq, src: *const L4CapIrq) -> L4CapIrq;
      pub fn l4_cap_irq_cap(__self: *const L4CapIrq) -> c_ulong;
      pub fn l4_cap_irq_is_valid(__self: *const L4CapIrq) -> c_int;
      pub fn l4_cap_irq_snd_base(__self: *const L4CapIrq, grant: c_uint, base: c_ulong) -> c_ulong;
      pub fn l4_cap_irq_invalidate(__self: *mut L4CapIrq);
      pub fn l4_cap_vm_new_1(cap: c_ulong) -> L4CapVm;
      pub fn l4_cap_vm_new_2(cap: c_uint) -> L4CapVm;
      pub fn l4_cap_vm_new_3(idx: c_ulong) -> L4CapVm;
      pub fn l4_cap_vm_new_4(_1: c_uint) -> L4CapVm;
      pub fn l4_cap_vm_move(__self: *const L4CapVm, src: *const L4CapVm) -> L4CapVm;
      pub fn l4_cap_vm_copy(__self: *const L4CapVm, src: *const L4CapVm) -> L4CapVm;
      pub fn l4_cap_vm_cap(__self: *const L4CapVm) -> c_ulong;
      pub fn l4_cap_vm_is_valid(__self: *const L4CapVm) -> c_int;
      pub fn l4_cap_vm_snd_base(__self: *const L4CapVm, grant: c_uint, base: c_ulong) -> c_ulong;
      pub fn l4_cap_vm_invalidate(__self: *mut L4CapVm);
      pub fn l4_cap_dataspace_new_1(cap: c_ulong) -> L4CapDataspace;
      pub fn l4_cap_dataspace_new_2(cap: c_uint) -> L4CapDataspace;
      pub fn l4_cap_dataspace_new_3(idx: c_ulong) -> L4CapDataspace;
      pub fn l4_cap_dataspace_new_4(_1: c_uint) -> L4CapDataspace;
      pub fn l4_cap_dataspace_move_1(__self: *const L4CapDataspace, src: *const L4CapDataspace) -> L4CapDataspace;
      pub fn l4_cap_dataspace_copy_1(__self: *const L4CapDataspace, src: *const L4CapDataspace) -> L4CapDataspace;
      pub fn l4_cap_dataspace_access(__self: *const L4CapDataspace) -> L4ReDataspace;
      pub fn l4_cap_dataspace_copy_2(_1: *const L4CapDataspace) -> L4CapDataspace;
      pub fn l4_cap_dataspace_move_2(_1: *mut L4CapDataspace) -> L4CapDataspace;
      pub fn l4_cap_dataspace_delete(__self: *const L4CapDataspace);
      pub fn l4_cap_dataspace_new_dataspace(o: *const L4CapDataspace) -> L4CapDataspace;
      pub fn l4_cap_dataspace_cap(__self: *const L4CapDataspace) -> c_ulong;
      pub fn l4_cap_dataspace_is_valid(__self: *const L4CapDataspace) -> c_int;
      pub fn l4_cap_dataspace_snd_base(__self: *const L4CapDataspace, grant: c_uint, base: c_ulong) -> c_ulong;
      pub fn l4_cap_dataspace_invalidate(__self: *mut L4CapDataspace);
      pub fn l4_cap_mem_alloc_new_1(cap: c_ulong) -> L4CapMemAlloc;
      pub fn l4_cap_mem_alloc_new_2(cap: c_uint) -> L4CapMemAlloc;
      pub fn l4_cap_mem_alloc_new_3(idx: c_ulong) -> L4CapMemAlloc;
      pub fn l4_cap_mem_alloc_new_4(_1: c_uint) -> L4CapMemAlloc;
      pub fn l4_cap_mem_alloc_move_1(__self: *const L4CapMemAlloc, src: *const L4CapMemAlloc) -> L4CapMemAlloc;
      pub fn l4_cap_mem_alloc_copy_1(__self: *const L4CapMemAlloc, src: *const L4CapMemAlloc) -> L4CapMemAlloc;
      pub fn l4_cap_mem_alloc_access(__self: *const L4CapMemAlloc) -> L4ReMemAlloc;
      pub fn l4_cap_mem_alloc_copy_2(_1: *const L4CapMemAlloc) -> L4CapMemAlloc;
      pub fn l4_cap_mem_alloc_move_2(_1: *mut L4CapMemAlloc) -> L4CapMemAlloc;
      pub fn l4_cap_mem_alloc_delete(__self: *const L4CapMemAlloc);
      pub fn l4_cap_mem_alloc_new_mem_alloc(o: *const L4CapMemAlloc) -> L4CapMemAlloc;
      pub fn l4_cap_mem_alloc_cap(__self: *const L4CapMemAlloc) -> c_ulong;
      pub fn l4_cap_mem_alloc_is_valid(__self: *const L4CapMemAlloc) -> c_int;
      pub fn l4_cap_mem_alloc_snd_base(__self: *const L4CapMemAlloc, grant: c_uint, base: c_ulong) -> c_ulong;
      pub fn l4_cap_mem_alloc_invalidate(__self: *mut L4CapMemAlloc);
      pub fn l4_cap_rm_new_1(cap: c_ulong) -> L4CapRm;
      pub fn l4_cap_rm_new_2(cap: c_uint) -> L4CapRm;
      pub fn l4_cap_rm_new_3(idx: c_ulong) -> L4CapRm;
      pub fn l4_cap_rm_new_4(_1: c_uint) -> L4CapRm;
      pub fn l4_cap_rm_move_1(__self: *const L4CapRm, src: *const L4CapRm) -> L4CapRm;
      pub fn l4_cap_rm_copy_1(__self: *const L4CapRm, src: *const L4CapRm) -> L4CapRm;
      pub fn l4_cap_rm_access(__self: *const L4CapRm) -> L4ReRm;
      pub fn l4_cap_rm_delete(__self: *const L4CapRm);
      pub fn l4_cap_rm_copy_2(_1: *const L4CapRm) -> L4CapRm;
      pub fn l4_cap_rm_move_2(_1: *mut L4CapRm) -> L4CapRm;
      pub fn l4_cap_rm_copy_assign(__self: *mut L4CapRm, _1: *const L4CapRm) -> L4CapRm;
      pub fn l4_cap_rm_move_assign(__self: *mut L4CapRm, _1: *mut L4CapRm) -> L4CapRm;
      pub fn l4_cap_rm_new_rm(o: *const L4CapRm) -> L4CapRm;
      pub fn l4_cap_rm_cap(__self: *const L4CapRm) -> c_ulong;
      pub fn l4_cap_rm_is_valid(__self: *const L4CapRm) -> c_int;
      pub fn l4_cap_rm_snd_base(__self: *const L4CapRm, grant: c_uint, base: c_ulong) -> c_ulong;
      pub fn l4_cap_rm_invalidate(__self: *mut L4CapRm);
      pub fn l4_cap_dummy_kobject_new_1(cap: c_ulong) -> L4CapDummyKobject;
      pub fn l4_cap_dummy_kobject_new_2(cap: c_uint) -> L4CapDummyKobject;
      pub fn l4_cap_dummy_kobject_new_3(idx: c_ulong) -> L4CapDummyKobject;
      pub fn l4_cap_dummy_kobject_new_4(_1: c_uint) -> L4CapDummyKobject;
      pub fn l4_cap_dummy_kobject_move_1(__self: *const L4CapDummyKobject, src: *const L4CapDummyKobject) -> L4CapDummyKobject;
      pub fn l4_cap_dummy_kobject_copy_1(__self: *const L4CapDummyKobject, src: *const L4CapDummyKobject) -> L4CapDummyKobject;
      pub fn l4_cap_dummy_kobject_access(__self: *const L4CapDummyKobject) -> DummyKobject;
      pub fn l4_cap_dummy_kobject_copy_2(_1: *const L4CapDummyKobject) -> L4CapDummyKobject;
      pub fn l4_cap_dummy_kobject_move_2(_1: *mut L4CapDummyKobject) -> L4CapDummyKobject;
      pub fn l4_cap_dummy_kobject_delete(__self: *const L4CapDummyKobject);
      pub fn l4_cap_dummy_kobject_new_dummy_kobject(o: *const L4CapDummyKobject) -> L4CapDummyKobject;
      pub fn l4_cap_dummy_kobject_cap(__self: *const L4CapDummyKobject) -> c_ulong;
      pub fn l4_cap_dummy_kobject_is_valid(__self: *const L4CapDummyKobject) -> c_int;
      pub fn l4_cap_dummy_kobject_snd_base(__self: *const L4CapDummyKobject, grant: c_uint, base: c_ulong) -> c_ulong;
      pub fn l4_cap_dummy_kobject_invalidate(__self: *mut L4CapDummyKobject);
  }
}

type L4CapIdxT = c_ulong;
type L4UmwordT = c_ulong;

#[repr(C)]
union L4CapTaskUnion {
    mem: [c_char; 8],
    ptr: *mut c_void,
}

#[repr(C)]
pub struct L4CapTask {
    obj : L4CapTaskUnion,

    is_const: c_char,
    is_owning: c_char,
}

impl L4CapTask {
    pub unsafe fn new_1(cap: c_ulong) -> L4CapTask {
        let _cap: c_ulong;

        _cap = cap as c_ulong;

        let __ret = capability_c::l4_cap_task_new_1(_cap);

        __ret
    }

    pub unsafe fn new_2(cap: c_uint) -> L4CapTask {
        let _cap: c_uint;

        _cap = cap as c_uint;

        let __ret = capability_c::l4_cap_task_new_2(_cap);

        __ret
    }

    pub unsafe fn new_3(idx: L4CapIdxT) -> L4CapTask {
        let _idx: c_ulong;

        _idx = idx;

        let __ret = capability_c::l4_cap_task_new_3(_idx);

        __ret
    }

    pub unsafe fn new_4(_1: c_uint) -> L4CapTask {
        let __1: c_uint;

        __1 = _1 as c_uint;

        let __ret = capability_c::l4_cap_task_new_4(__1);

        __ret
    }

    pub unsafe fn move_1<'_0>(&self, src: &'_0 L4CapTask) -> L4CapTask {
        let ___self: *const L4CapTask;
        let _src: *const L4CapTask;

        ___self = self as *const L4CapTask;

        _src = src;

        let __ret = capability_c::l4_cap_task_move_1(___self, _src);

        __ret
    }

    pub unsafe fn copy_1<'_0>(&self, src: &'_0 L4CapTask) -> L4CapTask {
        let ___self: *const L4CapTask;
        let _src: *const L4CapTask;

        ___self = self as *const L4CapTask;

        _src = src;

        let __ret = capability_c::l4_cap_task_copy_1(___self, _src);

        __ret
    }

    pub unsafe fn new_task<'_0>(o: &'_0 L4CapTask) -> L4CapTask {
        let _o: *const L4CapTask;

        _o = o;

        let __ret = capability_c::l4_cap_task_new_task(_o);

        __ret
    }

    pub unsafe fn cap(&self) -> L4CapIdxT {
        let ___self: *const L4CapTask;

        ___self = self as *const L4CapTask;

        let __ret = capability_c::l4_cap_task_cap(___self);

        __ret
    }

    pub unsafe fn is_valid(&self) -> bool {
        let ___self: *const L4CapTask;

        ___self = self as *const L4CapTask;

        let __ret = capability_c::l4_cap_task_is_valid(___self) != 0;

        __ret
    }

    pub unsafe fn snd_base(&self, grant: c_uint, base: L4CapIdxT) -> L4UmwordT {
        let ___self: *const L4CapTask;
        let _grant: c_uint;
        let _base: c_ulong;

        ___self = self as *const L4CapTask;

        _grant = grant;

        _base = base;

        let __ret = capability_c::l4_cap_task_snd_base(___self, _grant, _base);

        __ret
    }

    pub unsafe fn invalidate(&mut self) {
        let ___self: *mut L4CapTask;

        ___self = self as *mut L4CapTask;

        capability_c::l4_cap_task_invalidate(___self)
    }
}

impl Clone for L4CapTask {
    fn clone(&self) -> L4CapTask {
        unsafe {
            capability_c::l4_cap_task_copy_2(self as *const L4CapTask)
        }
    }
}

impl Drop for L4CapTask {
    fn drop(&mut self) {
        unsafe {
            if self.is_owning == 0{
                return;
            }

            let ___self: *const L4CapTask;

            ___self = self as *const L4CapTask;

            capability_c::l4_cap_task_delete(___self)
        }
    }
}

#[repr(C)]
union L4CapKobjectUnion {
    mem: [c_char; 8],
    ptr: *mut c_void,
}

#[repr(C)]
pub struct L4CapKobject {
    obj : L4CapKobjectUnion,

    is_const: c_char,
    is_owning: c_char,
}

impl L4CapKobject {
    pub unsafe fn new_1(cap: c_ulong) -> L4CapKobject {
        let _cap: c_ulong;

        _cap = cap as c_ulong;

        let __ret = capability_c::l4_cap_kobject_new_1(_cap);

        __ret
    }

    pub unsafe fn new_2(cap: c_uint) -> L4CapKobject {
        let _cap: c_uint;

        _cap = cap as c_uint;

        let __ret = capability_c::l4_cap_kobject_new_2(_cap);

        __ret
    }

    pub unsafe fn new_3(idx: L4CapIdxT) -> L4CapKobject {
        let _idx: c_ulong;

        _idx = idx;

        let __ret = capability_c::l4_cap_kobject_new_3(_idx);

        __ret
    }

    pub unsafe fn new_4(_1: c_uint) -> L4CapKobject {
        let __1: c_uint;

        __1 = _1 as c_uint;

        let __ret = capability_c::l4_cap_kobject_new_4(__1);

        __ret
    }

    pub unsafe fn move_<'_0>(&self, src: &'_0 L4CapKobject) -> L4CapKobject {
        let ___self: *const L4CapKobject;
        let _src: *const L4CapKobject;

        ___self = self as *const L4CapKobject;

        _src = src;

        let __ret = capability_c::l4_cap_kobject_move(___self, _src);

        __ret
    }

    pub unsafe fn copy<'_0>(&self, src: &'_0 L4CapKobject) -> L4CapKobject {
        let ___self: *const L4CapKobject;
        let _src: *const L4CapKobject;

        ___self = self as *const L4CapKobject;

        _src = src;

        let __ret = capability_c::l4_cap_kobject_copy(___self, _src);

        __ret
    }

    pub unsafe fn cap(&self) -> L4CapIdxT {
        let ___self: *const L4CapKobject;

        ___self = self as *const L4CapKobject;

        let __ret = capability_c::l4_cap_kobject_cap(___self);

        __ret
    }

    pub unsafe fn is_valid(&self) -> bool {
        let ___self: *const L4CapKobject;

        ___self = self as *const L4CapKobject;

        let __ret = capability_c::l4_cap_kobject_is_valid(___self) != 0;

        __ret
    }

    pub unsafe fn snd_base(&self, grant: c_uint, base: L4CapIdxT) -> L4UmwordT {
        let ___self: *const L4CapKobject;
        let _grant: c_uint;
        let _base: c_ulong;

        ___self = self as *const L4CapKobject;

        _grant = grant;

        _base = base;

        let __ret = capability_c::l4_cap_kobject_snd_base(___self, _grant, _base);

        __ret
    }

    pub unsafe fn invalidate(&mut self) {
        let ___self: *mut L4CapKobject;

        ___self = self as *mut L4CapKobject;

        capability_c::l4_cap_kobject_invalidate(___self)
    }
}

#[repr(C)]
union L4CapMetaUnion {
    mem: [c_char; 8],
    ptr: *mut c_void,
}

#[repr(C)]
pub struct L4CapMeta {
    obj : L4CapMetaUnion,

    is_const: c_char,
    is_owning: c_char,
}

impl L4CapMeta {
    pub unsafe fn new_1(cap: c_ulong) -> L4CapMeta {
        let _cap: c_ulong;

        _cap = cap as c_ulong;

        let __ret = capability_c::l4_cap_meta_new_1(_cap);

        __ret
    }

    pub unsafe fn new_2(cap: c_uint) -> L4CapMeta {
        let _cap: c_uint;

        _cap = cap as c_uint;

        let __ret = capability_c::l4_cap_meta_new_2(_cap);

        __ret
    }

    pub unsafe fn new_3(idx: L4CapIdxT) -> L4CapMeta {
        let _idx: c_ulong;

        _idx = idx;

        let __ret = capability_c::l4_cap_meta_new_3(_idx);

        __ret
    }

    pub unsafe fn new_4(_1: c_uint) -> L4CapMeta {
        let __1: c_uint;

        __1 = _1 as c_uint;

        let __ret = capability_c::l4_cap_meta_new_4(__1);

        __ret
    }

    pub unsafe fn move_<'_0>(&self, src: &'_0 L4CapMeta) -> L4CapMeta {
        let ___self: *const L4CapMeta;
        let _src: *const L4CapMeta;

        ___self = self as *const L4CapMeta;

        _src = src;

        let __ret = capability_c::l4_cap_meta_move(___self, _src);

        __ret
    }

    pub unsafe fn copy<'_0>(&self, src: &'_0 L4CapMeta) -> L4CapMeta {
        let ___self: *const L4CapMeta;
        let _src: *const L4CapMeta;

        ___self = self as *const L4CapMeta;

        _src = src;

        let __ret = capability_c::l4_cap_meta_copy(___self, _src);

        __ret
    }

    pub unsafe fn cap(&self) -> L4CapIdxT {
        let ___self: *const L4CapMeta;

        ___self = self as *const L4CapMeta;

        let __ret = capability_c::l4_cap_meta_cap(___self);

        __ret
    }

    pub unsafe fn is_valid(&self) -> bool {
        let ___self: *const L4CapMeta;

        ___self = self as *const L4CapMeta;

        let __ret = capability_c::l4_cap_meta_is_valid(___self) != 0;

        __ret
    }

    pub unsafe fn snd_base(&self, grant: c_uint, base: L4CapIdxT) -> L4UmwordT {
        let ___self: *const L4CapMeta;
        let _grant: c_uint;
        let _base: c_ulong;

        ___self = self as *const L4CapMeta;

        _grant = grant;

        _base = base;

        let __ret = capability_c::l4_cap_meta_snd_base(___self, _grant, _base);

        __ret
    }

    pub unsafe fn invalidate(&mut self) {
        let ___self: *mut L4CapMeta;

        ___self = self as *mut L4CapMeta;

        capability_c::l4_cap_meta_invalidate(___self)
    }
}

#[repr(C)]
union L4CapVoidUnion {
    mem: [c_char; 8],
    ptr: *mut c_void,
}

#[repr(C)]
pub struct L4CapVoid {
    obj : L4CapVoidUnion,

    is_const: c_char,
    is_owning: c_char,
}

impl L4CapVoid {
    pub unsafe fn new_1(p: *const c_void) -> L4CapVoid {
        let _p: *const c_void;

        _p = p;

        let __ret = capability_c::l4_cap_void_new_1(_p);

        __ret
    }

    pub unsafe fn new_2(cap: c_ulong) -> L4CapVoid {
        let _cap: c_ulong;

        _cap = cap as c_ulong;

        let __ret = capability_c::l4_cap_void_new_2(_cap);

        __ret
    }

    pub unsafe fn new_3(cap: c_uint) -> L4CapVoid {
        let _cap: c_uint;

        _cap = cap as c_uint;

        let __ret = capability_c::l4_cap_void_new_3(_cap);

        __ret
    }

    pub unsafe fn new_4(idx: L4CapIdxT) -> L4CapVoid {
        let _idx: c_ulong;

        _idx = idx;

        let __ret = capability_c::l4_cap_void_new_4(_idx);

        __ret
    }

    pub unsafe fn new_5(_1: c_uint) -> L4CapVoid {
        let __1: c_uint;

        __1 = _1 as c_uint;

        let __ret = capability_c::l4_cap_void_new_5(__1);

        __ret
    }

    pub unsafe fn move_1<'_0>(&self, src: &'_0 L4CapVoid) -> L4CapVoid {
        let ___self: *const L4CapVoid;
        let _src: *const L4CapVoid;

        ___self = self as *const L4CapVoid;

        _src = src;

        let __ret = capability_c::l4_cap_void_move_1(___self, _src);

        __ret
    }

    pub unsafe fn copy_1<'_0>(&self, src: &'_0 L4CapVoid) -> L4CapVoid {
        let ___self: *const L4CapVoid;
        let _src: *const L4CapVoid;

        ___self = self as *const L4CapVoid;

        _src = src;

        let __ret = capability_c::l4_cap_void_copy_1(___self, _src);

        __ret
    }

    pub unsafe fn new_void<'_0>(o: &'_0 L4CapVoid) -> L4CapVoid {
        let _o: *const L4CapVoid;

        _o = o;

        let __ret = capability_c::l4_cap_void_new_void(_o);

        __ret
    }

    pub unsafe fn cap(&self) -> L4CapIdxT {
        let ___self: *const L4CapVoid;

        ___self = self as *const L4CapVoid;

        let __ret = capability_c::l4_cap_void_cap(___self);

        __ret
    }

    pub unsafe fn is_valid(&self) -> bool {
        let ___self: *const L4CapVoid;

        ___self = self as *const L4CapVoid;

        let __ret = capability_c::l4_cap_void_is_valid(___self) != 0;

        __ret
    }

    pub unsafe fn snd_base(&self, grant: c_uint, base: L4CapIdxT) -> L4UmwordT {
        let ___self: *const L4CapVoid;
        let _grant: c_uint;
        let _base: c_ulong;

        ___self = self as *const L4CapVoid;

        _grant = grant;

        _base = base;

        let __ret = capability_c::l4_cap_void_snd_base(___self, _grant, _base);

        __ret
    }

    pub unsafe fn invalidate(&mut self) {
        let ___self: *mut L4CapVoid;

        ___self = self as *mut L4CapVoid;

        capability_c::l4_cap_void_invalidate(___self)
    }
}

impl Clone for L4CapVoid {
    fn clone(&self) -> L4CapVoid {
        unsafe {
            capability_c::l4_cap_void_copy_2(self as *const L4CapVoid)
        }
    }
}

impl Drop for L4CapVoid {
    fn drop(&mut self) {
        unsafe {
            if self.is_owning == 0{
                return;
            }

            let ___self: *const L4CapVoid;

            ___self = self as *const L4CapVoid;

            capability_c::l4_cap_void_delete(___self)
        }
    }
}

#[repr(C)]
union L4CapFactoryUnion {
    mem: [c_char; 8],
    ptr: *mut c_void,
}

#[repr(C)]
pub struct L4CapFactory {
    obj : L4CapFactoryUnion,

    is_const: c_char,
    is_owning: c_char,
}

impl L4CapFactory {
    pub unsafe fn new_1(cap: c_ulong) -> L4CapFactory {
        let _cap: c_ulong;

        _cap = cap as c_ulong;

        let __ret = capability_c::l4_cap_factory_new_1(_cap);

        __ret
    }

    pub unsafe fn new_2(cap: c_uint) -> L4CapFactory {
        let _cap: c_uint;

        _cap = cap as c_uint;

        let __ret = capability_c::l4_cap_factory_new_2(_cap);

        __ret
    }

    pub unsafe fn new_3(idx: L4CapIdxT) -> L4CapFactory {
        let _idx: c_ulong;

        _idx = idx;

        let __ret = capability_c::l4_cap_factory_new_3(_idx);

        __ret
    }

    pub unsafe fn new_4(_1: c_uint) -> L4CapFactory {
        let __1: c_uint;

        __1 = _1 as c_uint;

        let __ret = capability_c::l4_cap_factory_new_4(__1);

        __ret
    }

    pub unsafe fn move_<'_0>(&self, src: &'_0 L4CapFactory) -> L4CapFactory {
        let ___self: *const L4CapFactory;
        let _src: *const L4CapFactory;

        ___self = self as *const L4CapFactory;

        _src = src;

        let __ret = capability_c::l4_cap_factory_move(___self, _src);

        __ret
    }

    pub unsafe fn copy<'_0>(&self, src: &'_0 L4CapFactory) -> L4CapFactory {
        let ___self: *const L4CapFactory;
        let _src: *const L4CapFactory;

        ___self = self as *const L4CapFactory;

        _src = src;

        let __ret = capability_c::l4_cap_factory_copy(___self, _src);

        __ret
    }

    pub unsafe fn cap(&self) -> L4CapIdxT {
        let ___self: *const L4CapFactory;

        ___self = self as *const L4CapFactory;

        let __ret = capability_c::l4_cap_factory_cap(___self);

        __ret
    }

    pub unsafe fn is_valid(&self) -> bool {
        let ___self: *const L4CapFactory;

        ___self = self as *const L4CapFactory;

        let __ret = capability_c::l4_cap_factory_is_valid(___self) != 0;

        __ret
    }

    pub unsafe fn snd_base(&self, grant: c_uint, base: L4CapIdxT) -> L4UmwordT {
        let ___self: *const L4CapFactory;
        let _grant: c_uint;
        let _base: c_ulong;

        ___self = self as *const L4CapFactory;

        _grant = grant;

        _base = base;

        let __ret = capability_c::l4_cap_factory_snd_base(___self, _grant, _base);

        __ret
    }

    pub unsafe fn invalidate(&mut self) {
        let ___self: *mut L4CapFactory;

        ___self = self as *mut L4CapFactory;

        capability_c::l4_cap_factory_invalidate(___self)
    }
}

#[repr(C)]
union L4CapThreadUnion {
    mem: [c_char; 8],
    ptr: *mut c_void,
}

#[repr(C)]
pub struct L4CapThread {
    obj : L4CapThreadUnion,

    is_const: c_char,
    is_owning: c_char,
}

impl L4CapThread {
    pub unsafe fn new_1(cap: c_ulong) -> L4CapThread {
        let _cap: c_ulong;

        _cap = cap as c_ulong;

        let __ret = capability_c::l4_cap_thread_new_1(_cap);

        __ret
    }

    pub unsafe fn new_2(cap: c_uint) -> L4CapThread {
        let _cap: c_uint;

        _cap = cap as c_uint;

        let __ret = capability_c::l4_cap_thread_new_2(_cap);

        __ret
    }

    pub unsafe fn new_3(idx: L4CapIdxT) -> L4CapThread {
        let _idx: c_ulong;

        _idx = idx;

        let __ret = capability_c::l4_cap_thread_new_3(_idx);

        __ret
    }

    pub unsafe fn new_4(_1: c_uint) -> L4CapThread {
        let __1: c_uint;

        __1 = _1 as c_uint;

        let __ret = capability_c::l4_cap_thread_new_4(__1);

        __ret
    }

    pub unsafe fn move_<'_0>(&self, src: &'_0 L4CapThread) -> L4CapThread {
        let ___self: *const L4CapThread;
        let _src: *const L4CapThread;

        ___self = self as *const L4CapThread;

        _src = src;

        let __ret = capability_c::l4_cap_thread_move(___self, _src);

        __ret
    }

    pub unsafe fn copy<'_0>(&self, src: &'_0 L4CapThread) -> L4CapThread {
        let ___self: *const L4CapThread;
        let _src: *const L4CapThread;

        ___self = self as *const L4CapThread;

        _src = src;

        let __ret = capability_c::l4_cap_thread_copy(___self, _src);

        __ret
    }

    pub unsafe fn cap(&self) -> L4CapIdxT {
        let ___self: *const L4CapThread;

        ___self = self as *const L4CapThread;

        let __ret = capability_c::l4_cap_thread_cap(___self);

        __ret
    }

    pub unsafe fn is_valid(&self) -> bool {
        let ___self: *const L4CapThread;

        ___self = self as *const L4CapThread;

        let __ret = capability_c::l4_cap_thread_is_valid(___self) != 0;

        __ret
    }

    pub unsafe fn snd_base(&self, grant: c_uint, base: L4CapIdxT) -> L4UmwordT {
        let ___self: *const L4CapThread;
        let _grant: c_uint;
        let _base: c_ulong;

        ___self = self as *const L4CapThread;

        _grant = grant;

        _base = base;

        let __ret = capability_c::l4_cap_thread_snd_base(___self, _grant, _base);

        __ret
    }

    pub unsafe fn invalidate(&mut self) {
        let ___self: *mut L4CapThread;

        ___self = self as *mut L4CapThread;

        capability_c::l4_cap_thread_invalidate(___self)
    }
}

#[repr(C)]
union L4CapIrqUnion {
    mem: [c_char; 8],
    ptr: *mut c_void,
}

#[repr(C)]
pub struct L4CapIrq {
    obj : L4CapIrqUnion,

    is_const: c_char,
    is_owning: c_char,
}

impl L4CapIrq {
    pub unsafe fn new_1(cap: c_ulong) -> L4CapIrq {
        let _cap: c_ulong;

        _cap = cap as c_ulong;

        let __ret = capability_c::l4_cap_irq_new_1(_cap);

        __ret
    }

    pub unsafe fn new_2(cap: c_uint) -> L4CapIrq {
        let _cap: c_uint;

        _cap = cap as c_uint;

        let __ret = capability_c::l4_cap_irq_new_2(_cap);

        __ret
    }

    pub unsafe fn new_3(idx: L4CapIdxT) -> L4CapIrq {
        let _idx: c_ulong;

        _idx = idx;

        let __ret = capability_c::l4_cap_irq_new_3(_idx);

        __ret
    }

    pub unsafe fn new_4(_1: c_uint) -> L4CapIrq {
        let __1: c_uint;

        __1 = _1 as c_uint;

        let __ret = capability_c::l4_cap_irq_new_4(__1);

        __ret
    }

    pub unsafe fn move_<'_0>(&self, src: &'_0 L4CapIrq) -> L4CapIrq {
        let ___self: *const L4CapIrq;
        let _src: *const L4CapIrq;

        ___self = self as *const L4CapIrq;

        _src = src;

        let __ret = capability_c::l4_cap_irq_move(___self, _src);

        __ret
    }

    pub unsafe fn copy<'_0>(&self, src: &'_0 L4CapIrq) -> L4CapIrq {
        let ___self: *const L4CapIrq;
        let _src: *const L4CapIrq;

        ___self = self as *const L4CapIrq;

        _src = src;

        let __ret = capability_c::l4_cap_irq_copy(___self, _src);

        __ret
    }

    pub unsafe fn cap(&self) -> L4CapIdxT {
        let ___self: *const L4CapIrq;

        ___self = self as *const L4CapIrq;

        let __ret = capability_c::l4_cap_irq_cap(___self);

        __ret
    }

    pub unsafe fn is_valid(&self) -> bool {
        let ___self: *const L4CapIrq;

        ___self = self as *const L4CapIrq;

        let __ret = capability_c::l4_cap_irq_is_valid(___self) != 0;

        __ret
    }

    pub unsafe fn snd_base(&self, grant: c_uint, base: L4CapIdxT) -> L4UmwordT {
        let ___self: *const L4CapIrq;
        let _grant: c_uint;
        let _base: c_ulong;

        ___self = self as *const L4CapIrq;

        _grant = grant;

        _base = base;

        let __ret = capability_c::l4_cap_irq_snd_base(___self, _grant, _base);

        __ret
    }

    pub unsafe fn invalidate(&mut self) {
        let ___self: *mut L4CapIrq;

        ___self = self as *mut L4CapIrq;

        capability_c::l4_cap_irq_invalidate(___self)
    }
}

#[repr(C)]
union L4CapVmUnion {
    mem: [c_char; 8],
    ptr: *mut c_void,
}

#[repr(C)]
pub struct L4CapVm {
    obj : L4CapVmUnion,

    is_const: c_char,
    is_owning: c_char,
}

impl L4CapVm {
    pub unsafe fn new_1(cap: c_ulong) -> L4CapVm {
        let _cap: c_ulong;

        _cap = cap as c_ulong;

        let __ret = capability_c::l4_cap_vm_new_1(_cap);

        __ret
    }

    pub unsafe fn new_2(cap: c_uint) -> L4CapVm {
        let _cap: c_uint;

        _cap = cap as c_uint;

        let __ret = capability_c::l4_cap_vm_new_2(_cap);

        __ret
    }

    pub unsafe fn new_3(idx: L4CapIdxT) -> L4CapVm {
        let _idx: c_ulong;

        _idx = idx;

        let __ret = capability_c::l4_cap_vm_new_3(_idx);

        __ret
    }

    pub unsafe fn new_4(_1: c_uint) -> L4CapVm {
        let __1: c_uint;

        __1 = _1 as c_uint;

        let __ret = capability_c::l4_cap_vm_new_4(__1);

        __ret
    }

    pub unsafe fn move_<'_0>(&self, src: &'_0 L4CapVm) -> L4CapVm {
        let ___self: *const L4CapVm;
        let _src: *const L4CapVm;

        ___self = self as *const L4CapVm;

        _src = src;

        let __ret = capability_c::l4_cap_vm_move(___self, _src);

        __ret
    }

    pub unsafe fn copy<'_0>(&self, src: &'_0 L4CapVm) -> L4CapVm {
        let ___self: *const L4CapVm;
        let _src: *const L4CapVm;

        ___self = self as *const L4CapVm;

        _src = src;

        let __ret = capability_c::l4_cap_vm_copy(___self, _src);

        __ret
    }

    pub unsafe fn cap(&self) -> L4CapIdxT {
        let ___self: *const L4CapVm;

        ___self = self as *const L4CapVm;

        let __ret = capability_c::l4_cap_vm_cap(___self);

        __ret
    }

    pub unsafe fn is_valid(&self) -> bool {
        let ___self: *const L4CapVm;

        ___self = self as *const L4CapVm;

        let __ret = capability_c::l4_cap_vm_is_valid(___self) != 0;

        __ret
    }

    pub unsafe fn snd_base(&self, grant: c_uint, base: L4CapIdxT) -> L4UmwordT {
        let ___self: *const L4CapVm;
        let _grant: c_uint;
        let _base: c_ulong;

        ___self = self as *const L4CapVm;

        _grant = grant;

        _base = base;

        let __ret = capability_c::l4_cap_vm_snd_base(___self, _grant, _base);

        __ret
    }

    pub unsafe fn invalidate(&mut self) {
        let ___self: *mut L4CapVm;

        ___self = self as *mut L4CapVm;

        capability_c::l4_cap_vm_invalidate(___self)
    }
}

#[repr(C)]
union L4ReDataspaceUnion {
    mem: [c_char; 4],
    ptr: *mut c_void,
}

#[repr(C)]
pub struct L4ReDataspace {
    obj : L4ReDataspaceUnion,

    is_const: c_char,
    is_owning: c_char,
}

#[repr(C)]
union L4ReMemAllocUnion {
    mem: [c_char; 1],
    ptr: *mut c_void,
}

#[repr(C)]
pub struct L4ReMemAlloc {
    obj : L4ReMemAllocUnion,

    is_const: c_char,
    is_owning: c_char,
}

#[repr(C)]
union L4ReRmUnion {
    mem: [c_char; 5],
    ptr: *mut c_void,
}

#[repr(C)]
pub struct L4ReRm {
    obj : L4ReRmUnion,

    is_const: c_char,
    is_owning: c_char,
}

#[repr(C)]
union L4CapDataspaceUnion {
    mem: [c_char; 8],
    ptr: *mut c_void,
}

#[repr(C)]
pub struct L4CapDataspace {
    obj : L4CapDataspaceUnion,

    is_const: c_char,
    is_owning: c_char,
}

impl L4CapDataspace {
    pub unsafe fn new_1(cap: c_ulong) -> L4CapDataspace {
        let _cap: c_ulong;

        _cap = cap as c_ulong;

        let __ret = capability_c::l4_cap_dataspace_new_1(_cap);

        __ret
    }

    pub unsafe fn new_2(cap: c_uint) -> L4CapDataspace {
        let _cap: c_uint;

        _cap = cap as c_uint;

        let __ret = capability_c::l4_cap_dataspace_new_2(_cap);

        __ret
    }

    pub unsafe fn new_3(idx: L4CapIdxT) -> L4CapDataspace {
        let _idx: c_ulong;

        _idx = idx;

        let __ret = capability_c::l4_cap_dataspace_new_3(_idx);

        __ret
    }

    pub unsafe fn new_4(_1: c_uint) -> L4CapDataspace {
        let __1: c_uint;

        __1 = _1 as c_uint;

        let __ret = capability_c::l4_cap_dataspace_new_4(__1);

        __ret
    }

    pub unsafe fn move_1<'_0>(&self, src: &'_0 L4CapDataspace) -> L4CapDataspace {
        let ___self: *const L4CapDataspace;
        let _src: *const L4CapDataspace;

        ___self = self as *const L4CapDataspace;

        _src = src;

        let __ret = capability_c::l4_cap_dataspace_move_1(___self, _src);

        __ret
    }

    pub unsafe fn copy_1<'_0>(&self, src: &'_0 L4CapDataspace) -> L4CapDataspace {
        let ___self: *const L4CapDataspace;
        let _src: *const L4CapDataspace;

        ___self = self as *const L4CapDataspace;

        _src = src;

        let __ret = capability_c::l4_cap_dataspace_copy_1(___self, _src);

        __ret
    }

    pub unsafe fn access(&self) -> L4ReDataspace {
        let ___self: *const L4CapDataspace;

        ___self = self as *const L4CapDataspace;

        let __ret = capability_c::l4_cap_dataspace_access(___self);

        __ret
    }

    pub unsafe fn new_dataspace<'_0>(o: &'_0 L4CapDataspace) -> L4CapDataspace {
        let _o: *const L4CapDataspace;

        _o = o;

        let __ret = capability_c::l4_cap_dataspace_new_dataspace(_o);

        __ret
    }

    pub unsafe fn cap(&self) -> L4CapIdxT {
        let ___self: *const L4CapDataspace;

        ___self = self as *const L4CapDataspace;

        let __ret = capability_c::l4_cap_dataspace_cap(___self);

        __ret
    }

    pub unsafe fn is_valid(&self) -> bool {
        let ___self: *const L4CapDataspace;

        ___self = self as *const L4CapDataspace;

        let __ret = capability_c::l4_cap_dataspace_is_valid(___self) != 0;

        __ret
    }

    pub unsafe fn snd_base(&self, grant: c_uint, base: L4CapIdxT) -> L4UmwordT {
        let ___self: *const L4CapDataspace;
        let _grant: c_uint;
        let _base: c_ulong;

        ___self = self as *const L4CapDataspace;

        _grant = grant;

        _base = base;

        let __ret = capability_c::l4_cap_dataspace_snd_base(___self, _grant, _base);

        __ret
    }

    pub unsafe fn invalidate(&mut self) {
        let ___self: *mut L4CapDataspace;

        ___self = self as *mut L4CapDataspace;

        capability_c::l4_cap_dataspace_invalidate(___self)
    }
}

impl Clone for L4CapDataspace {
    fn clone(&self) -> L4CapDataspace {
        unsafe {
            capability_c::l4_cap_dataspace_copy_2(self as *const L4CapDataspace)
        }
    }
}

impl Drop for L4CapDataspace {
    fn drop(&mut self) {
        unsafe {
            if self.is_owning == 0{
                return;
            }

            let ___self: *const L4CapDataspace;

            ___self = self as *const L4CapDataspace;

            capability_c::l4_cap_dataspace_delete(___self)
        }
    }
}

#[repr(C)]
union L4CapMemAllocUnion {
    mem: [c_char; 8],
    ptr: *mut c_void,
}

#[repr(C)]
pub struct L4CapMemAlloc {
    obj : L4CapMemAllocUnion,

    is_const: c_char,
    is_owning: c_char,
}

impl L4CapMemAlloc {
    pub unsafe fn new_1(cap: c_ulong) -> L4CapMemAlloc {
        let _cap: c_ulong;

        _cap = cap as c_ulong;

        let __ret = capability_c::l4_cap_mem_alloc_new_1(_cap);

        __ret
    }

    pub unsafe fn new_2(cap: c_uint) -> L4CapMemAlloc {
        let _cap: c_uint;

        _cap = cap as c_uint;

        let __ret = capability_c::l4_cap_mem_alloc_new_2(_cap);

        __ret
    }

    pub unsafe fn new_3(idx: L4CapIdxT) -> L4CapMemAlloc {
        let _idx: c_ulong;

        _idx = idx;

        let __ret = capability_c::l4_cap_mem_alloc_new_3(_idx);

        __ret
    }

    pub unsafe fn new_4(_1: c_uint) -> L4CapMemAlloc {
        let __1: c_uint;

        __1 = _1 as c_uint;

        let __ret = capability_c::l4_cap_mem_alloc_new_4(__1);

        __ret
    }

    pub unsafe fn move_1<'_0>(&self, src: &'_0 L4CapMemAlloc) -> L4CapMemAlloc {
        let ___self: *const L4CapMemAlloc;
        let _src: *const L4CapMemAlloc;

        ___self = self as *const L4CapMemAlloc;

        _src = src;

        let __ret = capability_c::l4_cap_mem_alloc_move_1(___self, _src);

        __ret
    }

    pub unsafe fn copy_1<'_0>(&self, src: &'_0 L4CapMemAlloc) -> L4CapMemAlloc {
        let ___self: *const L4CapMemAlloc;
        let _src: *const L4CapMemAlloc;

        ___self = self as *const L4CapMemAlloc;

        _src = src;

        let __ret = capability_c::l4_cap_mem_alloc_copy_1(___self, _src);

        __ret
    }

    pub unsafe fn access(&self) -> L4ReMemAlloc {
        let ___self: *const L4CapMemAlloc;

        ___self = self as *const L4CapMemAlloc;

        let __ret = capability_c::l4_cap_mem_alloc_access(___self);

        __ret
    }

    pub unsafe fn new_mem_alloc<'_0>(o: &'_0 L4CapMemAlloc) -> L4CapMemAlloc {
        let _o: *const L4CapMemAlloc;

        _o = o;

        let __ret = capability_c::l4_cap_mem_alloc_new_mem_alloc(_o);

        __ret
    }

    pub unsafe fn cap(&self) -> L4CapIdxT {
        let ___self: *const L4CapMemAlloc;

        ___self = self as *const L4CapMemAlloc;

        let __ret = capability_c::l4_cap_mem_alloc_cap(___self);

        __ret
    }

    pub unsafe fn is_valid(&self) -> bool {
        let ___self: *const L4CapMemAlloc;

        ___self = self as *const L4CapMemAlloc;

        let __ret = capability_c::l4_cap_mem_alloc_is_valid(___self) != 0;

        __ret
    }

    pub unsafe fn snd_base(&self, grant: c_uint, base: L4CapIdxT) -> L4UmwordT {
        let ___self: *const L4CapMemAlloc;
        let _grant: c_uint;
        let _base: c_ulong;

        ___self = self as *const L4CapMemAlloc;

        _grant = grant;

        _base = base;

        let __ret = capability_c::l4_cap_mem_alloc_snd_base(___self, _grant, _base);

        __ret
    }

    pub unsafe fn invalidate(&mut self) {
        let ___self: *mut L4CapMemAlloc;

        ___self = self as *mut L4CapMemAlloc;

        capability_c::l4_cap_mem_alloc_invalidate(___self)
    }
}

impl Clone for L4CapMemAlloc {
    fn clone(&self) -> L4CapMemAlloc {
        unsafe {
            capability_c::l4_cap_mem_alloc_copy_2(self as *const L4CapMemAlloc)
        }
    }
}

impl Drop for L4CapMemAlloc {
    fn drop(&mut self) {
        unsafe {
            if self.is_owning == 0{
                return;
            }

            let ___self: *const L4CapMemAlloc;

            ___self = self as *const L4CapMemAlloc;

            capability_c::l4_cap_mem_alloc_delete(___self)
        }
    }
}

#[repr(C)]
union L4CapRmUnion {
    mem: [c_char; 8],
    ptr: *mut c_void,
}

#[repr(C)]
pub struct L4CapRm {
    obj : L4CapRmUnion,

    is_const: c_char,
    is_owning: c_char,
}

impl L4CapRm {
    pub unsafe fn new_1(cap: c_ulong) -> L4CapRm {
        let _cap: c_ulong;

        _cap = cap as c_ulong;

        let __ret = capability_c::l4_cap_rm_new_1(_cap);

        __ret
    }

    pub unsafe fn new_2(cap: c_uint) -> L4CapRm {
        let _cap: c_uint;

        _cap = cap as c_uint;

        let __ret = capability_c::l4_cap_rm_new_2(_cap);

        __ret
    }

    pub unsafe fn new_3(idx: L4CapIdxT) -> L4CapRm {
        let _idx: c_ulong;

        _idx = idx;

        let __ret = capability_c::l4_cap_rm_new_3(_idx);

        __ret
    }

    pub unsafe fn new_4(_1: c_uint) -> L4CapRm {
        let __1: c_uint;

        __1 = _1 as c_uint;

        let __ret = capability_c::l4_cap_rm_new_4(__1);

        __ret
    }

    pub unsafe fn move_1<'_0>(&self, src: &'_0 L4CapRm) -> L4CapRm {
        let ___self: *const L4CapRm;
        let _src: *const L4CapRm;

        ___self = self as *const L4CapRm;

        _src = src;

        let __ret = capability_c::l4_cap_rm_move_1(___self, _src);

        __ret
    }

    pub unsafe fn copy_1<'_0>(&self, src: &'_0 L4CapRm) -> L4CapRm {
        let ___self: *const L4CapRm;
        let _src: *const L4CapRm;

        ___self = self as *const L4CapRm;

        _src = src;

        let __ret = capability_c::l4_cap_rm_copy_1(___self, _src);

        __ret
    }

    pub unsafe fn access(&self) -> L4ReRm {
        let ___self: *const L4CapRm;

        ___self = self as *const L4CapRm;

        let __ret = capability_c::l4_cap_rm_access(___self);

        __ret
    }

    pub unsafe fn new_rm<'_0>(o: &'_0 L4CapRm) -> L4CapRm {
        let _o: *const L4CapRm;

        _o = o;

        let __ret = capability_c::l4_cap_rm_new_rm(_o);

        __ret
    }

    pub unsafe fn cap(&self) -> L4CapIdxT {
        let ___self: *const L4CapRm;

        ___self = self as *const L4CapRm;

        let __ret = capability_c::l4_cap_rm_cap(___self);

        __ret
    }

    pub unsafe fn is_valid(&self) -> bool {
        let ___self: *const L4CapRm;

        ___self = self as *const L4CapRm;

        let __ret = capability_c::l4_cap_rm_is_valid(___self) != 0;

        __ret
    }

    pub unsafe fn snd_base(&self, grant: c_uint, base: L4CapIdxT) -> L4UmwordT {
        let ___self: *const L4CapRm;
        let _grant: c_uint;
        let _base: c_ulong;

        ___self = self as *const L4CapRm;

        _grant = grant;

        _base = base;

        let __ret = capability_c::l4_cap_rm_snd_base(___self, _grant, _base);

        __ret
    }

    pub unsafe fn invalidate(&mut self) {
        let ___self: *mut L4CapRm;

        ___self = self as *mut L4CapRm;

        capability_c::l4_cap_rm_invalidate(___self)
    }
}

impl Clone for L4CapRm {
    fn clone(&self) -> L4CapRm {
        unsafe {
            capability_c::l4_cap_rm_copy_2(self as *const L4CapRm)
        }
    }

    fn clone_from(&mut self, other: &Self) {
        unsafe {
            capability_c::l4_cap_rm_copy_assign(self as *mut L4CapRm, other as *const L4CapRm);
        }
    }
}

impl Drop for L4CapRm {
    fn drop(&mut self) {
        unsafe {
            if self.is_owning == 0{
                return;
            }

            let ___self: *const L4CapRm;

            ___self = self as *const L4CapRm;

            capability_c::l4_cap_rm_delete(___self)
        }
    }
}

#[repr(C)]
union L4CapDummyKobjectUnion {
    mem: [c_char; 8],
    ptr: *mut c_void,
}

#[repr(C)]
pub struct L4CapDummyKobject {
    obj : L4CapDummyKobjectUnion,

    is_const: c_char,
    is_owning: c_char,
}

impl L4CapDummyKobject {
    pub unsafe fn new_1(cap: c_ulong) -> L4CapDummyKobject {
        let _cap: c_ulong;

        _cap = cap as c_ulong;

        let __ret = capability_c::l4_cap_dummy_kobject_new_1(_cap);

        __ret
    }

    pub unsafe fn new_2(cap: c_uint) -> L4CapDummyKobject {
        let _cap: c_uint;

        _cap = cap as c_uint;

        let __ret = capability_c::l4_cap_dummy_kobject_new_2(_cap);

        __ret
    }

    pub unsafe fn new_3(idx: L4CapIdxT) -> L4CapDummyKobject {
        let _idx: c_ulong;

        _idx = idx;

        let __ret = capability_c::l4_cap_dummy_kobject_new_3(_idx);

        __ret
    }

    pub unsafe fn new_4(_1: c_uint) -> L4CapDummyKobject {
        let __1: c_uint;

        __1 = _1 as c_uint;

        let __ret = capability_c::l4_cap_dummy_kobject_new_4(__1);

        __ret
    }

    pub unsafe fn move_1<'_0>(&self, src: &'_0 L4CapDummyKobject) -> L4CapDummyKobject {
        let ___self: *const L4CapDummyKobject;
        let _src: *const L4CapDummyKobject;

        ___self = self as *const L4CapDummyKobject;

        _src = src;

        let __ret = capability_c::l4_cap_dummy_kobject_move_1(___self, _src);

        __ret
    }

    pub unsafe fn copy_1<'_0>(&self, src: &'_0 L4CapDummyKobject) -> L4CapDummyKobject {
        let ___self: *const L4CapDummyKobject;
        let _src: *const L4CapDummyKobject;

        ___self = self as *const L4CapDummyKobject;

        _src = src;

        let __ret = capability_c::l4_cap_dummy_kobject_copy_1(___self, _src);

        __ret
    }

    pub unsafe fn access(&self) -> DummyKobject {
        let ___self: *const L4CapDummyKobject;

        ___self = self as *const L4CapDummyKobject;

        let __ret = capability_c::l4_cap_dummy_kobject_access(___self);

        __ret
    }

    pub unsafe fn new_dummy_kobject<'_0>(o: &'_0 L4CapDummyKobject) -> L4CapDummyKobject {
        let _o: *const L4CapDummyKobject;

        _o = o;

        let __ret = capability_c::l4_cap_dummy_kobject_new_dummy_kobject(_o);

        __ret
    }

    pub unsafe fn cap(&self) -> L4CapIdxT {
        let ___self: *const L4CapDummyKobject;

        ___self = self as *const L4CapDummyKobject;

        let __ret = capability_c::l4_cap_dummy_kobject_cap(___self);

        __ret
    }

    pub unsafe fn is_valid(&self) -> bool {
        let ___self: *const L4CapDummyKobject;

        ___self = self as *const L4CapDummyKobject;

        let __ret = capability_c::l4_cap_dummy_kobject_is_valid(___self) != 0;

        __ret
    }

    pub unsafe fn snd_base(&self, grant: c_uint, base: L4CapIdxT) -> L4UmwordT {
        let ___self: *const L4CapDummyKobject;
        let _grant: c_uint;
        let _base: c_ulong;

        ___self = self as *const L4CapDummyKobject;

        _grant = grant;

        _base = base;

        let __ret = capability_c::l4_cap_dummy_kobject_snd_base(___self, _grant, _base);

        __ret
    }

    pub unsafe fn invalidate(&mut self) {
        let ___self: *mut L4CapDummyKobject;

        ___self = self as *mut L4CapDummyKobject;

        capability_c::l4_cap_dummy_kobject_invalidate(___self)
    }
}

impl Clone for L4CapDummyKobject {
    fn clone(&self) -> L4CapDummyKobject {
        unsafe {
            capability_c::l4_cap_dummy_kobject_copy_2(self as *const L4CapDummyKobject)
        }
    }
}

impl Drop for L4CapDummyKobject {
    fn drop(&mut self) {
        unsafe {
            if self.is_owning == 0{
                return;
            }

            let ___self: *const L4CapDummyKobject;

            ___self = self as *const L4CapDummyKobject;

            capability_c::l4_cap_dummy_kobject_delete(___self)
        }
    }
}