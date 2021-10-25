#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pal=0,x,tem,ld;
    printf("X=");
    scanf("%d",&x);
    tem=x;
    while(x>00)
    {
        ld=x%10;
        pal=(pal*10)+ld;
        x=x/10;
    }
    if(pal==tem)
    printf("true");
    else
        printf("false");

    return 0;
}
