// Last updated: 08/12/2025, 17:38:49
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL)
            return NULL;
        unordered_map<ListNode *,int> mp;
        
        ListNode *temp;
       temp=headA;
        while(temp)
        {
            mp[temp]++;
            temp=temp->next;
        }
        temp=headB;
        while(temp)
              {
                  if(mp[temp]>0)
                     return temp;
                  else
                      temp=temp->next;
              }
            
        return NULL;
        
    }
};