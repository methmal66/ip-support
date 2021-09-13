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
    if (pos == 'M') {
      total_salary = 50000 + commision;
      printf("Commision : %.2f\n", commision);
      printf("Total salary : %.2f\n", total_salary);
    }

    else if (pos == 'S') {
      total_salary = 75000 + commision;
      printf("Commision : %.2f\n", commision);
      printf("Total salary : %.2f\n", total_salary);
    }

    else {
      printf("Invalid position!");
    }
  }

  else {
    float commision = sales_amount * 0.0;  // 10/100 -> 0.1
    float total_salary;
    if (pos == 'M') {
      total_salary = 50000 + commision;
      printf("Commision : %.2f", commision);
      printf("Total salary : %.2f", total_salary);
    }

    else if (pos == 'S') {
      total_salary = 75000 + commision;
      printf("Commision : %.2f", commision);
      printf("Total salary : %.2f", total_salary);
    }

    else {
      printf("Invalid position!");
    }
  }
  return 0;
}