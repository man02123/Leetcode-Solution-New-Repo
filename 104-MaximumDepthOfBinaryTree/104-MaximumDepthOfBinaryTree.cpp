// Last updated: 08/12/2025, 17:39:37
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
public:int res;
    int maxDepth(TreeNode* root) {  
      res=0;
        help(root,0);
        //if(res==INT_MAX)return 0;
        return res;
    }
    void help(TreeNode* root,int lvl)
    {
        if(root==nullptr)return;
        if(root->left==nullptr && root->right==nullptr)
        {
            res=max(1+lvl,res);
        }
        help(root->left,1+lvl);
        help(root->right,1+lvl);
        
        
    }
};