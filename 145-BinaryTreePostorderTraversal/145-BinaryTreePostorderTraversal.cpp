// Last updated: 08/12/2025, 17:38:59
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
    vector<int> res;
    vector<int> postorderTraversal(TreeNode* root) {
       post(root); 
      return res;  
    }
    void post(TreeNode* root)
    {
         if(root==nullptr)return;  
         
        post(root->left); 
            post(root->right);
             
        res.push_back(root->val);
    }
};