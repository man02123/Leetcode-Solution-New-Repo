// Last updated: 08/12/2025, 17:33:54
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:bool flag;
    bool isUnivalTree(TreeNode* root) {
        if(root==nullptr)return true;
        int t=root->val;
        flag=true;
        help(root,t);
        return flag;
    }
    void help(TreeNode* root,int t)
    {
        if(root==NULL)return ;
        
        if(root->val!=t)
        {
            flag=false;
            return;
        }
        help(root->left,t);
        help(root->right,t);
   
    }
};