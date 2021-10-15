class Solution
{
public:
    bool lemonadeChange(vector<int> &bills)
    {
        int D5 = 0, D10 = 0, D20 = 0;
        for (auto i = bills.begin(); i != bills.end(); i++)
        {
            if (*i == 5)
            {
                D5++;
            }
            else if (*i == 10)
            {
                if (D5 == 0)
                    return false;
                else
                    D5--;
                D10++;
            }
            else if (*i == 20)
            {
                if (D10 > 0 && D5 > 0)
                {
                    D10--;
                    D5--;
                }
                else if (D5 >= 3)
                {
                    D5 -= 3;
                }
                else
                    return false;
            }
        }
        return true;
    }
};

//Note: int main is not given in this code.