#![allow(dead_code)]

use std::ffi::*;
use std::os::raw::*;

include!("bind/capability_rust.rs");
include!("bind/dataspace_rust.rs");
include!("bind/env_rust.rs");
include!("bind/example_kobject_shared_rust.rs");
include!("bind/ipc_types_rust.rs");

fn main() {
    unsafe {

    let server_name = CString::new("kobject_server").unwrap();

    let server = L4ReEnv::env().get_cap_dummy_kobject_2(&server_name);
    assert!(server.is_valid());

    let a = 1;
    let b = 2;

    let mut res = 0;
    assert_eq!(server.access().call(a, b, &mut res), 0);

    println!("Rust client: result = {}", res);

    }
}
