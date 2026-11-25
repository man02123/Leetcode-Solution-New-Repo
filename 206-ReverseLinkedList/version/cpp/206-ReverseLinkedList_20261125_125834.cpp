// Last updated: 25/11/2026, 12:58:34
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* reverseList(ListNode* head) {
14        if(head == nullptr || head->next == nullptr) return head;
15
16        ListNode* curr = head ;
17        ListNode* prev = nullptr ;
18        
19        while(head) {
20           head = head->next;
21           curr->next = prev;
22           prev = curr;
23           curr = head;
24           
25
26        }
27
28
29        return prev;
30    }
31};