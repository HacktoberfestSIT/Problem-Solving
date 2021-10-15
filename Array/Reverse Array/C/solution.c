#include<stdio.h>

void reverse(int *a,int n){
    for(int i=0;i<n/2;i++){
        int temp;
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
}

int main(){
    int a[]={1,2,3,4,5,6,7};
    int n=7;
    reverse(a,n);
    for(int i=0;i<n;i++){
        printf("The value of %d is: %d\n",i+1,a[i]);
    }
    return 0;
}