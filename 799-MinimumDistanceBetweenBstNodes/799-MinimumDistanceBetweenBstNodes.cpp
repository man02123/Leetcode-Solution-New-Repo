// Last updated: 08/12/2025, 17:34:57
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
public:vector<int> temp;
    int minDiffInBST(TreeNode* root) {
       
        help(root);
        int res;//=temp[0];
        
        for(int i=1;i<temp.size();i++)
            res=min(temp[i]-temp[i-1],res);
        return res;
    }
   void help(TreeNode* root)
    {
        
       if(root==NULL)return;

          help(root->left);
          temp.push_back(root->val);
          help(root->right);
    
       
        
    }
};