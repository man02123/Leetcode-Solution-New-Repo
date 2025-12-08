// Last updated: 08/12/2025, 17:38:09
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
        res=NULL;
        bool x=help(root,p,q);
        return res;
        
    }
    bool help(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if(root==NULL)return false;
        
        bool flag=0;
        if(root==p || root==q)
            flag=1;
        
        bool l=help(root->left,p,q);
        bool r=help(root->right,p,q);
        
        if(l==true && r==true)
        {
            res=root;
            return false;
        }
        else if(flag==1 && r==1)
        {
            res=root;
            return false;
        }
        else if(flag==1 && l==1)
        {
            res=root;
            return false;
        }
        
        return (r||l||flag);
       
    }
};