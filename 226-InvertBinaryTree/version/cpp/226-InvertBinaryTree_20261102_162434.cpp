// Last updated: 02/11/2026, 16:24:34
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
14    TreeNode* invertTree(TreeNode* root) {
15        return recur(root);
16    }
17    TreeNode* recur(TreeNode* root) {
18       
19       if(root == nullptr) return nullptr;
20        
21       TreeNode* left = nullptr ;
22       TreeNode* right = nullptr;
23
24       //if(root->left != nullptr)
25       left = recur(root->left);
26
27       //if(root->left != nullptr)
28       right = recur(root->right);
29       
30       root->left = right ;
31       root->right = left ;
32
33       return root;
34
35    }
36};