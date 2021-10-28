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
    if (pos != 'M' || pos != 'S') {
      printf("Invalid position!");
    } else {
      // AB + AC = A(B + C)
      if (pos == 'M') {
        total_salary = 50000 + commision;
      } else {
        total_salary = 75000 + commision;
      }
      printf("Commision : %.2f\n", commision);
      printf("Total salary : %.2f\n", total_salary);
    }
  }

  else {
    float commision = sales_amount * 0.0;  // 10/100 -> 0.1
    float total_salary;
    if (pos != 'M' || pos != 'S') {
      printf("Invalid position!");
    } else {
      // AB + AC = A(B + C)
      if (pos == 'M') {
        total_salary = 50000 + commision;
      } else {
        total_salary = 75000 + commision;
      }
      printf("Commision : %.2f\n", commision);
      printf("Total salary : %.2f\n", total_salary);
    }
  }
  return 0;
}