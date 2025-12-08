// Last updated: 08/12/2025, 17:39:28
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
public:vector<TreeNode*> temp;
    void flatten(TreeNode* root) {
        pod(root);
        TreeNode* r1=root;
        for(int i=1;i<temp.size();i++)
        {
            root->right=temp[i];
            root->left=NULL;
            root=root->right;
        }
        root=r1;
    }
    void pod(TreeNode* root)
    {
        if(root==NULL)return;
        
        temp.push_back(root);
        pod(root->left);
        pod(root->right);
    }
};