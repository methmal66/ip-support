#include <stdio.h>

int main(void) {
  char pos;
  printf("Enter possion : ");
  scanf(" %c", &pos);

  int sales_amount;
  printf("Enter sales amount : ");
  scanf("%d", &sales_amount);

  if (sales_amount >= 30000) {
    float commision = sales_amount * 0.1;
    float total_salary;
    if (pos == 'M') {
      total_salary = 50000 + commision;
    } else if (pos == 'S') {
      total_salary = 75000 + commision;
    } else {
      printf("Invalid position!\n");
      return 0;
    }
    printf("Commision : %.2f\n", commision);
    printf("Total salary : %.2f\n", total_salary);

  }

  else if (sales_amount > 0) {
    float commision = sales_amount * 0.0;
    float total_salary;
    if (pos != 'M' || pos != 'S') {
      printf("Invalid position!");
    } else {
      if (pos == 'M') {
        total_salary = 50000 + commision;
      } else if (pos == 'S') {
        total_salary = 75000 + commision;
      } else {
        printf("Invalid postion!\n");
        return 0;
      }
      printf("Commision : %.2f\n", commision);
      printf("Total salary : %.2f\n", total_salary);
    }
  }

  else {
    printf("Invalid sales amount!\n");
  }
  return 0;
}