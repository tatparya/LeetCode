/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//	1 -> 2 -> 3 -> 4
//	Given node 3
//	1 -> 2 -> 4

class Solution {
public:
    void deleteNode(ListNode * node) {
		//	Copy data to next node
		node -> val = node -> next -> val;
		node -> next = node -> next -> next;
    }
};
