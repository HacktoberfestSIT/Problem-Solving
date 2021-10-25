#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,sum=0,sub=0,tem,ld,rem, prod = 1;
    printf("n=");
    scanf("%d",&num);
    tem=num;
    while(num != 0)
    {
        ld = num % 10;
        sum += ld;
        num /=  10;
    }
    while(tem != 0)
    {
        rem = tem % 10;
        prod *= rem;
        tem /=  10;
    }
    sub=prod-sum;
    printf("%d",sub);
    return 0;
}
