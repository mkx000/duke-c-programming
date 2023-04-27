#include <stddef.h>
#include <stdlib.h>
#include <math.h>

unsigned power (unsigned x, unsigned y);

void run_check(unsigned x, unsigned y, unsigned expected_ans){
  int res = pow(x, y) == expected_ans;
  if (res == 1) {
    exit(EXIT_SUCCESS);
  } else {
    exit(EXIT_FAILURE);
  }
}

int main(){
  unsigned test[][3] = { {0, 0, 1};
			 {1, 0, 1},
			 {0, 1, 0},
			 {1, 0, 1},
			 {1, 3, 1},
			 {2, 1, 2},
			 {2, 3, 8},
			 {-1, 0, 1},
			 {-1, 2, 1},
			 {-2, 3, -8},
                                   };

  for (int i = 0; i < 10; i++){
    run_check(test[0][1],test[0][2],test[0][3]);
  }

  return 0;
}
