#include <stdio.h>

// another way to define a structure
struct {
  float full;
  float half;
} typedef Package;

int main(void) {
  // initialize structures as other normal data types
  Package pac1 = {25555.00, 17250.00};
  Package pac2 = {17500.00, 12250.00};
  Package pac3 = {9000.00, 7250.00};

  while (0 == 0) {
    int room_type;
    printf("Enter a room type (1,2,3) : ");
    scanf("%d", &room_type);

    Package selected_pac;
    if (room_type == 1)
      selected_pac = pac1;
    else if (room_type == 2)
      selected_pac = pac2;
    else if (room_type == 3)
      selected_pac = pac3;
    else if (room_type == -1) {
      printf("Have a nice day!\n");
      return 0;
    } else {
      printf("Invalid room type!\n");
      return 0;
    }

    char accomodation_type;
    printf("Enter accomodation type (F)ull/(H)alf : ");
    scanf(" %c", &accomodation_type);

    float amount;
    if (accomodation_type == 'F' || accomodation_type == 'f')
      amount = selected_pac.full;
    else if (accomodation_type == 'H' || accomodation_type == 'h')
      amount = selected_pac.half;
    else {
      printf("Invalid accomondation type!\n");
      return 0;
    }

    int days;
    printf("Enter number of days : ");
    scanf("%d", &days);
    if (days <= 0) {
      printf("Invalid days!\n");
      return 0;
    }

    char card_type;
    printf("Enter card type (G)old/(S)ilver/(B)ronze: ");
    scanf(" %c", &card_type);

    float discount_percentage;
    if (card_type == 'G' || card_type == 'g')
      discount_percentage = 0.125;
    else if (card_type == 'S' || card_type == 's')
      discount_percentage = 0.115;
    else if (card_type == 'B' || card_type == 'b')
      discount_percentage = 0.095;
    else {
      printf("Invalid card type!\n");
      return 0;
    }

    float total = amount * days;
    float discount = total * discount_percentage;
    float final_total = total - discount;
    printf("Final total : Rs.%.2f\n", final_total);
    printf("\n");
  }

  return 0;
}
