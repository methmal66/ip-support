#include <stdio.h>

void display(char[], int[], int);
void populate(int[], int);
int filter(int[], int[], int, int);

int main() {
    const int len = 6;
    int numArr[len], oddNum[len], evenNum[len];

    populate(numArr, len);
    const int oddCount = filter(numArr, oddNum, len, 1);
    const int evenCount = filter(numArr, evenNum, len, 0);
    display("Number Series", numArr, len);
    display("Odd Numbers", oddNum, oddCount);
    display("Even Number", evenNum, evenCount);

    return 0;
}

void populate(int numbers[], int len) {
    for (int i = 0; i < len; i++) {
        int number;
        printf("Number %d>>> ", i + 1);
        scanf("%d", &number);
        //handling user input exceptions
        if (number <= 0) {
            printf("Invalid number try agian! only positive numbers are either even or odd\n");
            i--;       //give another chance to input a valid number
            continue;  //dont execute the below lines inside this for loop
        }
        numbers[i] = number;
    }
}

//combine the common logic between two filter functions
int filter(int numbers[], int filtered_numbers[], int len, int remainder) {
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (numbers[i] % 2 == remainder) {
            filtered_numbers[count++] = numbers[i];
        }
    }
    return count;
}

void display(char name[], int numbers[], int len) {
    printf("%s\t:", name);
    for (int i = 0; i < len; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}