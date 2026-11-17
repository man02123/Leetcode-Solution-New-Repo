// Last updated: 17/11/2026, 10:19:05
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
14    int ans;
15    int diameterOfBinaryTree(TreeNode* root) {
16        ans = 0;
17        int t =  recur(root);
18        return ans;
19    }
20    int recur(TreeNode* root) {
21        if(root == nullptr) return 0;
22
23        int left = recur(root->left);
24        int right = recur(root->right);
25        // case to the root and left + right
26        ans = max(ans , left+right);
27
28        return 1 + max(left, right);
29    }
30};