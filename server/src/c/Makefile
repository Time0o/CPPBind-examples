PKGDIR ?= ../../..
L4DIR  ?= $(PKGDIR)/../..

TARGET := example_kobject_client_c example_dataspace_c

SRC_C_example_kobject_client_c  := example_kobject_client_c.c
SRC_CC_example_kobject_client_c := bind/capability_c.cc \
                                   bind/env_c.cc \
                                   bind/example_kobject_shared_c.cc

SRC_C_example_dataspace_c  := example_dataspace_c.c
SRC_CC_example_dataspace_c := bind/consts_c.cc \
                              bind/cap_alloc_c.cc \
                              bind/capability_c.cc \
                              bind/counting_cap_alloc_c.cc \
                              bind/env_c.cc \
                              bind/dataspace_c.cc \
                              bind/mem_alloc_c.cc \
                              bind/rm_c.cc

PRIVATE_INCDIR := $(PKGDIR)/CPPBind/generate $(PKGDIR)/server/src/c/bind

REQUIRES_LIBS := l4re_c l4re_c-util

include $(L4DIR)/mk/prog.mk
