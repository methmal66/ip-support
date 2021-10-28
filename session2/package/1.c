#include <stdio.h>

struct package {  // stucture for the package number
  float full;
  float half;
} pac1, pac2, pac3, selected_pac;  // assinging members

int main(void) {
  // trasfer details to the code from question
  pac1.full = 25555.00;  // room 1 fullboard
  pac1.half = 17250.00;  // room 1 halfboard
  pac2.full = 17500.00;  // room 2 fullboard
  pac2.half = 12250.00;  // room 2 halfboard
  pac3.full = 9000.00;   // room 3 fullboard
  pac3.half = 7250.00;   // room 3 halfboard

  while (0 == 0 /*example for an infinite loop*/) {
    int room_type;
    printf("Enter a room type (1,2,3) : ");
    scanf("%d", &room_type);

    // dynamically assign selected package based on room type
    if (room_type == 1)
      selected_pac = pac1;  // user selection equals to package
    else if (room_type == 2)
      selected_pac = pac2;  // user selection equals to package
    else if (room_type == 3)
      selected_pac = pac3;  // user selection equals to package
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

    // dynamically assign amount based on accomondation type
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
    // getchar();
    // scanf("%c", &card_type);
    scanf(" %c", &card_type);

    // dunamically assign discount percentage based on card type
    float discount_percentage;
    if (card_type == 'G' || card_type == 'g')
      discount_percentage = 0.125;  // 12.5% = 12.5/100 = 0.125
    else if (card_type == 'S' || card_type == 's')
      discount_percentage = 0.115;  // 11.5% = 11.5/100 = 0.115
    else if (card_type == 'B' || card_type == 'b')
      discount_percentage = 0.095;  // 9.5% = 9.5 /100 = 0.095
    else {
      printf("Invalid card type!\n");
      return 0;
    }

    // calcute the final total at the end of the program
    // only once, not repeating the same code
    float total = amount * days;
    float discount = total * discount_percentage;
    float final_total = total - discount;
    printf("Final total : Rs.%.2f\n", final_total);
    printf("\n");
  }

  return 0;
}
