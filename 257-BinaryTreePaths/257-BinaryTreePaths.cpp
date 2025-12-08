// Last updated: 08/12/2025, 17:38:02
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
public:vector<string>res;
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root==nullptr)return{""};
        
        string temp;//=to_string(root->val);
        helper(root,temp);
        
       return res; 
    }
    void helper(TreeNode* root,string s)
    {
        if(root==nullptr)return;
        
        if(root->left==nullptr && root->right==nullptr)
        {
            s=s+to_string(root->val);
            res.push_back(s);
            return;
        }
        
        if(root->left==nullptr)
        {
           s= s+to_string(root->val)+"->";
            helper(root->right,s);
        }
       else if(root->right==nullptr)
        { 
           s= s+to_string(root->val)+"->";
            helper(root->left,s);
        }
        else 
        {
           s= s+to_string(root->val)+"->";
             helper(root->left,s);
            helper(root->right,s);
            
        }
     
    }
};