#include <stdio.h>

void get_user_inputs(int[], short);
short is_mark_valid(int);
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

//a boolean function returning 0 or 1
short is_mark_valid(int mark) {
    return mark >= 0 && mark <= 100;
}

void get_user_inputs(int marks[], short len) {
    for (int i = 0; i < len; i++) {
        int mark;
        printf("Mark %d>>> ", i + 1);
        scanf("%d", &mark);

        //handling exceptions in user inputs
        if (!is_mark_valid(mark)) {
            printf("Invalid marks! try again a mark [0...100]\n");
            i--;  //giving another change to input a mark
            continue;
        }

        marks[i] = mark;
    }
}

int calculate_total(int numbers[], short len) {
    int total = 0;
    for (int i = 0; i < len; i++) {
        total += numbers[i];
    }
    return total;
}
