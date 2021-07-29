extern crate cc;

fn build(lib: &str, file: &str) {
  cc::Build::new()
            .cpp(true)
            .include("build/include/amd64/l4f")
            .include("build/include/amd64")
            .include("build/include")
            .include("src/bind")
            .static_flag(true)
            .file(format!("src/bind/{}", file))
            .compile(lib);
}

fn main() {
  build("cap_alloc_c", "cap_alloc_c.cc");
  build("capability_c", "capability_c.cc");
  build("consts_c", "consts_c.cc");
  build("counting_cap_alloc_c", "counting_cap_alloc_c.cc");
  build("dataspace_c", "dataspace_c.cc");
  build("env_c", "env_c.cc");
  build("example_kobject_shared_c", "example_kobject_shared_c.cc");
  build("ipc_types_c", "ipc_types_c.cc");
  build("mem_alloc_c", "mem_alloc_c.cc");
  build("rm_c", "rm_c.cc");
}
