#include <stdio.h>
#include <stdlib.h>

struct {
  float full;
  float half;
} typedef Package;

// not a pure function
// function is called inside itself
// therefor this function is a recursion
Package find_disired_package() {
  int type;
  printf("Enter a room type (1,2,3) : ");
  scanf("%d", &type);

  if (type == 1) return (Package){25555.00, 17250.00};
  if (type == 2) return (Package){17500.00, 12250.00};
  if (type == 3) return (Package){9000.00, 7250.00};
  if (type == -1) {
    printf("Have a nice day!\n");
    exit(-1);
  }
  // rather than exit on an invalid input, giving multiple attempts untile user
  // provide a valid input
  printf("Invalid package!, try again\n");
  return find_disired_package();
}

float find_amount(Package pac) {
  char type;
  printf("Enter accomodation type (F)ull/(H)alf : ");
  scanf(" %c", &type);

  if (type == 'F' || type == 'f') return pac.full;
  if (type == 'H' || type == 'h') return pac.half;
  printf("Invalid accomondation type! try again\n");
  return find_amount(pac);
}

// not a pure function, but a recursion
float find_discount_percentage() {
  char type;
  printf("Enter card type (G)old/(S)ilver/(B)ronze: ");
  scanf(" %c", &type);

  if (type == 'G' || type == 'g') return 0.125;
  if (type == 'S' || type == 's') return 0.115;
  if (type == 'B' || type == 'b') return 0.095;
  printf("Invalid accomondation type! try again\n");
  return find_discount_percentage();
}

// not a pure function, but a recursion
int get_days() {
  int days;
  printf("Enter number of days : ");
  scanf("%d", &days);
  if (days <= 0) {
    printf("Invalid days! try again\n");
    return get_days();
  }
}

int main(void) {
  while (0 == 0) {
    Package selected_pac = find_disired_package();
    float amount = find_amount(selected_pac);
    float total = amount * get_days();
    float discount_percentage = find_discount_percentage();
    float discount = total * discount_percentage;
    float final_total = total - discount;
    printf("Final total : Rs.%.2f\n", final_total);
    printf("\n");
  }

  return 0;
}
