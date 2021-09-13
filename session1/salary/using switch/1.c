#include <stdio.h>

int main(void) {
  char pos;
  printf("Enter possion : ");
  scanf(" %c", &pos);

  int sales_amount;
  printf("Enter sales amount : ");
  scanf("%d", &sales_amount);

  if (sales_amount >= 30000) {
    float commision = sales_amount * 0.1;  // 10/100 -> 0.1
    float total_salary;
    switch (pos) {
      case 'M': {
        total_salary = 50000 + commision;
        break;
      };
      case 'S': {
        total_salary = 75000 + commision;
        break;
      };
      default: {
        printf("Invalid position!\n");
        return 0;
      }
        printf("Commision : %.2f\n", commision);
        printf("Total salary : %.2f\n", total_salary);
    }
  }

  else {
    float total_salary;
    switch (pos) {
      case 'M': {
        total_salary = 50000;
        break;
      };
      case 'S': {
        total_salary = 75000;
        break;
      };
      default: {
        printf("Invalid position!\n");
        return 0;
      }
        printf("Commision : 0.00\n");
        printf("Total salary : %.2f\n", total_salary);
    }
  }
  return 0;
}