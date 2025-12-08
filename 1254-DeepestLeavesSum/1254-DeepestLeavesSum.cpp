// Last updated: 08/12/2025, 17:33:04
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
public: int sum;
    int ht(TreeNode* root)
     {
        if(root==NULL)
            return 0;
        
        int x=ht(root->left);
        int y=ht(root->right);
        return 1+max(x,y);
    
     }
     void help(TreeNode* root,int h,int lvl)
    {
        if(root==NULL)return ;
        if(h==1+lvl)sum+=root->val;
        help(root->left,h,1+lvl);
        help(root->right,h,1+lvl);
        
    }
    
    int deepestLeavesSum(TreeNode* root) {
        int h=ht(root);
        sum=0;
        help(root,h,0);
        return sum;
    }
   
};