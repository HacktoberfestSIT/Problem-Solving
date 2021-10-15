class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        int start = 0, end = nums.size() - 1;
        while (start < end)
        {
            if (nums[start] % 2 > nums[end] % 2)
            {
                nums[start] = nums[start] + nums[end];
                nums[end] = nums[start] - nums[end];
                nums[start] = nums[start] - nums[end];
            }

            if (nums[start] % 2 == 0)
                start++;
            if (nums[end] % 2 == 1)
                end--;
        }

        return nums;
    }
};

//NOTE: int main is not included in the solution