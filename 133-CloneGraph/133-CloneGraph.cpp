// Last updated: 08/12/2025, 17:39:10
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
      if(node != nullptr){
      Node * ans = new Node();
      ans->val = node->val;

      unordered_map<Node * ,  Node * >  myMap;
      myMap[node] = ans;

      queue<Node*> q;
      q.push(node);
      
      while(q.size() > 0){

        auto c = q.front();
        q.pop();

        for(auto child : c ->neighbors) {
           if(myMap[child] == 0){
             Node * childreNode = new Node(child->val);
             myMap[child] = childreNode;
             q.push(child);

           }
        myMap[c]->neighbors.push_back(myMap[child]);
           
        }
      }
        
     return ans;
      }
      
     

      

      return nullptr ;

    }
};