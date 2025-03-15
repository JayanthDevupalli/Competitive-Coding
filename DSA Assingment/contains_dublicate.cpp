// Link: https://leetcode.com/problems/contains-duplicate/description/
// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
// Example 1:
// Input: nums = [1,2,3,1]
// Output: true
// Explanation:
// The element 1 occurs at the indices 0 and 3.

// Example 2:
// Input: nums = [1,2,3,4]
// Output: false
// Explanation:
// All elements are distinct.

class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            int n=nums.size();
            sort(nums.begin(),nums.end());
            for(int i=0;i<n-1;i++){
                if(nums[i]==nums[i+1]){
                    return true;
                }
            }
            return false;
        }
    };