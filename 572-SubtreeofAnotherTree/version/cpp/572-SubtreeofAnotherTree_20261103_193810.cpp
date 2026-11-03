// Last updated: 03/11/2026, 19:38:10
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
14    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
15        return recur(root , subRoot);
16    }
17    bool recur(TreeNode* r, TreeNode* s) {
18
19        if(r == nullptr) return false;
20        if(s == nullptr) return false;
21
22        bool ans = false;
23
24        if(r->val == s->val) {
25            ans = everyNodeMatch(r->left , s->left) && everyNodeMatch(r->right , s->right) ;
26        }
27
28       if(ans) return ans;
29
30       return recur(r->left , s) | recur(r->right , s);
31        
32    }
33    bool everyNodeMatch(TreeNode* r, TreeNode* s){
34        if(r == nullptr && s == nullptr) return true;
35
36        if(r == nullptr) return false;
37        if(s == nullptr) return false;
38
39        bool ans = false;
40
41        if(r->val == s->val) {
42            ans = everyNodeMatch(r->left , s->left) && everyNodeMatch(r->right , s->right) ;
43
44        }
45        return ans;
46
47    }
48};