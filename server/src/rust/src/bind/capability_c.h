#ifndef GUARD_CAPABILITY_C_H
#define GUARD_CAPABILITY_C_H

#ifdef __cplusplus
extern "C" {
#endif

#include "cppbind/c/c_bind_error_c.h"

typedef unsigned long l4_cap_idx_t;
typedef unsigned long l4_umword_t;

struct dummy_kobject;
struct l4_cap_dummy_kobject;
struct l4_cap_factory;
struct l4_cap_irq;
struct l4_cap_kobject;
struct l4_cap_meta;
struct l4_cap_task;
struct l4_cap_thread;
struct l4_cap_vm;
struct l4_cap_dataspace;
struct l4_cap_mem_alloc;
struct l4_cap_rm;
struct l4_cap_void;
struct l4_re_dataspace;
struct l4_re_mem_alloc;
struct l4_re_rm;

struct l4_cap_dummy_kobject
{
  union {
    char mem[8];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_cap_factory
{
  union {
    char mem[8];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_cap_irq
{
  union {
    char mem[8];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_cap_kobject
{
  union {
    char mem[8];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_cap_meta
{
  union {
    char mem[8];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_cap_task
{
  union {
    char mem[8];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_cap_thread
{
  union {
    char mem[8];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_cap_vm
{
  union {
    char mem[8];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_cap_dataspace
{
  union {
    char mem[8];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_cap_mem_alloc
{
  union {
    char mem[8];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_cap_rm
{
  union {
    char mem[8];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_cap_void
{
  union {
    char mem[8];
    void *ptr;
  } obj;

  char is_const;
  char is_owning;
};

struct l4_cap_task l4_cap_task_new_1(unsigned long cap);

struct l4_cap_task l4_cap_task_new_2(unsigned int cap);

struct l4_cap_task l4_cap_task_new_3(l4_cap_idx_t idx);

struct l4_cap_task l4_cap_task_new_4(unsigned int _1);

struct l4_cap_task l4_cap_task_move_1(const struct l4_cap_task * __self, const struct l4_cap_task * src);

struct l4_cap_task l4_cap_task_copy_1(const struct l4_cap_task * __self, const struct l4_cap_task * src);

struct l4_cap_task l4_cap_task_copy_2(const struct l4_cap_task * _1);

struct l4_cap_task l4_cap_task_move_2(struct l4_cap_task * _1);

void l4_cap_task_delete(const struct l4_cap_task * __self);

struct l4_cap_task l4_cap_task_new_task(const struct l4_cap_task * o);

l4_cap_idx_t l4_cap_task_cap(const struct l4_cap_task * __self);

int l4_cap_task_is_valid(const struct l4_cap_task * __self);

l4_umword_t l4_cap_task_snd_base(const struct l4_cap_task * __self, unsigned int grant, l4_cap_idx_t base);

void l4_cap_task_invalidate(struct l4_cap_task * __self);

struct l4_cap_kobject l4_cap_kobject_new_1(unsigned long cap);

struct l4_cap_kobject l4_cap_kobject_new_2(unsigned int cap);

struct l4_cap_kobject l4_cap_kobject_new_3(l4_cap_idx_t idx);

struct l4_cap_kobject l4_cap_kobject_new_4(unsigned int _1);

struct l4_cap_kobject l4_cap_kobject_move(const struct l4_cap_kobject * __self, const struct l4_cap_kobject * src);

struct l4_cap_kobject l4_cap_kobject_copy(const struct l4_cap_kobject * __self, const struct l4_cap_kobject * src);

l4_cap_idx_t l4_cap_kobject_cap(const struct l4_cap_kobject * __self);

int l4_cap_kobject_is_valid(const struct l4_cap_kobject * __self);

l4_umword_t l4_cap_kobject_snd_base(const struct l4_cap_kobject * __self, unsigned int grant, l4_cap_idx_t base);

void l4_cap_kobject_invalidate(struct l4_cap_kobject * __self);

struct l4_cap_meta l4_cap_meta_new_1(unsigned long cap);

struct l4_cap_meta l4_cap_meta_new_2(unsigned int cap);

struct l4_cap_meta l4_cap_meta_new_3(l4_cap_idx_t idx);

struct l4_cap_meta l4_cap_meta_new_4(unsigned int _1);

struct l4_cap_meta l4_cap_meta_move(const struct l4_cap_meta * __self, const struct l4_cap_meta * src);

struct l4_cap_meta l4_cap_meta_copy(const struct l4_cap_meta * __self, const struct l4_cap_meta * src);

l4_cap_idx_t l4_cap_meta_cap(const struct l4_cap_meta * __self);

int l4_cap_meta_is_valid(const struct l4_cap_meta * __self);

l4_umword_t l4_cap_meta_snd_base(const struct l4_cap_meta * __self, unsigned int grant, l4_cap_idx_t base);

void l4_cap_meta_invalidate(struct l4_cap_meta * __self);

struct l4_cap_void l4_cap_void_new_1(const void * p);

struct l4_cap_void l4_cap_void_new_2(unsigned long cap);

struct l4_cap_void l4_cap_void_new_3(unsigned int cap);

struct l4_cap_void l4_cap_void_new_4(l4_cap_idx_t idx);

struct l4_cap_void l4_cap_void_new_5(unsigned int _1);

struct l4_cap_void l4_cap_void_move_1(const struct l4_cap_void * __self, const struct l4_cap_void * src);

struct l4_cap_void l4_cap_void_copy_1(const struct l4_cap_void * __self, const struct l4_cap_void * src);

struct l4_cap_void l4_cap_void_copy_2(const struct l4_cap_void * _1);

struct l4_cap_void l4_cap_void_move_2(struct l4_cap_void * _1);

void l4_cap_void_delete(const struct l4_cap_void * __self);

struct l4_cap_void l4_cap_void_new_void(const struct l4_cap_void * o);

l4_cap_idx_t l4_cap_void_cap(const struct l4_cap_void * __self);

int l4_cap_void_is_valid(const struct l4_cap_void * __self);

l4_umword_t l4_cap_void_snd_base(const struct l4_cap_void * __self, unsigned int grant, l4_cap_idx_t base);

void l4_cap_void_invalidate(struct l4_cap_void * __self);

struct l4_cap_factory l4_cap_factory_new_1(unsigned long cap);

struct l4_cap_factory l4_cap_factory_new_2(unsigned int cap);

struct l4_cap_factory l4_cap_factory_new_3(l4_cap_idx_t idx);

struct l4_cap_factory l4_cap_factory_new_4(unsigned int _1);

struct l4_cap_factory l4_cap_factory_move(const struct l4_cap_factory * __self, const struct l4_cap_factory * src);

struct l4_cap_factory l4_cap_factory_copy(const struct l4_cap_factory * __self, const struct l4_cap_factory * src);

l4_cap_idx_t l4_cap_factory_cap(const struct l4_cap_factory * __self);

int l4_cap_factory_is_valid(const struct l4_cap_factory * __self);

l4_umword_t l4_cap_factory_snd_base(const struct l4_cap_factory * __self, unsigned int grant, l4_cap_idx_t base);

void l4_cap_factory_invalidate(struct l4_cap_factory * __self);

struct l4_cap_thread l4_cap_thread_new_1(unsigned long cap);

struct l4_cap_thread l4_cap_thread_new_2(unsigned int cap);

struct l4_cap_thread l4_cap_thread_new_3(l4_cap_idx_t idx);

struct l4_cap_thread l4_cap_thread_new_4(unsigned int _1);

struct l4_cap_thread l4_cap_thread_move(const struct l4_cap_thread * __self, const struct l4_cap_thread * src);

struct l4_cap_thread l4_cap_thread_copy(const struct l4_cap_thread * __self, const struct l4_cap_thread * src);

l4_cap_idx_t l4_cap_thread_cap(const struct l4_cap_thread * __self);

int l4_cap_thread_is_valid(const struct l4_cap_thread * __self);

l4_umword_t l4_cap_thread_snd_base(const struct l4_cap_thread * __self, unsigned int grant, l4_cap_idx_t base);

void l4_cap_thread_invalidate(struct l4_cap_thread * __self);

struct l4_cap_irq l4_cap_irq_new_1(unsigned long cap);

struct l4_cap_irq l4_cap_irq_new_2(unsigned int cap);

struct l4_cap_irq l4_cap_irq_new_3(l4_cap_idx_t idx);

struct l4_cap_irq l4_cap_irq_new_4(unsigned int _1);

struct l4_cap_irq l4_cap_irq_move(const struct l4_cap_irq * __self, const struct l4_cap_irq * src);

struct l4_cap_irq l4_cap_irq_copy(const struct l4_cap_irq * __self, const struct l4_cap_irq * src);

l4_cap_idx_t l4_cap_irq_cap(const struct l4_cap_irq * __self);

int l4_cap_irq_is_valid(const struct l4_cap_irq * __self);

l4_umword_t l4_cap_irq_snd_base(const struct l4_cap_irq * __self, unsigned int grant, l4_cap_idx_t base);

void l4_cap_irq_invalidate(struct l4_cap_irq * __self);

struct l4_cap_vm l4_cap_vm_new_1(unsigned long cap);

struct l4_cap_vm l4_cap_vm_new_2(unsigned int cap);

struct l4_cap_vm l4_cap_vm_new_3(l4_cap_idx_t idx);

struct l4_cap_vm l4_cap_vm_new_4(unsigned int _1);

struct l4_cap_vm l4_cap_vm_move(const struct l4_cap_vm * __self, const struct l4_cap_vm * src);

struct l4_cap_vm l4_cap_vm_copy(const struct l4_cap_vm * __self, const struct l4_cap_vm * src);

l4_cap_idx_t l4_cap_vm_cap(const struct l4_cap_vm * __self);

int l4_cap_vm_is_valid(const struct l4_cap_vm * __self);

l4_umword_t l4_cap_vm_snd_base(const struct l4_cap_vm * __self, unsigned int grant, l4_cap_idx_t base);

void l4_cap_vm_invalidate(struct l4_cap_vm * __self);

struct l4_cap_dataspace l4_cap_dataspace_new_1(unsigned long cap);

struct l4_cap_dataspace l4_cap_dataspace_new_2(unsigned int cap);

struct l4_cap_dataspace l4_cap_dataspace_new_3(l4_cap_idx_t idx);

struct l4_cap_dataspace l4_cap_dataspace_new_4(unsigned int _1);

struct l4_cap_dataspace l4_cap_dataspace_move_1(const struct l4_cap_dataspace * __self, const struct l4_cap_dataspace * src);

struct l4_cap_dataspace l4_cap_dataspace_copy_1(const struct l4_cap_dataspace * __self, const struct l4_cap_dataspace * src);

struct l4_re_dataspace l4_cap_dataspace_access(const struct l4_cap_dataspace * __self);

struct l4_cap_dataspace l4_cap_dataspace_copy_2(const struct l4_cap_dataspace * _1);

struct l4_cap_dataspace l4_cap_dataspace_move_2(struct l4_cap_dataspace * _1);

void l4_cap_dataspace_delete(const struct l4_cap_dataspace * __self);

struct l4_cap_dataspace l4_cap_dataspace_new_dataspace(const struct l4_cap_dataspace * o);

l4_cap_idx_t l4_cap_dataspace_cap(const struct l4_cap_dataspace * __self);

int l4_cap_dataspace_is_valid(const struct l4_cap_dataspace * __self);

l4_umword_t l4_cap_dataspace_snd_base(const struct l4_cap_dataspace * __self, unsigned int grant, l4_cap_idx_t base);

void l4_cap_dataspace_invalidate(struct l4_cap_dataspace * __self);

struct l4_cap_mem_alloc l4_cap_mem_alloc_new_1(unsigned long cap);

struct l4_cap_mem_alloc l4_cap_mem_alloc_new_2(unsigned int cap);

struct l4_cap_mem_alloc l4_cap_mem_alloc_new_3(l4_cap_idx_t idx);

struct l4_cap_mem_alloc l4_cap_mem_alloc_new_4(unsigned int _1);

struct l4_cap_mem_alloc l4_cap_mem_alloc_move_1(const struct l4_cap_mem_alloc * __self, const struct l4_cap_mem_alloc * src);

struct l4_cap_mem_alloc l4_cap_mem_alloc_copy_1(const struct l4_cap_mem_alloc * __self, const struct l4_cap_mem_alloc * src);

struct l4_re_mem_alloc l4_cap_mem_alloc_access(const struct l4_cap_mem_alloc * __self);

struct l4_cap_mem_alloc l4_cap_mem_alloc_copy_2(const struct l4_cap_mem_alloc * _1);

struct l4_cap_mem_alloc l4_cap_mem_alloc_move_2(struct l4_cap_mem_alloc * _1);

void l4_cap_mem_alloc_delete(const struct l4_cap_mem_alloc * __self);

struct l4_cap_mem_alloc l4_cap_mem_alloc_new_mem_alloc(const struct l4_cap_mem_alloc * o);

l4_cap_idx_t l4_cap_mem_alloc_cap(const struct l4_cap_mem_alloc * __self);

int l4_cap_mem_alloc_is_valid(const struct l4_cap_mem_alloc * __self);

l4_umword_t l4_cap_mem_alloc_snd_base(const struct l4_cap_mem_alloc * __self, unsigned int grant, l4_cap_idx_t base);

void l4_cap_mem_alloc_invalidate(struct l4_cap_mem_alloc * __self);

struct l4_cap_rm l4_cap_rm_new_1(unsigned long cap);

struct l4_cap_rm l4_cap_rm_new_2(unsigned int cap);

struct l4_cap_rm l4_cap_rm_new_3(l4_cap_idx_t idx);

struct l4_cap_rm l4_cap_rm_new_4(unsigned int _1);

struct l4_cap_rm l4_cap_rm_move_1(const struct l4_cap_rm * __self, const struct l4_cap_rm * src);

struct l4_cap_rm l4_cap_rm_copy_1(const struct l4_cap_rm * __self, const struct l4_cap_rm * src);

struct l4_re_rm l4_cap_rm_access(const struct l4_cap_rm * __self);

void l4_cap_rm_delete(const struct l4_cap_rm * __self);

struct l4_cap_rm l4_cap_rm_copy_2(const struct l4_cap_rm * _1);

struct l4_cap_rm l4_cap_rm_move_2(struct l4_cap_rm * _1);

struct l4_cap_rm l4_cap_rm_copy_assign(struct l4_cap_rm * __self, const struct l4_cap_rm * _1);

struct l4_cap_rm l4_cap_rm_move_assign(struct l4_cap_rm * __self, struct l4_cap_rm * _1);

struct l4_cap_rm l4_cap_rm_new_rm(const struct l4_cap_rm * o);

l4_cap_idx_t l4_cap_rm_cap(const struct l4_cap_rm * __self);

int l4_cap_rm_is_valid(const struct l4_cap_rm * __self);

l4_umword_t l4_cap_rm_snd_base(const struct l4_cap_rm * __self, unsigned int grant, l4_cap_idx_t base);

void l4_cap_rm_invalidate(struct l4_cap_rm * __self);

struct l4_cap_dummy_kobject l4_cap_dummy_kobject_new_1(unsigned long cap);

struct l4_cap_dummy_kobject l4_cap_dummy_kobject_new_2(unsigned int cap);

struct l4_cap_dummy_kobject l4_cap_dummy_kobject_new_3(l4_cap_idx_t idx);

struct l4_cap_dummy_kobject l4_cap_dummy_kobject_new_4(unsigned int _1);

struct l4_cap_dummy_kobject l4_cap_dummy_kobject_move_1(const struct l4_cap_dummy_kobject * __self, const struct l4_cap_dummy_kobject * src);

struct l4_cap_dummy_kobject l4_cap_dummy_kobject_copy_1(const struct l4_cap_dummy_kobject * __self, const struct l4_cap_dummy_kobject * src);

struct dummy_kobject l4_cap_dummy_kobject_access(const struct l4_cap_dummy_kobject * __self);

struct l4_cap_dummy_kobject l4_cap_dummy_kobject_copy_2(const struct l4_cap_dummy_kobject * _1);

struct l4_cap_dummy_kobject l4_cap_dummy_kobject_move_2(struct l4_cap_dummy_kobject * _1);

void l4_cap_dummy_kobject_delete(const struct l4_cap_dummy_kobject * __self);

struct l4_cap_dummy_kobject l4_cap_dummy_kobject_new_dummy_kobject(const struct l4_cap_dummy_kobject * o);

l4_cap_idx_t l4_cap_dummy_kobject_cap(const struct l4_cap_dummy_kobject * __self);

int l4_cap_dummy_kobject_is_valid(const struct l4_cap_dummy_kobject * __self);

l4_umword_t l4_cap_dummy_kobject_snd_base(const struct l4_cap_dummy_kobject * __self, unsigned int grant, l4_cap_idx_t base);

void l4_cap_dummy_kobject_invalidate(struct l4_cap_dummy_kobject * __self);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // GUARD_CAPABILITY_C_H