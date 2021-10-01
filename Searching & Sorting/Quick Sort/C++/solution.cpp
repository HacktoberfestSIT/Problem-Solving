//Quick Sort in C++
#include <iostream>

using namespace std;

void swap(int *a, int *b) //function to swap elements
{
    int t = *a;
    *a = *b;
    *b = t;
}

void print(int a[], int n) //function to print the array
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int partition(int a[], int low, int high) // function to find the partition point
{

    // select the rightmost element as pivot
    int pivot = a[high];

    // pointer for greater element
    int i = (low - 1);

    // traverse each element of the array
    // compare them with the pivot
    for (int j = low; j < high; j++)
    {
        if (a[j] <= pivot)
        {

            // if element smaller than pivot is found
            // swap it with the greater element pointed by i
            i++;

            // swap element at i with element at j
            swap(&a[i], &a[j]);
        }
    }

    // swap pivot with the greater element at i
    swap(&a[i + 1], &a[high]);

    // return the partition point
    return (i + 1);
}

void quickSort(int a[], int low, int high)
{
    if (low < high)
    {

        // find the pivot element such that
        // elements smaller than pivot are on left of pivot
        // elements greater than pivot are on righ of pivot
        int pi = partition(a, low, high);

        // recursive call on the left of pivot
        quickSort(a, low, pi - 1);

        // recursive call on the right of pivot
        quickSort(a, pi + 1, high);
    }
}

// Driver code
int main()
{
    int data[] = {8, 7, 6, 1, 0, 9, 2};
    int n = sizeof(data) / sizeof(data[0]);

    cout << "Unsorted Array: \n";
    print(data, n);

    // perform quicksort on data
    quickSort(data, 0, n - 1);

    cout << "Sorted array in ascending order: \n";
    print(data, n);
}