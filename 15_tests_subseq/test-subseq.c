#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

size_t maxSeq(int *array, size_t n);

int main(){
  if (maxSeq(NULL, 0)){
   return EXIT_FAILURE;
  }

  int *a = {1};
  int *b = {1, 2, 3, 4};
  int *c = {2, 1, 0};
  int *d = {-1};
  int *e = {1, 1, 1, 4};

  if (maxSeq(a, 1) != 1){
    return EXIT_FAILURE;
  }

  if (maxSeq(b, 4) != 4){
    return EXIT_FAILURE;
  }

  if (maxSeq(c, 3) != 1){
    return EXIT_FAILURE;
  }

  if (maxSeq(d, 1) != 1){
    return EXIT_FAILURE;
  }

  if (maxSeq(e, 4) != 2){
    return EXIT_FAILURE;
  }

  return EXIT_FAILURE;
}
