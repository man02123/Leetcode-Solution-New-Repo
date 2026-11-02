// Last updated: 02/11/2026, 18:47:25
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    vector<vector<int>> levelOrder(TreeNode* root) {
15        
16        queue<TreeNode* > q;
17        vector<vector<int>> ans;
18        if(root == nullptr) return ans;
19
20        q.push(root);
21
22        while(!q.empty()) {
23           int totalNode = q.size();
24           vector<int> curr;
25           for(int i = 0 ; i < totalNode ;i++) {
26              curr.push_back(q.front()->val);
27
28              if(q.front()->left != nullptr)
29              q.push(q.front()->left);
30
31              if(q.front()->right != nullptr)
32              q.push(q.front()->right);
33              
34              q.pop();
35           }
36           ans.push_back(curr);
37        }
38
39        return ans ;
40
41    }
42};