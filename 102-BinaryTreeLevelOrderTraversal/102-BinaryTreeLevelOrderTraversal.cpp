// Last updated: 08/12/2025, 17:39:40
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> v;
        if(root==NULL)
            return v;
        q.push(root);
        while(q.empty()!=1)
        {
            vector<int> level;
            int n=q.size();
            for(int i=0;i<n;i++)
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
        
        
      return v;  
    }
};