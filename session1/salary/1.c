#include <stdio.h>

int main(void) {
  char pos;
  int sales_amount;
  float commision, total_salary;

  printf("Enter possion : ");
  scanf(" %c", &pos);

  printf("Enter sales amount : ");
  scanf("%d", &sales_amount);

  if (sales_amount >= 30000 && pos == 'M') {
    commision = sales_amount * 0.1;
    total_salary = 50000 + commision;
    printf("Commision : %.2f\n", commision);
    printf("Total salary : %.2f\n", total_salary);
  }

  if (sales_amount >= 30000 && pos == 'S') {
    commision = sales_amount * 0.1;
    total_salary = 50000 + commision;
    printf("Commision : %.2f\n", commision);
    printf("Total salary : %.2f\n", total_salary);
  }

  if (sales_amount > 0 && pos == 'M') {
    commision = sales_amount * 0.1;
    total_salary = 50000 + commision;
    printf("Commision : %.2f\n", commision);
    printf("Total salary : %.2f\n", total_salary);
  }

  if (sales_amount > 0 && pos == 'S') {
    commision = sales_amount * 0.1;
    total_salary = 50000 + commision;
    printf("Commision : %.2f\n", commision);
    printf("Total salary : %.2f\n", total_salary);
  }

  if (sales_amount < 0 || (pos != 'M' && pos != 'S')) {
    printf("Invalid sales amount or position!\n");
  }

  return 0;
}