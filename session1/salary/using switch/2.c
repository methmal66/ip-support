#include <stdio.h>

int main(void) {
  char pos;
  printf("Enter possion : ");
  scanf(" %c", &pos);

  float base_salary;
  switch (pos) {
    case 'M': {
      base_salary = 50000;
      break;
    };
    case 'S': {
      base_salary = 75000;
      break;
    };
    default: {
      printf("Invalid position!\n");
      return 0;  // terminate the program if user input an invalid postion
      // no need for a break statement
    }
  }

  int sales_amount;
  printf("Enter sales amount : ");
  scanf("%d", &sales_amount);

  float commision_percentage;
  if (sales_amount >= 30000)
    commision_percentage = 0.1;
  else if (sales_amount > 0)
    commision_percentage = 0;
  else {
    printf("Invalid sales amount!\n");
    return 0;  // terminate the program if user input an invalid sales amount
  }

  float commision = sales_amount * commision_percentage;
  float total_salary = base_salary + commision;
  printf("Total salary : %d\n", total_salary);

  return 0;  // terminate the program successfully
}