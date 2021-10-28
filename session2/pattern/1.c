#include <stdio.h>  //standared input output header file

int main(void)  // main function
{
  for (int row = 1; row <= 7;
       ++row) {  // row is definded only for the scope of this for loop
    for (int col = 1; col <= row; ++col) {
      printf("*");
    }
    printf("\n");
  }

  for (int row = 7; row >= 1;
       row = row - 2) {  // this row is different from the other row even they
                         // have the same name
    for (int col = 1; col <= row; ++col) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}