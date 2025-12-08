// Last updated: 08/12/2025, 17:31:06
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeInBetween(ListNode* l1, int a, int b, ListNode* l2) {
        ListNode *temp = l1;
        int cnt = 1;
        while(temp->next!=NULL &&  cnt !=a){
            temp = temp->next;
            cnt++;
        }
        
        ListNode *t = temp;
        temp = temp->next;
        
        t ->next = l2;
        
        while(temp != NULL &&  cnt !=b+1){
            temp = temp->next;
            cnt++;
        }
        //cout<<temp->val;
        
        ListNode *x = l2;
        
        while(x->next !=NULL)x = x->next;
              
              x->next = temp;
              
        return l1;
        
        
    }
};