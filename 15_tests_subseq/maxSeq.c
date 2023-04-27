#include <stddef.h>

size_t maxSeq(int * array, size_t n){
  if (n <= 0)
    return 0;
  int cur = 1;
  int max = 1;
  for ( int i = 1; i < n; i++){
    if (array[i] > array[i - 1]){
      cur++;
    } else {
      cur = 1;
    }
    if (cur > max){
      max = cur;
    }
  }

  return max;
}
