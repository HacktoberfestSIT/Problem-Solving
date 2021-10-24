#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j,a[5],t;
    float n=2.5;
    printf("Input 5 integers:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0; i<n; i++)
    {
        t=a[i];
        a[i]=a[4-i];
        a[4-i]=t;
    }
    
    printf("Modified array:");
    
    for(i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}