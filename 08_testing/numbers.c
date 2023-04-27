#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define SEED 1024

int main()
{
  srand(SEED);
  for (int i = 0; i < 10; i++){
    printf("%d", rand() - RAND_MAX / 2);
  }

  return EXIT_SUCCESS;
}
