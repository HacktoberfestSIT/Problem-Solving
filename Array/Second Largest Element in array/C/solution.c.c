#include<stdio.h>
#include<limits.h>

int main()
{
  int array[5];
  printf("Enter the 5 elements: ");
  for(int i=0; i<5; i++){
    scanf("%d",&array[i]);
  }
  int max = INT_MIN;
  int secondmax = INT_MIN;
  for(int i=0; i<5; i++){
    if(array[i]>max){
      secondmax = max;
      max = array[i];
    }
    else if(array[i]<max && array[i]>secondmax){
      secondmax = array[i];
    }
  }

  printf("Second largest element is %d",secondmax);

  return 0;
}