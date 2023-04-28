#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int decrypt(FILE *f){
  int cnt[26] = {0};
  int ch;
  while ((ch = fgetc(f)) != EOF) {
    if (isalpha(ch)) {
      cnt[ch - 'a']++;
    }
  }

  int maximum = cnt[0], index = 0;
  for (int i = 0; i < 26; i++) {
    if (cnt[i] > maximum) {
      index = i;
      maximum = cnt[i];
    }
  }

  int indexOfe = 'e' - 'a';

  return (26 + index - indexOfe) % 26;
}

int main(int argc, const char* argv[]) {
  if (argc != 2) {
    perror("please input file name\n");
    exit(EXIT_FAILURE);
  }

  FILE *f = fopen(argv[1], "r");
  if (f == NULL) {
    perror("failed to open file\n");
    exit(EXIT_FAILURE);
  }
    
  int key = decrypt(f);
  printf("%d\n" ,key);

  return EXIT_SUCCESS;
}
