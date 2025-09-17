// Link: https://leetcode.com/problems/range-sum-query-mutable/
// Given an integer array nums, handle multiple queries of the following types:
// Update the value of an element in nums.
// Calculate the sum of the elements of nums between indices left and right inclusive where left <= right
// Implement the NumArray class:
// NumArray(int[] nums) Initializes the object with the integer array nums.
// void update(int index, int val) Updates the value of nums[index] to be val.
// int sumRange(int left, int right) Returns the sum of the elements of nums between
// indices left and right inclusive (i.e. nums[left] + nums[left + 1] + ... + nums[right]).
// Given an integer array nums, handle multiple queries of the following types:

// Update the value of an element in nums.
// Calculate the sum of the elements of nums between indices left and right inclusive where left <= right.
// Implement the NumArray class:

// NumArray(int[] nums) Initializes the object with the integer array nums.
// void update(int index, int val) Updates the value of nums[index] to be val.
// int sumRange(int left, int right) Returns the sum of the elements of nums between indices left and right inclusive (i.e. nums[left] + nums[left + 1] + ... + nums[right]).
 

// Example 1:

// Input
// ["NumArray", "sumRange", "update", "sumRange"]
// [[[1, 3, 5]], [0, 2], [1, 2], [0, 2]]
// Output
// [null, 9, null, 8]

// Explanation
// NumArray numArray = new NumArray([1, 3, 5]);
// numArray.sumRange(0, 2); // return 1 + 3 + 5 = 9
// numArray.update(1, 2);   // nums = [1, 2, 5]
// numArray.sumRange(0, 2); // return 1 + 2 + 5 = 8



//Not Optimized
class NumArray {
    int[] arr;  
    public NumArray(int[] nums) {
        arr = nums;
    }
    
    public void update(int index, int val) {
        arr[index] = val;
    }
    
    public int sumRange(int left, int right) {
        int sum = 0;
        for(int i=left;i<=right;i++){
            sum+=arr[i];
        }
        return sum;
    }
}


//Optimized using prefix sum
class NumArray {
    int[] arr;  
    int[] prefixarr;
    public NumArray(int[] nums) {
        arr = nums;
        prefixarr = new int[nums.length];
        prefixarr[0] = nums[0];
        for(int i=1;i<nums.length;i++){
            prefixarr[i] = prefixarr[i-1]+nums[i];
        }
    }
    
    public void update(int index, int val) {
        int diff = val - arr[index];
        arr[index] = val;
        for(int i=index;i<prefixarr.length;i++){
            prefixarr[i] += diff;
        }
    }
    
    public int sumRange(int left, int right) {
        if(left == 0){
            return prefixarr[right];
        }
        return prefixarr[right]-prefixarr[left-1];
    }
}

