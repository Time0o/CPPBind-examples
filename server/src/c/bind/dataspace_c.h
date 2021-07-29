#ifndef GUARD_DATASPACE_C_H
#define GUARD_DATASPACE_C_H

#ifdef __cplusplus
extern "C" {
#endif

#include "cppbind/c/c_bind_error_c.h"

typedef unsigned long long l4_re_dataspace_map_addr_t;
typedef unsigned long long l4_re_dataspace_offset_t;
typedef unsigned long long l4_re_dataspace_size_t;

struct l4_re_dataspace;
struct l4_re_dataspace_f;
struct l4_re_dataspace_flags;

struct l4_re_dataspace
{
  union {
    char mem[4];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_re_dataspace_f
{
  union {
    char mem[1];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_re_dataspace_flags
{
  union {
    char mem[8];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

enum l4_re_dataspace_f_flags {
  L4_RE_DATASPACE_F_R = 4ULL,
  L4_RE_DATASPACE_F_RO = 4ULL,
  L4_RE_DATASPACE_F_RW = 6ULL,
  L4_RE_DATASPACE_F_W = 2ULL,
  L4_RE_DATASPACE_F_X = 1ULL,
  L4_RE_DATASPACE_F_RX = 5ULL,
  L4_RE_DATASPACE_F_RWX = 7ULL,
  L4_RE_DATASPACE_F_RIGHTS_MASK = 15ULL,
  L4_RE_DATASPACE_F_NORMAL = 0ULL,
  L4_RE_DATASPACE_F_CACHEABLE = 0ULL,
  L4_RE_DATASPACE_F_BUFFERABLE = 16ULL,
  L4_RE_DATASPACE_F_UNCACHEABLE = 32ULL,
  L4_RE_DATASPACE_F_CACHING_MASK = 48ULL
};

long l4_re_dataspace_map(const struct l4_re_dataspace * __self, l4_re_dataspace_offset_t offset, unsigned long flags, l4_re_dataspace_map_addr_t local_addr, l4_re_dataspace_map_addr_t min_addr, l4_re_dataspace_map_addr_t max_addr);

long l4_re_dataspace_map_region(const struct l4_re_dataspace * __self, l4_re_dataspace_offset_t offset, unsigned long flags, l4_re_dataspace_map_addr_t min_addr, l4_re_dataspace_map_addr_t max_addr);

l4_re_dataspace_size_t l4_re_dataspace_size(const struct l4_re_dataspace * __self);

struct l4_re_dataspace_flags l4_re_dataspace_flags(const struct l4_re_dataspace * __self);

void l4_re_dataspace_delete(const struct l4_re_dataspace * __self);

long l4_re_dataspace_clear(const struct l4_re_dataspace * __self, unsigned long long a_1, unsigned long long a_2);

long l4_re_dataspace_allocate(const struct l4_re_dataspace * __self, unsigned long long a_1, unsigned long long a_2);

long l4_re_dataspace_copy_in(const struct l4_re_dataspace * __self, unsigned long long a_1, l4_cap_idx_t a_2, unsigned long long a_3, unsigned long long a_4);

struct l4_re_dataspace_f l4_re_dataspace_f_new(void);

void l4_re_dataspace_f_delete(const struct l4_re_dataspace_f * __self);

struct l4_re_dataspace_flags l4_re_dataspace_flags_new_1(void);

struct l4_re_dataspace_flags l4_re_dataspace_flags_new_2(unsigned long f);

struct l4_re_dataspace_flags l4_re_dataspace_flags_new_3(unsigned int f);

int l4_re_dataspace_flags_r(const struct l4_re_dataspace_flags * __self);

int l4_re_dataspace_flags_w(const struct l4_re_dataspace_flags * __self);

int l4_re_dataspace_flags_x(const struct l4_re_dataspace_flags * __self);

unsigned long l4_re_dataspace_flags_fpage_rights(const struct l4_re_dataspace_flags * __self);

void l4_re_dataspace_flags_delete(const struct l4_re_dataspace_flags * __self);

struct l4_re_dataspace_flags l4_re_dataspace_flags_bw_or_assign(struct l4_re_dataspace_flags * __self, unsigned long r);

struct l4_re_dataspace_flags l4_re_dataspace_flags_bw_and_assign(struct l4_re_dataspace_flags * __self, unsigned long r);

int l4_re_dataspace_flags_cast_bool(const struct l4_re_dataspace_flags * __self);

struct l4_re_dataspace_flags l4_re_dataspace_flags_bw_not(const struct l4_re_dataspace_flags * __self);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // GUARD_DATASPACE_C_H