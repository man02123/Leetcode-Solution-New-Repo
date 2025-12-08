// Last updated: 08/12/2025, 17:39:01
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */#include<stack>
class Solution {
public:
    void reorderList(ListNode* head) {
        stack<ListNode* >st;
        int size  = 0 ,count = 0;
        ListNode* temp = head ;
        while(temp != NULL){
            st.push(temp);
            size += 1;
            temp = temp->next ;
        }
        temp = head;
        while(temp != NULL){
            count += 1 ; 
            if(count > size/2){
                temp->next = NULL ;
                return ;
            }
            st.top()->next = temp->next ;
            temp->next = st.top() ;
            temp = st.top()->next;
            st.pop();
        }
        
    }
};