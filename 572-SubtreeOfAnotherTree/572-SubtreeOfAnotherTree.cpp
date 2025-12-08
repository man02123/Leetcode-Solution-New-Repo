// Last updated: 08/12/2025, 17:36:02
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
public:bool flag;
    bool isSubtree(TreeNode* root, TreeNode* sr) {
        flag=false;
        help(root,sr);
    
        return flag;
    }
    void help(TreeNode* root, TreeNode* sr)
    {
        if(root==NULL)return ;
        
        if(root->val==sr->val )
        {
            if(check(root,sr))
            { flag=1;
             return;
            }
        }
        help(root->left,sr);
        help(root->right,sr);
        
    }
    bool check(TreeNode* root,TreeNode* sr)
    {
        if(root==NULL && sr==NULL)return true;
        if(root==NULL && sr!=nullptr)return false;
        if(root!=NULL && sr==nullptr) return false;
        if(root->val!=sr->val)return false;
        
        return (check(root->left,sr->left) && check(root->right,sr->right));
    }
};