#include <stdio.h>

int main(void) {
  int number;
  int last_digit = 9;
  printf("Enter a number : ");
  scanf("%d", &number);

  while (number > 0) {
    int digit = number % 10;
    if (digit > last_digit) {
      printf("Digits are not in correct order!\n");
      return 0;
    }
    number /= 10;
    last_digit = digit;
  }

  printf("Digits are in correct order\n");
  return 0;
}