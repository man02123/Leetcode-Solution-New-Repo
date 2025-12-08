// Last updated: 08/12/2025, 17:39:48
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp;
        temp=head;
    vector<int> v;
        while(temp)
        {
         v.push_back(temp->val);   
        temp=temp->next;
        }
        int l=left-1;
        int r=right-1;
        while(l<=r)
        {
              swap(v[l],v[r]); 
           l++;
            r--;
        }
    
        temp=head;
        int i=0;
        
        while(temp)
        {
            temp->val=v[i++];
            temp=temp->next;
        }
        return head;
            
        
    }
};