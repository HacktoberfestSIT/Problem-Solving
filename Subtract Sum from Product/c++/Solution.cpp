//Subtract the sum of digits from product of digits of a number
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter a Numebr : ";
    cin >> n;
    int s = 0, p = 1, d;
    while (n > 0)
    {
        d = n % 10;
        s += d;
        p *= d;
        n /= 10;
    }
    cout << "Result : " << (p - s) << endl;
    return 0;
}