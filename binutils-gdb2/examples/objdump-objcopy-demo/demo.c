#include <stdio.h>

int global_counter = 7;

static int
add (int left, int right)
{
  return left + right;
}

int
main (void)
{
  int result = add (global_counter, 5);

  printf ("result = %d\n", result);
  return result == 12 ? 0 : 1;
}
