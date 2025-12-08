// Last updated: 08/12/2025, 17:35:37
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
    int findSecondMinimumValue(TreeNode* root) {
        
        
        priority_queue<int> pq;
        set<int> s;
        inorder(root,s);
        
        
        
       
        if(s.size()<=1)
            return -1;
        
        for(auto it:s)
        {
            pq.push(it);
            if(pq.size()>2)
                pq.pop();
        }
        
        return pq.top();
        
        
        
    }
    private:
    void inorder(TreeNode* root,set<int> &s)
        {
        if(root==nullptr)
            return;
        inorder(root->left,s);
        s.insert(root->val);
        inorder(root->right,s);
            
        }
        
        
    
};