#include <stdio.h>

void get_user_inputs(int[], short);
int calculate_total(int[], short);

int main() {
    const short size = 10;
    int marks[size];

    get_user_inputs(marks, size);
    const int total = calculate_total(marks, size);
    const float average = total / (float)size;

    printf("\nTotal is\t: %d\n", total);
    printf("Average is\t: %.2f\n", average);

    return 0;
}

//devide code segements into multiple functions
//no need for comments as function names itself explain whats happening their

void get_user_inputs(int marks[], short len) {
    for (int i = 0; i < len; i++) {
        printf("Mark %d>>> ", i + 1);
        scanf("%d", &marks[i]);
    }
}

int calculate_total(int numbers[], short len) {
    int total = 0;
    for (int i = 0; i < len; i++) {
        total += numbers[i];
    }
    return total;
}
