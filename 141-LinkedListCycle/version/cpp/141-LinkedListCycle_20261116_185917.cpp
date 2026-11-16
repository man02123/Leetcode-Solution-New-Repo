// Last updated: 16/11/2026, 18:59:17
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    bool hasCycle(ListNode *head) {
12        ListNode *f = head ,  *s = head;
13
14        if(head == nullptr || head->next == nullptr) return false;
15
16        while( s->next != nullptr && f->next!=nullptr ) {
17         
18         s = s->next;
19         f = f->next->next;
20         if(f == nullptr) return false;
21
22         if(f == s) return true;
23
24        }
25        return false;
26
27    }
28};