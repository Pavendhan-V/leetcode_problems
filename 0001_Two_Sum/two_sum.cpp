/*
1. Two Sum
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
 

Constraints:

2 <= nums.length <= 10^4
-10^9 <= nums[i] <= 10^9
-10^9 <= target <= 10^9
Only one valid answer exists.
*/

#include <iostream>
#include <vector>

using namespace std;


class TowSum
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> t;
        int flag = 0;

        for (int i = 0; i < (nums.size() - 1); i++) {

            for (int j = i+1; j < nums.size(); j++) {

                if ((nums[i] + nums[j]) == target) {
                    t.push_back(i);
                    t.push_back(j);
                    flag = 1;
                    break;
                }
            }
            
            if (flag == 1)
                break;
        }

        return t;
    }
};


int main(int argv, char* argc[])
{
    TowSum ts;

    vector<int> nums1 = { 2, 7, 11, 15 };
    int target1 = 9;

    vector<int> nums2 = { 3, 2, 4 };
    int target2 = 6;

    vector<int> nums3 = { 3, 3 };
    int target3 = 6;

    vector<int> out1 = ts.twoSum(nums1, target1);
    std::cout << "out1 : " << out1.at(0) << "," << out1.at(1) << std::endl;

    vector<int> out2 = ts.twoSum(nums2, target2);
    std::cout << "out2 : " << out2.at(0) << "," << out2.at(1) << std::endl;

    vector<int> out3 = ts.twoSum(nums3, target3);
    std::cout << "out3 : " << out3.at(0) << "," << out3.at(1) << std::endl;

    return 0;
}