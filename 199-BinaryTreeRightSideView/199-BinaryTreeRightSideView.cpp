// Last updated: 08/12/2025, 17:38:35
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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> res;
        if(root==nullptr)return{};
        
        q.push(root);
        while(q.size()>0)
        {
            int k=q.size();
            while(k>1)
            {
                if(q.front()!=nullptr)
                {
                  if(q.front()->left!=NULL)
                  q.push(q.front()->left);
                 
                  if(q.front()->right!=NULL)
                  q.push(q.front()->right);
                }
                q.pop();
                k--;
            }
            if(q.front()!=nullptr)
            {
               res.push_back(q.front()->val);
                if(q.front()->left!=NULL)
                  q.push(q.front()->left);
                 
                  if(q.front()->right!=NULL)
                  q.push(q.front()->right);
            }
            
            q.pop();
        
        }
        return res;
        
        
    }
};