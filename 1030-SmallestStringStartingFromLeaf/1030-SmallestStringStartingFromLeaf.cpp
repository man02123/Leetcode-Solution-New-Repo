// Last updated: 08/12/2025, 17:33:46
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
public:string res;
    string smallestFromLeaf(TreeNode* root) {
       res="~";
       string temp;
        help(root,temp);
        //reverse(begin(s),end(s));
        return res;
        
    }
    void help(TreeNode* root,string temp)
    {
        if(root==NULL)return;
        temp.push_back(root->val+'a');
        
        if(root->left==nullptr && root->right==nullptr)
        {
            reverse(temp.begin(),temp.end());
                if(temp<res)
                    res=temp;
        }
        
         
        help(root->left,temp);
        help(root->right,temp);
        
      
         
      return ;
    }
};