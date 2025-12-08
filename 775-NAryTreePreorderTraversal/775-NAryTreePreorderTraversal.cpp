// Last updated: 08/12/2025, 17:35:10
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:vector<int> res;
    vector<int> preorder(Node* root) {
        
        help(root);
        return res;   
    }
    void help(Node* root)
    {
        if(root==NULL)return;
        
        res.push_back(root->val);
        
        for(int i=0;i<root->children.size();i++)
            help(root->children[i]);
        
    }
};