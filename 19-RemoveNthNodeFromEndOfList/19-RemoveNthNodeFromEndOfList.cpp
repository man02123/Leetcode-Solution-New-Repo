// Last updated: 08/12/2025, 17:40:53
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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int count1=0;
        ListNode *temp=head;
        ListNode *prev;
        if(head==NULL)
            return NULL;
        if(head->next==NULL &&n==1)
            return NULL;
      for(int i=0;i<n;++i)
      {
          temp=temp->next;
      }
         if(temp==NULL)
        {
            head=head->next;
            return head;
        }
        
         prev=head;
        { 
        while(temp->next!=NULL)
          {   
            temp=temp->next;
            prev=prev->next;  
          }
           prev->next=prev->next->next;
        }
         return head;
        }
};
       
       