#include<stdio.h>
#include<string.h>

int digit(char);
int main(){
    char num[1000];
    int i=0;
    long int number =0;
    printf("s=");
    scanf("%s",num);
    while(num[i]){
         if(digit(num[i]) >= digit(num[i+1]))
             number = number + digit(num[i]);
         else{
             number = number + (digit(num[i+1]) - digit(num[i]));
             i++;
         }
         i++;
    }
    printf("%ld",number);
    return 0;
}
int digit(char c){
    int value=0;
    switch(c){
         case 'I':
             value = 1;
             break;
         case 'V':
             value = 5;
             break;
         case 'X':
             value = 10;
             break;
         case 'L':
             value = 50;
             break;
         case 'C':
             value = 100;
              break;
         case 'D':
              value = 500;
              break;
         case 'M':
             value = 1000;
             break;
         default:
             value = -1;
    }
    return value;
}
