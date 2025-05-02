// Link: https://www.geeksforgeeks.org/problems/count-nodes-of-linked-list/1

// Count Linked List Nodes
// Difficulty: BasicAccuracy: 85.99%Submissions: 254K+Points: 1Average Time: 15m
// Given a singly linked list. The task is to find the length of the linked list, where length is defined as the number of nodes in the linked list.

// Examples :

// Input: LinkedList : 1->2->3->4->5

// Output: 5
// Explanation: Count of nodes in the linked list is 5, which is its length.

class Solution {
    public:
      // Function to count nodes of a linked list.
      int getCount(struct Node* head) {
          int c=0;
          // Code here
          Node* cur = head;
          while(cur!=NULL){
              c++;
              cur=cur->next;
          }
          return c;
      }
};