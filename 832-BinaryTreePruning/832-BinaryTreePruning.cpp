// Last updated: 08/12/2025, 17:34:42
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
public:
    TreeNode* pruneTree(TreeNode* root) {
        bool t=help(root);
        if(t==false)
            return NULL;
        return root;
        
    }
    bool help(TreeNode* root)
    {
        if(root==NULL)return false;
        //if(root->left==NULL && root->right==NULL && root->val==0)return false;
        //if(root->left==NULL && root->right==NULL && root->val==1)return true;
        
        bool l=help(root->left);
        bool r=help(root->right);
        
        if(l==false)
          root->left=NULL;
        if(r==false)
            root->right=NULL;
        
        bool flag=true;
        if(root->val==0)flag=false;
       
        if(l==true || r==true || flag==true)
            return true;

            return false;
       
    }
};