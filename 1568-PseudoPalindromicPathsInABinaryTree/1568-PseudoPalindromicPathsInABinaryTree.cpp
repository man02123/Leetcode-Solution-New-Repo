// Last updated: 08/12/2025, 17:31:56
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
public:int count;
    int pseudoPalindromicPaths (TreeNode* root) {
        count=0;
        unordered_map<int,int> mp;
        help(root,mp);
        return count;
    }
    void help(TreeNode* root,unordered_map<int,int>& mp)
    {
        if(root->left==NULL && root->right==NULL)
        {
            mp[root->val]++;
            int odd=0;
            
           for(auto it:mp)
               if(it.second%2==1)odd++;
            
            if(odd<=1)count++;
            mp[root->val]--;
            return;
        }
        
         mp[root->val]++;
        
        if(root->left!=NULL)   
        help(root->left,mp);
        
        if(root->right!=NULL) 
        help(root->right,mp);
        mp[root->val]--;
       
    }
};