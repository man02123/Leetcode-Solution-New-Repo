// Last updated: 08/12/2025, 17:33:33
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
    vector<int> nextLargerNodes(ListNode* head) {
        stack<int>s2;
        ListNode* temp;
        temp=head;
        vector<int> v,v2;
        while(temp)
        {
            v.push_back(temp->val);
       
                temp=temp->next;  
        }
    
     for(int i=v.size()-1;i>=0;--i)
        {
             
            if(s2.size()==0)
            {
             v2.push_back(0);
              
            }
           
            else if(s2.size()>0 && s2.top()>v[i])
            {
                v2.push_back(s2.top());
                
            }
           else 
           {
               while(s2.size()!=0 && s2.top()<=v[i])
                   s2.pop();
               if(s2.size()==0)
                   v2.push_back(0);
               else 
                   v2.push_back(s2.top());
           }

           s2.push(v[i]);
       
        }
        reverse(v2.begin(),v2.end());
        return v2;
    }
};