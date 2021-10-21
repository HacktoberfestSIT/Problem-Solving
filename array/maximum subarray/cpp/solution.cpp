/*
Given an integer array nums, find the contiguous subarray
(containing at least one number) which has the largest sum and return its sum.
A subarray is a contiguous part of an array.

Link to problem: https://leetcode.com/problems/maximum-subarray/

Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

We will use Kadane's Algorithm which is an optimal approach.
time complexity O(n)
space complexity O(1)
So let's do it 😎*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_subA = INT_MIN, sum=0;      // initialise max_subA with INT_MIN or nums[0] & sum =0
        for(auto i: nums){                  // iterating over each element of array
            sum += i;

            // if any time sum exceeds the max_subA, change the value of max_subA to sum
            if(sum > max_subA){ 
                max_subA = sum;             // OR:  max_subA = max(max_subA,sum);
            }
        
            // if any time sum gives a negative sum, change the value of sum to 0
            if(sum<0){
                sum=0;
            }
        } 
        return max_subA;
    }
};