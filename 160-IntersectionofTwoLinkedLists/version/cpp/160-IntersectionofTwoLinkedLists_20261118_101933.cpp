// Last updated: 18/11/2026, 10:19:33
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
11    ListNode *getIntersectionNode(ListNode *ha, ListNode *hb) {
12       ListNode * a = ha , *b  = hb;
13
14       while(a != b) {
15        a = (a!= nullptr) ?  a->next : hb;
16        b = (b!= nullptr) ?  b->next : ha;
17       }
18       return b;
19    }
20
21};