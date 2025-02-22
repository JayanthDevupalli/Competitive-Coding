// Link : https://leetcode.com/problems/missing-number/description/

// 268. Missing Number
// Solved
// Easy
// Topics
// Companies
// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
// Example 1:
// Input: nums = [3,0,1]
// Output: 2

// Example 2:
// Input: nums = [0,1]
// Output: 2

// Example 3:
// Input: nums = [9,6,4,2,3,5,7,0,1]
// Output: 8

class Solution {
    public int missingNumber(int[] nums) {
        HashSet<Integer> a=new HashSet<>();
        int n=nums.length;
        for(int i:nums){
            a.add(i);
        }
        int j=0;
        while(j<n){
            if(!a.contains(j)){
                return j;
            }
            j++;
        }
        return n;
    }
}