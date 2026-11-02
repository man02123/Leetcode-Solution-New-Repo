// Last updated: 02/11/2026, 16:38:00
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
14    int maxDepth(TreeNode* root) {
15        return recur(root);
16    }
17    int recur(TreeNode* root ) {
18
19        if(root == nullptr) return 0;
20
21        return 1 + max({recur(root->left) , recur(root->right)});
22    
23
24    }
25};