// Last updated: 08/12/2025, 17:38:13
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
    int kthSmallest(TreeNode* root, int k) {
         vector<int> v;
        priority_queue<int> pq;
        inorder(root,v);
        for(int i=0;i<v.size();++i)
        {
            pq.push(v[i]);
            if(pq.size()>k)
                pq.pop();
        }
        return pq.top();
        
        
        
    }
    private:
    void inorder(TreeNode* root,vector<int> &v)
        {
        if(root==nullptr)
            return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
            
        }
        
    
};
        
    