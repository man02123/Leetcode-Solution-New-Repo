// Last updated: 08/12/2025, 17:32:29
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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        inorder(root1);
        inorder(root2);
        sort(res.begin(),res.end());
        return res;
        
    }
    void inorder(TreeNode* root)
    {
        if(root==nullptr)return ;
        inorder(root->left);
        res.push_back(root->val);
        inorder(root->right);
            
        
    }
};