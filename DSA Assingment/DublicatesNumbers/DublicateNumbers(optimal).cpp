// This function uses the Floyd’s Cycle Detection algorithm to identify
// the duplicate element in an array where numbers act like pointers in a linked list.
// The idea is to treat values as indices and detect a cycle due to the repeated value.

using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Step 1: Use two pointers (slow and fast) to find the meeting point inside the cycle
        int slow = nums[0];
        int fast = nums[0];

        do {
            slow = nums[slow];           // move by 1
            fast = nums[nums[fast]];     // move by 2
        } while (slow != fast);          // stop when pointers meet

        // Step 2: Find the entrance of the cycle (duplicate number)
        int start = nums[0];
        while (start != slow) {
            start = nums[start];
            slow = nums[slow];
        }

        // The starting point of the cycle is the duplicate
        return start;
    }
};
