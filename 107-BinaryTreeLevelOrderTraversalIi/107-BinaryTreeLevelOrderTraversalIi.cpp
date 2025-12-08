// Last updated: 08/12/2025, 17:39:36
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
              queue<TreeNode*> q;
        vector<vector<int>> v;
        if(root==NULL)
            return v;
        
        q.push(root);
        int n;
        while((n=q.size())!=0)
        {
            vector<int> level;
            for(int i=0;i<n;++i)
            {
           TreeNode*temp=q.front();
            if(temp->left!=NULL)
                q.push(temp->left);
                
            if(temp->right!=NULL)
                q.push(temp->right);
                
            level.push_back(temp->val);
                q.pop();
            
                }
            v.push_back(level);
            
            
            
        }
        
        reverse(v.begin(),v.end());
      return v;  
    }
};
        
    