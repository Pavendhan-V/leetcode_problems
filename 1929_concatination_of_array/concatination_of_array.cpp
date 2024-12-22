/*s
1929. Concatenation of Array

Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).

Specifically, ans is the concatenation of two nums arrays.

Return the array ans.

 

Example 1:

Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
- ans = [1,2,1,1,2,1]
Example 2:

Input: nums = [1,3,2,1]
Output: [1,3,2,1,1,3,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[3],nums[0],nums[1],nums[2],nums[3]]
- ans = [1,3,2,1,1,3,2,1]
 

Constraints:

n == nums.length
1 <= n <= 1000
1 <= nums[i] <= 1000
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        
        for (int j = 0; j < 2; j++) {
            for (int i =0; i < nums.size(); i++) {
                ans.push_back(nums.at(i));
            }
        }

        return ans;
    }
};

int main()
{
    Solution s;

    // Test - 1 
    std::vector<int> input1 { 1, 2, 1 };
    std::vector<int> output1;

    output1 = s.getConcatenation(input1);

    for (int i = 0; i < output1.size(); i++) {
        std::cout << output1.at(i) << " ";
    }
    std::cout << std::endl;

    // Test - 2
    std::vector<int> input2 { 1,3,2,1 };
    std::vector<int> output2;

    output2 = s.getConcatenation(input2);

    for (int i = 0; i < output2.size(); i++) {
        std::cout << output2.at(i) << " ";
    }
    std::cout << std::endl;

    return 0;
}