#include <stdio.h>

int main(void) {
    const short size = 6;
    int numbers[size];

    //get user inputs
    printf("Enter %hu numbers :\n", size);
    for (int i = 0; i < size; i++) {
        printf("Number %hu>>> ", i + 1);
        scanf("%d", &numbers[i]);
    }

    //find if array in ascendig order
    for (int i = 0; i < size - 1; i++) {
        if (numbers[i] > numbers[i + 1]) {  //compare two adjacent numbers
            printf("\nNot ascending order\n");
            return -1;  //if a two adjacent numbers are not in order then the entire array is not in order as well
        }
    }

    printf("\nAscending order\n");
    return 0;
}