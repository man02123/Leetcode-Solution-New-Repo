// Last updated: 08/12/2025, 17:39:30
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
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        return helper(root,targetSum);
    }
    bool helper(TreeNode* root,int tgt)
    {
        //cout<<tgt<<"  ";
        if(root==NULL)return 0;
        
        if(root->right==NULL && root->left==NULL && (tgt-root->val)==0)return true;
        
        //if((tgt-root->val)<=0 )return false;
        
        bool x=helper(root->left,tgt-root->val);
        bool y=helper(root->right,tgt-root->val);
        return(x||y);
    }
};