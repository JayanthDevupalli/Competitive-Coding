// Link: https://www.geeksforgeeks.org/problems/search-in-linked-list-1664434326/0

// Search in Linked List
// Difficulty: EasyAccuracy: 65.4%Submissions: 102K+Points: 2Average Time: 10m
// Given a linked list of n nodes and a key, the task is to check if the key is present in the linked list or not.

// Example:

// Input: n = 4, key = 3
// 1->2->3->4
// Output: true
// Explanation: 3 is present in Linked List, so the function returns true.

class Solution {
    public:
      // Function to count nodes of a linked list.
      bool searchKey(int n, Node* head, int key) {
          // Code here
          while(head!=NULL){
              if(head->data == key){
                  return true;
              }
              head = head->next;
          }
          return false;
      }
};