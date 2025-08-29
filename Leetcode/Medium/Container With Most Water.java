// Link: https://leetcode.com/problems/container-with-most-water/

// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
// Find two lines that together with the x-axis form a container, such that the container contains the most water.
// Return the maximum amount of water a container can store.
// Notice that you may not slant the container.

// Example 1:
// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
// Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

// Example 2:
// Input: height = [1,1]
// Output: 1
 


class Solution {
    public int maxArea(int[] height) {
        // int max=0,cur=0;
        // for(int i=0;i<height.length-1;i++)
        // {
        //     cur = 0;
        //     for(int j=i+1;j<height.length;j++)
        //     {
        //         int breadth = j-i;
        //         int length = Math.min(height[j],height[i]);
        //         cur = breadth * length;
        //         max = Math.max(max,cur);
        //     }
        // }
        // return max; (//time limit exceeded.)
        int start=0;
        int end = height.length-1;
        int cur=0,max=0;
       while(start<end)
            {
                cur =(end-start) * Math.min(height[start],height[end]);
                max = Math.max(max,cur);
                if(height[start]<=height[end])
                {
                    start++;
                }
                else
                {
                    end--;
                }
            }
        return max;
        }
    }