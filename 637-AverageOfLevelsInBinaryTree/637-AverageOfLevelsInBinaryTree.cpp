// Last updated: 08/12/2025, 17:35:51
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
    vector<double> averageOfLevels(TreeNode* root) {
              queue<TreeNode*> q;
        vector<double> v;
        if(root==NULL)
            return v;
        
        q.push(root);
        int n;
        while((n=q.size())!=0)
        {
            vector<double> level;
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
            double sum=0;
            for(auto it:level)
            {
              
                sum+=it;
                    
            }
            v.push_back(sum/(level.size()));
            
            
            
        }
        
      return v;  
    }
};
        