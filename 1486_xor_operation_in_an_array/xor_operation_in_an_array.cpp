/*
1486. XOR Operation in an Array
You are given an integer n and an integer start.

Define an array nums where nums[i] = start + 2 * i (0-indexed) and n == nums.length.

Return the bitwise XOR of all elements of nums.

 

Example 1:

Input: n = 5, start = 0
Output: 8
Explanation: Array nums is equal to [0, 2, 4, 6, 8] where (0 ^ 2 ^ 4 ^ 6 ^ 8) = 8.
Where "^" corresponds to bitwise XOR operator.
Example 2:

Input: n = 4, start = 3
Output: 8
Explanation: Array nums is equal to [3, 5, 7, 9] where (3 ^ 5 ^ 7 ^ 9) = 8.
 

Constraints:

1 <= n <= 1000
0 <= start <= 1000
n == nums.length
*/

#include <iostream>

using namespace std;

class Solution {
public:
    int xorOperation(int n, int start) {
        int result;
        result = start + 2 * 0;

        for (int i = 1; i < n; i++) {
            result = result ^ (start + 2 * i);
        }

        return result;
    }
};

int main()
{
    Solution s;

    // Test - 1
    int n1 = 5;
    int start1 = 0;
    int output1;

    output1 = s.xorOperation(n1, start1);

    std::cout << output1 << std::endl;

    // Test - 1
    int n2 = 4;
    int start2 = 3;
    int output2;

    output2 = s.xorOperation(n2, start2);

    std::cout << output2 << std::endl;

    return 0;
}