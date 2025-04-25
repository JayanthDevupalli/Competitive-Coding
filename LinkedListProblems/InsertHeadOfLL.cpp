// Insertion at the head of LL
// Given the head of a singly linked list and an integer X, insert a node with value X at the head of the linked list and return the head of the modified list.
// The head is the first node of the linked list.

// Examples:
// Input: head -> 1 -> 2 -> 3, X = 7
// Output: head -> 7 -> 1 -> 2 -> 3
// Explanation: 7 was added as the 1st node.

// Input: head, X = 7
// Output: head -> 7
// Explanation: 7 was added as the 1st node.

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};


class Solution {
    public:
        ListNode* insertAtHead(ListNode* &head, int X) {
            ListNode* nnode = new ListNode(X,head);
            head=nnode;
            return nnode;
        }
    };