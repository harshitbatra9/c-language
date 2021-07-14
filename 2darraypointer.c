#include <stdio.h>
int main() {
  int num[3][4] = {
    {1, 2,  3,  4},
    {5, 6,  7,  8},
    {9, 10, 11, 12}
  };  
  int r = 3,c=4,i, j;
  int *ptr = &num[0][0];
  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      printf("%d ", *(*(ptr+i)+j));
    }
    printf("\n");
  }  
  return 0;
}