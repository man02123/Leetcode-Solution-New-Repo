// Last updated: 08/12/2025, 17:33:31
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
public:int sum;
    int sumRootToLeaf(TreeNode* root) {
        sum=0;
        string  s;
        help(root,s);
        return sum;
        
    }
    void help(TreeNode* root,string s)
    {
        if(root==nullptr)return ;
        if(root->left==NULL && root->right==NULL)
        {
            s.push_back(root->val+'0');
            int dec=stoi(s,nullptr,2);
            sum+=dec;
            return;
        }
        s.push_back(root->val+'0');
        help(root->left,s);
        help(root->right,s);
        
    }
};




// std::string bin("1101");
// int dec = std::stoi(bin, nullptr, 2);