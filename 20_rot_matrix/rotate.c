void swap(char *a, char *b) {
  char tmp = *a;
  *a = *b;
  *b = tmp;
}

/** 方法:
 * 1. transpose the matrix 
 * 2. reverse every row
 */
void rotate(char matrix[10][10]) {
  for (int i = 0; i < 10; i++) {
    for (int j = i + 1; j < 10; j++) {
      swap(&matrix[i][j], &matrix[j][i]);
    }
  }

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 5; j++) {
      swap(&matrix[i][j], &matrix[i][9 - j]);
    }
  }
}
  
