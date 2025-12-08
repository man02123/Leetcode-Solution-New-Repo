// Last updated: 08/12/2025, 17:29:32
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
    ListNode* deleteMiddle(ListNode* head) {
       ListNode* f,*s,*p;
        if(head->next==NULL)
            return NULL;
        f=s=p=head;
        while(f && f->next)
        { p=s;
         f=f->next->next;
            s=s->next;
        }
       
        p->next=s->next;
        
        return head;
        
    }
};