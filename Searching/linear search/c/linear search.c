#include <stdio.h>

int main(void) {
  int a[10],i,n,k,flag,index;
  printf("enter no ");
  scanf("%d",&n);
  flag=0;

  for(i=0;i<n;i++)
  {
    printf("element %d ",i);
    scanf("%d",&a[i]);
  }

  for(i=0;i<n;i++)
  printf("element %d:%d\n",i,a[i]);

  printf("enter the element ");
  scanf("%d",&k);

  for(i=0;i<n;i++)
  {
    if(k==a[i])
    {
      flag=1;
      index=i;
      break;
    }
  }
  if(flag==1)
  printf("element %d at %d",k,index);
  else
  printf("no element");
}
