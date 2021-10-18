// Insertion Sort using arrays

#include<iostream>

using namespace std;

void insertion__sort(int arr[], int n){           // function to sort the array
    int i,j, temp;
    for(i=1;i<n;i++){
       temp = arr[i];
       j = i-1;
       while (j>=0 && temp < arr[j]){
           arr[j+1] = arr[j];
           j--;
       }
       arr[j+1] = temp;
    }
}

int main(){
    int n;
    cout<<"How many elements you want in array : ";
    cin>>n;
    int arr[n];                                   // array to hold n elements
    cout<<"Enter array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];                              // taking array elements from user
    }
    insertion__sort(arr,n);                       // calling function to sort entered array
    cout<<"\nSorted Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";                        // printing the sorted array
    }
    return 0;
}