// Last updated: 02/11/2026, 17:16:09
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
13public:bool flag=1;
14    bool isBalanced(TreeNode* root) {
15      
16        int x=ht(root,0);
17        return flag;
18    
19    }
20    int ht(TreeNode* root,int h)
21    {
22        if(root==NULL)return h=0;
23        if(flag==0)return false;
24        
25        int l=ht(root->left,0);
26        int r=ht(root->right,0);
27        
28        if(abs(l-r)>1)flag=0;
29        
30        return (1+max(l,r));
31        
32    }
33};