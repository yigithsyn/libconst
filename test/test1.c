#include "../consts.h"
#include "assert.h"
#include <string.h>
#include <stdio.h>


int main()
{
  int test = 1;
  // int tests = 30;

  // printf("1..%i\n", tests);

  assert(consts_ver_major() || consts_ver_minor() || consts_ver_patch());
  printf("%d. [PASSED] Project version is %hu.%hu.%hu\n", test++, consts_ver_major(), consts_ver_minor(), consts_ver_patch());

}