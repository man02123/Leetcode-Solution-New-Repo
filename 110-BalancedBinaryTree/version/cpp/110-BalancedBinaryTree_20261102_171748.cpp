// Last updated: 02/11/2026, 17:17:48
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
14bool ans = true;
15    bool isBalanced(TreeNode* root) {
16        int temp = recur(root);
17        return ans;
18    }
19    int recur(TreeNode* root) {
20       
21       if(root == nullptr){
22         return 0;
23       }
24
25       int l = recur(root->left);
26       int r = recur(root->right);
27
28       if(abs(r-l) > 1){
29        ans = false;
30        return 5001;
31       }
32
33       return 1 + max(recur(root->left) , recur(root->right));
34
35    }
36};