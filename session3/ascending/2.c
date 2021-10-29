#include <stdio.h>

void get_user_inputs(int[], short);
short is_array_in_ascending_order(int[], short);

int main(void) {
    const short SIZE = 6;
    int numbers[SIZE];

    get_user_inputs(numbers, SIZE);
    //message is assinged based on function output using an one liner
    printf("\n%s\n", is_array_in_ascending_order(numbers, SIZE) ? "Ascending order" : "Not ascending order");
    return 0;
}

void get_user_inputs(int numbers[], short len) {
    printf("Enter %hu numbers :\n", len);
    for (int i = 0; i < len; i++) {
        printf("Number %hu>>> ", i + 1);
        scanf("%d", &numbers[i]);
    }
}

//boolean function returning 0 or 1
short is_array_in_ascending_order(int numbers[], short len) {
    for (int i = 0; i < len - 1; i++) {
        if (numbers[i] > numbers[i + 1])
            return 0;
    }
    return 1;
}