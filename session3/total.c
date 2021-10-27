#include <stdio.h>
#define size 10
int main(void) {
  int marks[size]={0};
  float total,avg;
  
  //input user inputs
  for(int i = 0 ; i < size ; i++){
    printf("Enter mark %d : ",i+1);
    scanf("%d",&marks[i]);  
  }

  //calculate the total
  for(int i = 0 ; i < size ; i++){
    total+= marks[i];
  }
  
  avg = total / size;

  printf("\nTotal is : %.2f\n",total);
  printf("Average is : %.2f",avg);

  return 0;
}