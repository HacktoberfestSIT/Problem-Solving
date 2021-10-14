#include <bits/stdc++.h>
using namespace std;

//function to convert Valid Roman to Integer
int romanToInt(string s)
{
    int val = 0;
    map<char, int> Rvalues =
        {{'I', 1},
         {'V', 5},
         {'X', 10},
         {'L', 50},
         {'C', 100},
         {'D', 500},
         {'M', 1000}};
    for (int i = 0; i < s.length(); i++)
    {
        if (Rvalues[s[i]] < Rvalues[s[i + 1]])
        {
            val -= Rvalues[s[i]];
        }
        else
        {
            val += Rvalues[s[i]];
        }
    }
    return val;
}

int main()
{
    string s;
    cin >> s;
    cout << romanToInt(s);
    return 0;
}