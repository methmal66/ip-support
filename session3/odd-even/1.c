#include <stdio.h>

int main() {
    const int len = 6;
    int numArr[len], oddNum[len], evenNum[len];

    //store user input in an array
    for (int i = 0; i < len; i++) {
        printf("Enter a number>>> ");
        scanf("%d", &numArr[i]);
    }

    //filter odds and evens into seperate arrays
    //count and index has a relasionship
    //index of the new element is same as the current count of the array
    int evenCount, oddCount = 0;  //step 1 -> initialize a variable to track the number of even numbers
    for (int i = 0; i < len; i++) {
        if (numArr[i] % 2 == 0) {
            evenNum[evenCount] = numArr[i];  //step 2 -> add the next even number to the array using that variable as index
            evenCount++;                     //step 3 -> incrementing the counter value
            continue;
        }
        oddNum[oddCount] = numArr[i];
        oddCount++;
    }

    //display all numbers
    printf("\nNumber Series\t:");
    for (int i = 0; i < len; i++) {
        printf("%d ", numArr[i]);
    }

    //display odd numbers
    printf("\nOdd Numbers\t:");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", oddNum[i]);
    }

    //display even numbers
    printf("\nEven Numbers\t:");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", evenNum[i]);
    }

    return 0;
}