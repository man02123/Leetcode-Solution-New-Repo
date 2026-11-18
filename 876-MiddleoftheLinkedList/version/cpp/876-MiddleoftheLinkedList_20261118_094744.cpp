// Last updated: 18/11/2026, 09:47:44
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
13    ListNode* middleNode(ListNode* head) {
14        ListNode* f = head ,  *s = head;
15
16        while(f && f->next) {
17            f = f->next->next;
18            s = s->next;
19        }
20        return s;
21    }
22};