// Last updated: 26/11/2026, 13:41:26
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
13    ListNode* removeNthFromEnd(ListNode* head, int n) {
14        
15        
16        ListNode * dummy = new ListNode(0);
17        ListNode * d = dummy;
18        ListNode * c = dummy;
19        c->next = head;
20        while(n+1 > 0){
21            d = d->next;
22            n--;
23        }
24        while(d){
25            c = c->next;
26            d = d->next;
27        }
28        c->next = c->next->next;
29
30        return dummy->next;
31    }
32};