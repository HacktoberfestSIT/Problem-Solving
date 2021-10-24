#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    mergeSort(arr,0,n-1);
    printf("Array after sorting : ");
     for(int k=0;k<n;k++){
        printf("%d ",arr[k]);
    }

return 0;
}
void mergeSort(int a[],int lb,int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
        mergeSort(a,lb,mid);
        mergeSort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }

}

void merge(int a[],int lb,int mid,int ub){
    int n1=mid-lb+1;
    int n2=ub-mid;
    int L[n1],R[n2];

    for(int k=0;k<n1;k++){
        L[k]=a[lb+k];
    }
    for(int k=0;k<n2;k++){
        R[k]=a[mid+k+1];
    }
     int i=0;
    int j=0;
    int k=lb;
   while(i<n1 && j<n2){
    if(L[i]<R[j]){
        a[k]=L[i];
        i++;
    }else{
    a[k]=R[j];
    j++;
    }
    k++;
   }

   while(i<n1){
    a[k]=L[i];
    i++;
    k++;
   }
   while(j<n2){
    a[k]=R[j];
    j++;
    k++;
   }
}
