#include <stdio.h>
int sumOfDigit(int number){
    int result=0;
    for(;number!=0;number/=10){
        result+=(number%10);
    }
    return result;
}
int productOfDigit(int number){
    int result=1;
    for(;number!=0;number/=10){
        result*=(number%10);
    }
    return result;
}
void main(){
    unsigned long int number;
    int sum,product;
    printf("Enter a number : ");
    scanf("%d",&number);
    sum=sumOfDigit(number);
    product=productOfDigit(number);
    printf("Sum of Digit = %d \n",sum);
    printf("Product of Digit = %d\n",product);
    printf("Result %d \n",product-sum);
}
