#include <stdio.h>

void display(char[], int[], int);
void populate(int[], int);
int filter_odd(int[], int[], int);
int filter_even(int[], int[], int);

int main(void) {
  const int len = 6;
  int numArr[len], oddNum[len], evenNum[len];
  
  populate(numArr, len);
  const int oddCount = filter_odd(numArr, oddNum, len);
  const int evenCount = filter_even(numArr, evenNum, len);
  display("Number Series", numArr, len);
  display("Odd Numbers", oddNum, oddCount);
  display("Even Number",evenNum, evenCount);
  
  return 0;
}

void populate(int numbers[], int len){
   for(int i=0; i<len; i++){
    printf("Enter a number>>> ");
    scanf("%d",&numbers[i]);
  }
}

int filter_even(int numbers[],int evens[], int len){
  int even_count = 0; //step 1 -> initialize a variable to track the number of even numbers
  for(int i=0; i<len; i++){
    if(numbers[i]%2 == 0) 
      evens[even_count++] = numbers[i]; //add the next even number to the array using that variable a 
  }
  return even_count;
}

int filter_odd(int numbers[],int odds[], int len){
  int odd_count = 0;
  for(int i=0; i<len; i++){
    if(numbers[i]%2 == 1) 
      odds[odd_count++] = numbers[i]; 
  }
  return odd_count;
}

void display(char name[], int numbers[], int len){
  printf("%s\t:",name);
  for(int i=0; i<len; i++){
    printf("%d ",numbers[i]);
  }
  printf("\n");
}