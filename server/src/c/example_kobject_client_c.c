#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "capability_c.h"
#include "env_c.h"
#include "example_kobject_shared_c.h"

int main(void)
{
  struct l4_re_env env = l4_re_env_env();
  l4_cap_idx_t server = l4_re_env_get_cap_dummy_kobject_2(&env, "kobject_server");

  assert(l4_cap_dummy_kobject_is_valid(server));

  struct dummy_kobject ko = l4_cap_dummy_kobject_access(server);

  volatile l4_int64_t a = 1, b = 2;

  l4_int64_t res = 0;
  assert(dummy_kobject_call(&ko, a, b, &res) == 0);

  printf("C client: result = %lld\n", res);

  return EXIT_SUCCESS;
}
