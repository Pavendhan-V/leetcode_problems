/*
1480. Running Sum of 1d Array
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
Example 2:

Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].
Example 3:

Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]
 

Constraints:

1 <= nums.length <= 1000
-10^6 <= nums[i] <= 10^6
*/
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            int temp = 0;
            for (int j = 0; j <= i; j++) {
                temp += nums.at(j);
            }
            result.push_back(temp);
        }

        return result;
    }

    vector<int> runningSum1(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 0);

        result.at(0) = nums.at(0);

        for (int j = 1; j < n; j++) {
            result.at(j) = result.at(j - 1) + nums.at(j);
        }
        return result;
    }
};

int main()
{
    Solution s;

    // Test - 1
    vector<int> input1 { 1, 2, 3, 4 };
    vector<int> output1;

    output1 = s.runningSum(input1);

    for (int i = 0; i < output1.size(); i++) {
        std::cout << output1.at(i) << " ";
    }
    std::cout << std::endl;

    // Test - 1
    vector<int> input2 { 1, 1, 1, 1, 1 };
    vector<int> output2;

    output2 = s.runningSum(input2);

    for (int i = 0; i < output2.size(); i++) {
        std::cout << output2.at(i) << " ";
    }
    std::cout << std::endl;

    return 0;
}