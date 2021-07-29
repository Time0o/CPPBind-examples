#![allow(dead_code)]

use std::ffi::*;
use std::os::raw::*;

/* NOTE: Using the include! macro is terribly unidiomatic, it would be better
 * to create one Rust module per input translation unit but this is difficult
 * for technical reasons.
 */
include!("bind/cap_alloc_rust.rs");
include!("bind/capability_rust.rs");
include!("bind/counting_cap_alloc_rust.rs");
include!("bind/consts_rust.rs");
include!("bind/dataspace_rust.rs");
include!("bind/env_rust.rs");
include!("bind/example_kobject_shared_rust.rs");
include!("bind/ipc_types_rust.rs");
include!("bind/mem_alloc_rust.rs");
include!("bind/rm_rust.rs");

static MSG: &str =
"Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod
 tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At
 vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd
 gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum
 dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor
 invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero
 eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no
 sea takimata sanctus est Lorem ipsum dolor sit amet.";

unsafe fn alloc(ma: &L4CapMemAlloc, size: L4ReDataspaceSize) -> L4CapDataspace
{
    let mut cap_alloc = l4_re_util_get_cap_alloc();
    let ds = cap_alloc.alloc_dataspace();

    assert_eq!(ma.access().alloc(size as c_long, &ds, 0, 0), 0);

    assert_eq!(ds.access().allocate(0, size), 0);

    return ds;
}

unsafe fn reserve(rm: &L4CapRm, size: L4ReDataspaceSize) -> L4AddrT
{
    let mut start: L4AddrT = 0;

    assert_eq!(rm.access().reserve_area(&mut start,
                                        size,
                                        L4_RE_RM_F_SEARCH_ADDR as c_uint,
                                        get_l4_pageshift() as c_uchar), 0);

    return start;
}

unsafe fn map(ds: &L4CapDataspace, addr: L4ReDataspaceMapAddr, flags: c_ulong)
{
    assert_eq!(ds.access().map_region(0,
                                      flags,
                                      addr,
                                      addr + ds.access().size()), 0);
}

unsafe fn attach(rm: &L4CapRm, ds: &L4CapDataspace, flags: L4Uint32T) -> *mut c_void
{
    let mut start: *mut c_void = std::ptr::null_mut();

    assert_eq!(rm.access().attach_void(&mut start,
                                       ds.access().size(),
                                       L4_RE_RM_F_SEARCH_ADDR | flags,
                                       &L4IpcCapDataspace::new_1(&ds),
                                       0,
                                       get_l4_pageshift() as c_uchar), 0);

    return start;
}

fn main() {
    unsafe {

    // environment
    let env = L4ReEnv::env();

    let ma = env.mem_alloc_1();
    let rm = env.rm_1();

    // create dataspace
    let ds_size = MSG.len() as L4ReDataspaceSize;

    let ds = alloc(&ma, ds_size);

    assert_eq!(ds.access().size(), ds_size);

    let ds_flags = ds.access().flags();
    assert_eq!(ds_flags.fpage_rights(), L4_RE_DATASPACE_F_RWX as c_ulong);

    // map dataspace
    let ds_start = reserve(&rm, ds_size);

    map(&ds, ds_start, L4_RE_DATASPACE_F_RW as c_ulong);

    {
        let src: *const u8 = MSG.as_ptr();
        let dst: *mut u8 = std::mem::transmute(ds_start);

        std::ptr::copy(src, dst, ds_size as usize);
    }

    {
      let ds_start: *mut u8 = std::mem::transmute(ds_start);
      let ds_msg_slice = std::slice::from_raw_parts(ds_start, ds_size as usize);
      let ds_msg = std::str::from_utf8(ds_msg_slice).unwrap();

      assert_eq!(ds_msg, MSG);
    }

    // clear dataspace
    ds.access().clear(0, ds_size);

    // copy in another dataspace
    let ds_copy_in = alloc(&ma, ds_size);

    let ds_copy_in_start = attach(&rm, &ds_copy_in, L4_RE_RM_F_RW as L4Uint32T);

    {
        let src: *const u8 = MSG.as_ptr();
        let dst: *mut u8 = std::mem::transmute(ds_copy_in_start);

        std::ptr::copy(src, dst, ds_size as usize);
    }

    ds.access().copy_in(0, &L4IpcCapDataspace::new_1(&ds_copy_in), 0, ds_size);

    {
      let ds_start: *mut u8 = std::mem::transmute(ds_start);
      let ds_msg_slice = std::slice::from_raw_parts(ds_start, ds_size as usize);
      let ds_msg = std::str::from_utf8(ds_msg_slice).unwrap();

      assert_eq!(ds_msg, MSG);
    }

    }

    println!("Rust program: success");
}
