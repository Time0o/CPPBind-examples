PKGDIR ?= ../../..
L4DIR  ?= $(PKGDIR)/../..

TARGET := cap_alloc.so \
          capability.so \
          counting_cap_alloc.so \
          dataspace.so \
          env.so \
          example_kobject_shared.so \
          ipc_types.so \
          mem_alloc.so \
          rm.so \
          util.so

SRC_CC_cap_alloc.so              := bind/cap_alloc_lua.cc
SRC_CC_capability.so             := bind/capability_lua.cc
SRC_CC_counting_cap_alloc.so     := bind/counting_cap_alloc_lua.cc
SRC_CC_dataspace.so              := bind/dataspace_lua.cc
SRC_CC_env.so                    := bind/env_lua.cc
SRC_CC_example_kobject_shared.so := bind/example_kobject_shared_lua.cc
SRC_CC_ipc_types.so              := bind/ipc_types_lua.cc
SRC_CC_mem_alloc.so              := bind/mem_alloc_lua.cc
SRC_CC_rm.so                     := bind/rm_lua.cc
SRC_CC_util.so                   := bind/util_lua.cc

PRIVATE_INCDIR := $(PKGDIR)/CPPBind/generate

REQUIRES_LIBS := lua++

include $(L4DIR)/mk/lib.mk
