#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j, a[5], b[5], c[10];
    
    printf("Enter the elements for First Array:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter the elements for Second Array:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&b[i]);
    }
    
    for(i=0; i<5; i++)
    {
        c[i] = a[i];
    }
    
    for(i=0, j=5; j<10 && i<5; i++, j++)
    {
        c[j] = b[i];
    }
    
    printf("Merged Array:\n");
    for(i=0; i<10; i++)
    {
        printf("%d ",c[i]);
    }
    
    return 0;
}