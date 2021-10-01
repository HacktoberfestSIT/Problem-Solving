#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void input(int *a,int n){
    for(int i=0;i<n;i++){
        printf("Element %d ",i);
        scanf("%d",&a[i]);
    }
}

void display(int *a,int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void merging(int *a,int mid,int low,int high){
    int *b=(int *)malloc((high-low+1)*sizeof(int));
    int i=low;
    int j=mid+1;
    int k=low;
    while(i<=mid && j<=high){
        if(a[i]<a[j]){
            b[k]=a[i];
            i++;
            k++;
        }
        else{
            b[k]=a[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        b[k]=a[i];
        i++;
        k++;
    }
    while (j<=high)
    {
        b[k]=a[j];
        j++;
        k++;
    }
    for(i=low;i<=high;i++){
        a[i]=b[i];
    }
}

void mergeSort(int *a,int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        merging(a,mid,low,high);
    }
}

int main(){
    int *a,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));

    input(a,n);
    display(a,n);

    mergeSort(a,0,n-1);
    display(a,n);
}