// // Link : https://leetcode.com/problems/linked-list-cycle/description/
// 141. Linked List Cycle
// Given head, the head of a linked list, determine if the linked list has a cycle in it.
// Example 1:
// Input: head = [3,2,0,-4], pos = 1
// Output: true
// Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).

// #include <iostream>

// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };

class Solution {
    public:
        bool hasCycle(ListNode *head) {
            if (!head || !head->next) {
                return false;
            }
            ListNode *slow = head;
            ListNode *fast = head;
            while (fast->next && fast->next->next) {
                fast = fast->next->next;
                slow = slow->next;
                if (slow == fast) {
                    return true;
                }
            }
            return false;
        }
    };