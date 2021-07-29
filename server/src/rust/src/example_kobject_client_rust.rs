#![allow(dead_code)]

use std::error::Error;
use std::fmt;

#[derive(Debug)]
struct L4ReError(i64);

impl fmt::Display for L4ReError {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        write!(f, "L4Re error: {}", self.0)
    }
}

impl Error for L4ReError {}

use std::ffi::*;
use std::os::raw::*;

include!("bind/capability_rust.rs");
include!("bind/dataspace_rust.rs");
include!("bind/env_rust.rs");
include!("bind/example_kobject_shared_rust.rs");
include!("bind/ipc_types_rust.rs");

fn main() -> Result<(), Box<dyn Error>> {
    unsafe {

    let server_name = CString::new("kobject_server")?;

    let server = L4ReEnv::env().get_cap_dummy_kobject_2(&server_name);
    if !server.is_valid() {
        return Err(Box::new(L4ReError(-1)));
    }

    let a = 1;
    let b = 2;

    let mut res = 0;
    if server.access().call(a, b, &mut res) != 0 {
        return Err(Box::new(L4ReError(-1)));
    }

    println!("Rust client: result = {}", res);

    }

    Ok(())
}
