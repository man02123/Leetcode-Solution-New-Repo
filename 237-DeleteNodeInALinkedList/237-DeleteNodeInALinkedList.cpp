// Last updated: 08/12/2025, 17:38:07
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        
       node->val = node->next->val;
       node->next = node->next->next;
    }
};