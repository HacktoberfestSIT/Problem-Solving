//Finding the missing number
#include <iostream>

using namespace std;

void check(int *a, int *b, int n)
{
    for (int i = 0; i <= n; i++)
    {
        int c = 0;
        for (int j = 0; j < n; j++)
        {
            if (b[i] == a[j])
                c++;
        }
        if (c == 0)
        {
            cout << "Missing No. : " << b[i] << endl;
            exit(0);
        }
    }
}

int main()
{
    int n;
    cout << "Enter no. of elements : ";
    cin >> n;
    int *a = new int[n];
    cout << "Enter elements into the array :" << endl;
    cout << "NOTE : Each element should be unique and in [0,n]"
         << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int *b = new int[n + 1];
    for (int i = 0; i <= n; i++)
        b[i] = i;
    check(a, b, n);
    return 0;
}