// Last updated: 08/12/2025, 17:35:04
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
public:TreeNode *res;
    TreeNode* searchBST(TreeNode* root, int val) {
      res=NULL;
        help(root,val);
        return res;
        
    }
void help(TreeNode* root,int val)
{
    if(root==nullptr)return;
    if(root->val==val)
    {
        res=root;
        return;
    }
    if(root->val>val)
        help(root->left,val);
    else
        help(root->right,val);
    
}
    
};