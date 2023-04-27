#include <stdio.h>

int main(){
  const char *str[] = {"abc", "cdefghxxx", "fgh"};
  printf("%s\n", str[1]);

  return 0;
}
