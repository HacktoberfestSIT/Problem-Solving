//this code was done by BharaniSri10
#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n){
     for(int i=0;i<n;i++){
         for(int j=i+1;j>=0;j--){
            if (arr[j] < arr[j-1] ){
  
               int  temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
         }
     }
     cout<<"sorted array"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<"\n";
    }
}
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        cout<<"Enter the element  "<<i+1;
        cin>>a[i];
    }
    insertion_sort(a,5);

    return 0;
    
}