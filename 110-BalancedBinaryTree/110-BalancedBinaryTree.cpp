// Last updated: 08/12/2025, 17:39:32
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
public:bool flag=1;
    bool isBalanced(TreeNode* root) {
      
        int x=ht(root,0);
        return flag;
    
    }
    int ht(TreeNode* root,int h)
    {
        if(root==NULL)return h=0;
        if(flag==0)return false;
        
        int l=ht(root->left,0);
        int r=ht(root->right,0);
        
        if(abs(l-r)>1)flag=0;
        
        return (1+max(l,r));
        
    }
};