#include <stdio.h>  //input output header file

int main(void)  // main function
{
  int row, col;

  for (row = 1; row <= 7; ++row) {
    for (col = 1; col <= row; ++col) {
      printf("*");
    }
    printf("\n");
  }
  for (row = 7; row >= 1; row = row - 2) {
    for (col = 1; col <= row; ++col) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
// a >= 10