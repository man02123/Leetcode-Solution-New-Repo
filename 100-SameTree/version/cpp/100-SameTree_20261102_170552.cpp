// Last updated: 02/11/2026, 17:05:52
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    bool isSameTree(TreeNode* p, TreeNode* q) {
15        return recur(p , q);
16    }
17    bool recur ( TreeNode* p, TreeNode* q ) {
18        if(p == nullptr && q== nullptr) {
19            return true;
20        }
21
22        if(p == nullptr && q != nullptr) {
23            return false;
24        }
25        if(q == nullptr && p != nullptr) {
26            return false;
27        }
28
29        if(q->val != p->val) return false;
30
31        return recur(p->left , q->left) && recur(p->right , q->right) ;
32
33    }
34};