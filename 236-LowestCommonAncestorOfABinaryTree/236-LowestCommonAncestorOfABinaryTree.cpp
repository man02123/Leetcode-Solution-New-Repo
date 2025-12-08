// Last updated: 08/12/2025, 17:38:08
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:TreeNode* res;
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        res=root;
        bool flg=help(root,p,q);
        return res;
        
    }
    bool help(TreeNode* root,TreeNode* p,TreeNode* q)
    {
        bool flag=0;
        if(root==nullptr)return 0;
        
        if(root==p || root==q) flag=1;
        
        bool x=help(root->left,p,q);
        bool y=help(root->right,p,q);
         
        if(x==1 && y==1) res=root;
        else if(x==1 && flag==1)res=root;
        else if(y==1 && flag==1)res=root;
        
        return (x||y||flag);
        
        
        
    }
};