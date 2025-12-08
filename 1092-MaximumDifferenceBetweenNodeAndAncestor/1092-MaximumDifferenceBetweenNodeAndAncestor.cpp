// Last updated: 08/12/2025, 17:33:27
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
    int maxAncestorDiff(TreeNode* root) {
         res=-1;
        help(root,root->val,root->val);
        return res;
        
    }
    void help(TreeNode* root,int mx,int mn)
    {

        if(root==nullptr)return;
        
       if(root->val>mx)mx=root->val;
       if(root->val<mn)mn=root->val;
        
        int temp=max(abs(root->val-mx),abs(root->val-mn));
        res=max(temp,res);
        
        help(root->left,mx,mn);
        help(root->right,mx,mn);
    

}
};