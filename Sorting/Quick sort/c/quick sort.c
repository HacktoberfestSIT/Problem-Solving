#include <stdio.h>
#include <stdlib.h>

int partition(int a[],int low,int high)
{
 	int pivot=a[low];
 	int i=low+1,c=0,j=high;
 	do
	 {
		 while(pivot>=a[i])
		 	i++;
		while(a[j]>pivot)
			j--;
		if(i<j)
		{
			c=a[i];
			a[i]=a[j];
			a[j]=c;
		}
	}while(i<j);
 	c=a[low];
	a[low]=a[j];
	a[j]=c;
 	return j;
}

void quicksort(int a[],int low,int high)
{
 	int partitionindex;
 	if(low<high)
 	{
   	partitionindex=partition(a,low,high);
   	quicksort(a,low,partitionindex-1);
   	quicksort(a,partitionindex+1,high);
 	}
}

int main()
{
  int *a,n,i;
	printf("enter no ");
	scanf("%d",&n);
	
	a=(int*)malloc(n*sizeof(int));
	
	printf("Enter the %d elements to sort:\n",n);
	for(i=0;i<n;i++)
	{
		printf("element %d ",i);
		scanf("%d",&a[i]);
	}
	
	quicksort(a,0,n-1);
	
	printf("The sorted elements are:\n");
  for(i=0;i<n;i++)
  printf("%d\n",a[i]);
}
