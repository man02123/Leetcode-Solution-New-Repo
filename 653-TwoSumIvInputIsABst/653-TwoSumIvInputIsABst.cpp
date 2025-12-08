// Last updated: 08/12/2025, 17:35:43
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
public:int target;
    bool findTarget(TreeNode* root, int k) {
        target=k;
        //if(root->left==nullptr && root->right==NULL && root->val!=k)return false;
        return traverse(root,root);
    }
    
   bool traverse(TreeNode* root,TreeNode* actroot)
   {
       if(root==NULL)return false;
     
       bool x=search(actroot,target-root->val,root);
      
       
       return (x || traverse(root->left,actroot) || traverse(root->right,actroot));
   }
    bool search(TreeNode* root,int tgt,TreeNode* curr)
    {
        if(root==NULL)return false;
        
        if(root->val==tgt && root!=curr)
        {
           cout<<tgt;
            return true;
        }
        
        if(root->val>tgt)
            return search(root->left,tgt,curr);
        else
           return search(root->right,tgt,curr); 
         
        return false;
    }
               
};