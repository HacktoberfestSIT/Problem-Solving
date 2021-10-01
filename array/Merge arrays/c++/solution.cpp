//Merging two arrays
#include <iostream>

using namespace std;

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}

void merge(int a[], int b[], int res[], int n, int m)
{
    int i = 0, j = 0, k = 0;
    while (i < n)
    {
        res[k] = a[i];
        i += 1;
        k += 1;
    }
    while (j < m)
    {
        res[k] = b[j];
        j += 1;
        k += 1;
    }
    sort(res, n + m);
}

int main()
{
    int a[] = {1, 4, 9, 11, 8};
    int b[] = {13, 21, 3, 6, 19};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    cout << "First Array : ";
    print(a, n);
    cout << "Second Array : ";
    print(b, m);
    int res[m + n];
    merge(a, b, res, n, m);
    cout << "Merged Array : ";
    print(res, n + m);
    return 0;
}