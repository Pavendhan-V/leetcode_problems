/*
3264. Final Array State After K Multiplication Operations I

You are given an integer array nums, an integer k, and an integer multiplier.

You need to perform k operations on nums. In each operation:

Find the minimum value x in nums. If there are multiple occurrences of the minimum value, select the one that appears first.
Replace the selected minimum value x with x * multiplier.
Return an integer array denoting the final state of nums after performing all k operations.

 

Example 1:

Input: nums = [2,1,3,5,6], k = 5, multiplier = 2

Output: [8,4,6,5,6]

Explanation:

Operation	Result
After operation 1	[2, 2, 3, 5, 6]
After operation 2	[4, 2, 3, 5, 6]
After operation 3	[4, 4, 3, 5, 6]
After operation 4	[4, 4, 6, 5, 6]
After operation 5	[8, 4, 6, 5, 6]
Example 2:

Input: nums = [1,2], k = 3, multiplier = 4

Output: [16,8]

Explanation:

Operation	Result
After operation 1	[4, 2]
After operation 2	[4, 8]
After operation 3	[16, 8]
 

Constraints:

1 <= nums.length <= 100
1 <= nums[i] <= 100
1 <= k <= 10
1 <= multiplier <= 5
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int min_ind;
        int min;
        for (int i = 0; i < k; i++) {
            min = nums.at(0);
            min_ind = 0;
            for (int j = 1; j < nums.size(); j++) {
                if ((nums.at(j) < min ) && (min != nums.at(j))) {
                    min_ind = j;
                    min = nums.at(j);
                }
            }
            nums.at(min_ind) *= multiplier;
        }

        return nums;
    }
};

int main()
{
    Solution s;

    // Test - 1
    vector<int> input1 { 2, 1, 3, 5, 6 };
    int k1 = 5;
    int multiplier1 = 2;
    vector<int> output1;

    output1 = s.getFinalState(input1, k1, multiplier1);

    for (int i = 0; i < output1.size(); i++) {
        std::cout << output1.at(i) << " ";
    }
    std::cout << std::endl;

    // Test - 2
    vector<int> input2 { 1, 2 };
    int k2 = 3;
    int multiplier2 = 4;
    vector<int> output2;

    output2 = s.getFinalState(input2, k2, multiplier2);

    for (int i = 0; i < output2.size(); i++) {
        std::cout << output2.at(i) << " ";
    }
    std::cout << std::endl;

    return 0;
}