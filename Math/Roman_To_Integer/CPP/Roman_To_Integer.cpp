class Solution {
public:
    int romanToInt(string s) {
        int roman[256],sum=0;
        roman['I']=1;
        roman['V']=5;
        roman['X']=10;
        roman['L']=50;
        roman['C']=100;
        roman['D']=500;
        roman['M']=1000;

        int i=0;
        while(i<s.size())
        {
            int countOfDuplicate=1;
            while(s[i]==s[i+1])
            {
                countOfDuplicate++;
                i++;
            }
            if(i==s.size()-1)
            {
                sum+=countOfDuplicate*roman[s[i]];
                return sum;
            }
            else if(roman[s[i]]<roman[s[i+1]])
            {
                sum+=roman[s[i+1]]-(countOfDuplicate*roman[s[i]]);
                i+=2;
            }
            else
            {
                sum+=(countOfDuplicate*roman[s[i]]);
                i+=1;
            }

        }
        return sum;
    }
};