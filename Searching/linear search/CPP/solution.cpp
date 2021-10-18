/* In linear search or sequential search, each element of the array is compared with the given item
to be searched for, one by one.
Time complexity is O(n)
*/

#include<iostream>
using namespace std;

int Lsearch(int arr[], int n, int ele){             // function for the linear search
    for(int i=0;i<n;i++){
        if(arr[i] == ele){
        cout<<"Element found at position "<<i+1;
        return 1;
    } }
    return -1;
}

int main(){
    int n,ele,ind;
    cout<<"Enter the limit of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];                                 // taking input elements from the user
    }
    cout<<"Enter the element to be searched for : ";
    cin>>ele;
    ind = Lsearch(arr,n,ele);                        // caliing function to search ele
    if(ind == -1)
    cout<<"Element not present in the array !!";
    return 0;
}
