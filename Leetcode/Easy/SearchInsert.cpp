// Link : https://leetcode.com/problems/search-insert-position/description/

// 35. Search Insert Position
// Solved
// Easy
// Topics
// Companies
// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.

// Example 1:
// Input: nums = [1,3,5,6], target = 5
// Output: 2

// Example 2:
// Input: nums = [1,3,5,6], target = 2
// Output: 1

// Example 3:
// Input: nums = [1,3,5,6], target = 7
// Output: 4

class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            int lt = 0;
            int rt = nums.size() - 1;
            while (lt <= rt) {
                int mid = lt + (rt - lt) / 2;
                if (nums[mid] == target) {
                    return mid;
                } else if (nums[mid] > target) {
                    rt = mid - 1;
                } else {
                    lt = mid + 1;
                }
            }
            return lt;        
        }
    };