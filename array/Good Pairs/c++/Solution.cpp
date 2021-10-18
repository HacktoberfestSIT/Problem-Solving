//Find No. of Good Pairs
#include <iostream>

using namespace std;

int main()
{
    int n, c = 0;
    cout << "Enter no. of elements : ";
    cin >> n;
    int *a = new int[n];
    cout << "Enter array elements..." << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
                c++;
        }
    }
    cout << "Total No. of Good Pairs : " << c << endl;
    return 0;
}