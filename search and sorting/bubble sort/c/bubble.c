#include<stdio.h>
#include<stdlib.h>

void display(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void input(int a[],int n){
    for(int i=0;i<n;i++){
        printf("Element %d ",i);
        scanf("%d",&a[i]);
    }
}

void bubbleSortAdaptive(int a[],int n){
    int c,isSorted=0;
    for(int i=0;i<n-1;i++){
        printf("Number of passes:%d\n",i+1);
        isSorted=1;
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
                isSorted=0;
            }
        }
        if(isSorted){
            return ;
        }
    }
}

int main(){
    int *a,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));

    input(a,n);
    display(a,n);
    bubbleSortAdaptive(a,n);
    display(a,n);
}