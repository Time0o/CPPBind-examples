#ifndef GUARD_RM_C_H
#define GUARD_RM_C_H

#ifdef __cplusplus
extern "C" {
#endif

#include "cppbind/c/c_bind_error_c.h"

typedef struct l4_re_rm_f_flags l4_re_rm_flags_t;
typedef unsigned long long l4_re_rm_offset_t;
typedef unsigned long l4_addr_t;
typedef unsigned short l4_uint_16_t;
typedef unsigned int l4_uint_32_t;

struct l4_re_rm;
struct l4_re_rm_f;
struct l4_re_rm_f_flags;

struct l4_re_rm
{
  union {
    char mem[5];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_re_rm_f
{
  union {
    char mem[1];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_re_rm_f_flags
{
  union {
    char mem[4];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

enum l4_re_rm_f_attach_flags {
  L4_RE_RM_F_SEARCH_ADDR = 131072ULL,
  L4_RE_RM_F_IN_AREA = 262144ULL,
  L4_RE_RM_F_EAGER_MAP = 524288ULL,
  L4_RE_RM_F_ATTACH_MASK = 983040ULL
};

enum l4_re_rm_f_region_flags {
  L4_RE_RM_F_RIGHTS_MASK = 15ULL,
  L4_RE_RM_F_R = 4ULL,
  L4_RE_RM_F_W = 2ULL,
  L4_RE_RM_F_X = 1ULL,
  L4_RE_RM_F_RW = 6ULL,
  L4_RE_RM_F_RX = 5ULL,
  L4_RE_RM_F_RWX = 7ULL,
  L4_RE_RM_F_DETACH_FREE = 512ULL,
  L4_RE_RM_F_PAGER = 1024ULL,
  L4_RE_RM_F_RESERVED = 2048ULL,
  L4_RE_RM_F_CACHING_MASK = 48ULL,
  L4_RE_RM_F_CACHE_NORMAL = 0ULL,
  L4_RE_RM_F_CACHE_BUFFERED = 16ULL,
  L4_RE_RM_F_CACHE_UNCACHED = 32ULL,
  L4_RE_RM_F_DS_MAP_MASK = 255ULL,
  L4_RE_RM_F_REGION_FLAGS_MASK = 65535ULL
};

long l4_re_rm_reserve_area(const struct l4_re_rm * __self, l4_addr_t * start, unsigned long size, l4_uint_32_t flags, unsigned char align);

long l4_re_rm_attach(const struct l4_re_rm * __self, l4_addr_t * start, unsigned long size, l4_uint_32_t flags, l4_cap_idx_t mem, l4_re_rm_offset_t offs, unsigned char align);

int l4_re_rm_detach_1(const struct l4_re_rm * __self, l4_addr_t addr, l4_cap_idx_t mem, l4_cap_idx_t task);

int l4_re_rm_detach_2(const struct l4_re_rm * __self, void * addr, l4_cap_idx_t mem, l4_cap_idx_t task);

int l4_re_rm_detach_3(const struct l4_re_rm * __self, l4_addr_t start, unsigned long size, l4_cap_idx_t mem, l4_cap_idx_t task);

int l4_re_rm_find(struct l4_re_rm * __self, l4_addr_t * addr, unsigned long * size, l4_re_rm_offset_t * offset, l4_re_rm_flags_t * flags, l4_cap_idx_t m);

int l4_re_rm_detach_4(const struct l4_re_rm * __self, l4_addr_t start, unsigned long size, l4_cap_idx_t mem, l4_cap_idx_t task, unsigned int flags);

void l4_re_rm_delete(const struct l4_re_rm * __self);

long l4_re_rm_attach_void(const struct l4_re_rm * __self, void ** start, unsigned long size, l4_uint_32_t flags, l4_cap_idx_t mem, l4_re_rm_offset_t offs, unsigned char align);

long l4_re_rm_free_area(const struct l4_re_rm * __self, unsigned long a);

struct l4_re_rm_f l4_re_rm_f_new(void);

void l4_re_rm_f_delete(const struct l4_re_rm_f * __self);

struct l4_re_rm_f_flags l4_re_rm_f_flags_new_1(void);

struct l4_re_rm_f_flags l4_re_rm_f_flags_new_2(l4_uint_32_t f);

struct l4_re_rm_f_flags l4_re_rm_f_flags_new_3(l4_uint_32_t rf);

struct l4_re_rm_f_flags l4_re_rm_f_flags_new_4(l4_uint_16_t rf);

l4_uint_16_t l4_re_rm_f_flags_region_flags(const struct l4_re_rm_f_flags * __self);

l4_uint_32_t l4_re_rm_f_flags_attach_flags(const struct l4_re_rm_f_flags * __self);

int l4_re_rm_f_flags_r(const struct l4_re_rm_f_flags * __self);

int l4_re_rm_f_flags_w(const struct l4_re_rm_f_flags * __self);

int l4_re_rm_f_flags_x(const struct l4_re_rm_f_flags * __self);

unsigned int l4_re_rm_f_flags_cap_rights(const struct l4_re_rm_f_flags * __self);

struct l4_re_rm_f_flags l4_re_rm_f_flags_copy(const struct l4_re_rm_f_flags * _1);

struct l4_re_rm_f_flags l4_re_rm_f_flags_move(struct l4_re_rm_f_flags * _1);

void l4_re_rm_f_flags_delete(const struct l4_re_rm_f_flags * __self);

struct l4_re_rm_f_flags l4_re_rm_f_flags_bw_or_assign(struct l4_re_rm_f_flags * __self, l4_uint_32_t r);

struct l4_re_rm_f_flags l4_re_rm_f_flags_bw_and_assign(struct l4_re_rm_f_flags * __self, l4_uint_32_t r);

int l4_re_rm_f_flags_cast_bool(const struct l4_re_rm_f_flags * __self);

struct l4_re_rm_f_flags l4_re_rm_f_flags_bw_not(const struct l4_re_rm_f_flags * __self);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // GUARD_RM_C_H