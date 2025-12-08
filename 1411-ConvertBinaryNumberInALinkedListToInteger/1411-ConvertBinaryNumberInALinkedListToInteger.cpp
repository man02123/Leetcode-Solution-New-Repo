// Last updated: 08/12/2025, 17:32:33
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
    int getDecimalValue(ListNode* head) {
        int len = 0;

        ListNode *temp = head;
        int ans = 0;

         while(temp != nullptr) {
                temp = temp->next;
                len++;
            }

          int cnt = 0;
          temp = head;
            while(temp != nullptr) {
                
                if(temp->val == 1) {
                 ans += pow(2,len-cnt-1);
                }
                temp = temp->next;
                cnt++;
            }
            

        
        return ans;
        
    }
};