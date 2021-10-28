#include <stdio.h>
#include <stdlib.h>

struct {
  float full;
  float half;
} typedef Package;

// output is only dependent on the inputs
// therefor this function is a pure function
// same definition of functions from mathematics directly applies to programming
Package find_disired_package(int type) {
  if (type == 1) return (Package /*type casting*/){25555.00, 17250.00};
  if (type == 2) return (Package){17500.00, 12250.00};
  if (type == 3) return (Package){9000.00, 7250.00};
  if (type == -1) {
    printf("Have a nice day!\n");
    exit(-1);
    // exit from the entire program
    // return statement will not terminate the program cause this is
    // not inside the main function
  }
  printf("Invalid room type!\n");
  exit(-1);
}

// pure function
float find_amount(Package pac, char type) {
  if (type == 'F' || type == 'f') return pac.full;
  if (type == 'H' || type == 'h') return pac.half;
  printf("Invalid accomondation type!\n");
  exit(-1);
}

// pure function
float find_discount_percentage(char type) {
  if (type == 'G' || type == 'g') return 0.125;
  if (type == 'S' || type == 's') return 0.115;
  if (type == 'B' || type == 'b') return 0.095;
  printf("Invalid card type!\n");
  exit(-1);
}

// output in not only dependent on the inputs
// therefore this is not a pure function
// just a regular function
int get_room_type() {
  int type;
  printf("Enter a room type (1,2,3) : ");
  scanf("%d", &type);
  return type;
}

// not a pure function
char get_accomondation_type() {
  char type;
  printf("Enter accomodation type (F)ull/(H)alf : ");
  scanf(" %c", &type);
  return type;
}

// not a pure function
char get_card_type() {
  char type;
  printf("Enter card type (G)old/(S)ilver/(B)ronze: ");
  scanf(" %c", &type);
  return type;
}

// not a pure function
int get_days() {
  int days;
  printf("Enter number of days : ");
  scanf("%d", &days);
  if (days <= 0) {
    printf("Invalid days!\n");
    exit(-1);
  }
}

// functions make the code more cleaner
// main function is easy to read and understand, no conditions inside it
int main(void) {
  while (0 == 0) {
    Package selected_pac = find_disired_package(get_room_type());
    float amount = find_amount(selected_pac, get_accomondation_type());
    float total = amount * get_days();
    float discount_percentage = find_discount_percentage(get_card_type());
    float discount = total * discount_percentage;
    float final_total = total - discount;
    printf("Final total : Rs.%.2f\n", final_total);
    printf("\n");
  }

  return 0;
}
