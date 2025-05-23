// Link: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/

// Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.
// Example 1:
// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [5,6]

// Example 2:
// Input: nums = [1,1]
// Output: [2]
#include <iostream>
#include <vector>

class Solution {
    public:
        vector<int> findDisappearedNumbers(vector<int>& nums) {
            sort(begin(nums), end(nums));
            vector<int> ans;
            for(int i = 1; i <= size(nums); i++) 
                if(!binary_search(begin(nums), end(nums), i))
                    ans.push_back(i);
            return ans;
        }
    };