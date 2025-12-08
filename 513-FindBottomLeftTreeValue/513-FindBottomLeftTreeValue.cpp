// Last updated: 08/12/2025, 17:36:25
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
    int res;
    bool flag;
    int ht(TreeNode* root)
     {
        if(root==NULL)return 0;
        return 1+max(ht(root->left),ht(root->right));
     }
    
    int findBottomLeftValue(TreeNode* root) {
        int h=ht(root);
         res=0;
         flag=0;
         help(root,h,0);
         return res;
    }
    void help(TreeNode* root,int h,int lvl)
    {
        if(root==NULL)return ;
     
        if( 1+lvl==h && flag==0)
        {
            res=root->val;
            if(root->left!=NULL)
            res=root->left->val;
            
            flag=1;
    
        }
        
         help(root->left,h,1+lvl);
         help(root->right,h,1+lvl);
        
        
        
    }
    
};