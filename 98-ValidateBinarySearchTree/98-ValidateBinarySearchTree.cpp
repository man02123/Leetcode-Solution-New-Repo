// Last updated: 08/12/2025, 17:39:44
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
public:vector<int> res;
    bool isValidBST(TreeNode* root) {
      
        if(root->left==NULL && root->right==NULL)return true;
        help(root);
        vector<int> temp=res;
        sort(res.begin(),res.end());

        
        for(int i=1;i<res.size();i++)
         if(res[i]==res[i-1])return false;
        
        if(temp==res)
            return true;
        return false;

       
    }
    void help(TreeNode* root)
    {
        if(root==NULL)
            return;
        help(root->left);
        res.push_back(root->val);
        help(root->right);
        
    }
};