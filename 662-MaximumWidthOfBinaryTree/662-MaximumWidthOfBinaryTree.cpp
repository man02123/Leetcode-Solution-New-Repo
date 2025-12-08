// Last updated: 08/12/2025, 17:35:39
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
    int widthOfBinaryTree(TreeNode* root) {
        pair<TreeNode*,int> p;
        int res=0;
        queue<pair<TreeNode*,long long>> q;
        q.push({root,0});
        while(q.size()>0)
        {
            int k=q.size();
            int start=q.front().second;
            int end=q.back().second;
          
             res=max(end-start+1,res);
            
            while(k>0)
            {
                p=q.front();
                q.pop();
                int ind=p.second-start;
                
                if(p.first!=nullptr)
                {
                    if(p.first->left!=nullptr)
                 q.push({p.first->left,(long long) 2*ind+1});
                  
                    if(p.first->right!=nullptr)
                 q.push({p.first->right,(long long) 2*ind+2}); 
                }
               
                k--;
            }   
        }
        return res;
    }
};