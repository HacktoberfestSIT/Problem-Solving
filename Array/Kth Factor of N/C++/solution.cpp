//https://leetcode.com/problems/the-kth-factor-of-n/
//MY SUBMISSION LINK --> https://leetcode.com/submissions/detail/564495189/
//100% correct
/*Given two positive integers n and k.
A factor of an integer n is defined as an integer i where n % i == 0.
Consider a list of all factors of n sorted in ascending order, return the kth factor in this list or return -1 if n has less than k factors.
Example 1:
Input: n = 12, k = 3
Output: 3
Explanation: Factors list is [1, 2, 3, 4, 6, 12], the 3rd factor is 3.
Example 2:
Input: n = 7, k = 2
Output: 7
Explanation: Factors list is [1, 7], the 2nd factor is 7.
Constraints:

1 <= k <= n <= 1000 */


class Solution {
public:
    int kthFactor(int n, int k) {
	vector<int> factors; // vector to take input factors
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			factors.push_back(i);// Calculating factors and inserting 
		}
	}
	if (factors.size() < k)
  {	return -1;}
	else {
		sort(begin(factors), end(factors));
    // sort in ascending order 
		return factors[k - 1];
	}
}
};
