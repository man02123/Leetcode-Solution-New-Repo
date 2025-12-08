// Last updated: 08/12/2025, 17:32:01
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
    int x;
    int goodNodes(TreeNode* root) {
     int mx=INT_MIN;
        x=0;
        help(root,mx);
      return x;  
    }
    void help(TreeNode* root,int pmx)
    {
        if(root==NULL)return;
        
        if(pmx<=root->val)
        {
           pmx=max(pmx,root->val);
            x++;
        }
        help(root->left,pmx);
        help(root->right,pmx);
        
    }
};