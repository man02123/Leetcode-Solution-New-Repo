// Last updated: 08/12/2025, 17:38:57
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
    ListNode* sortList(ListNode* head) {
       ListNode*temp;
        temp=head;
        vector<int> v;
        while(temp)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        sort(v.begin(),v.end());
        temp=head;
        int i=-1;
        while(temp)
        {
            temp->val=v[++i];
            temp=temp->next;
            
        }
        return head;
       
          }
        
    
};