//Reverse an Array
#include <iostream>

using namespace std;

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void reverse(int a[], int n)
{
    for (int i = 0; i < (n / 2); i++)
    {
        swap(a[i], a[n - 1 - i]);
    }
}

int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter array element : ";
        cin >> a[i];
    }
    cout << "Original Array : ";
    print(a, 5);
    reverse(a, 5);
    cout << "Reversed Array : ";
    print(a, 5);
    return 0;
}
