// Last updated: 26/01/2026, 14:42:44
1class Solution {
2public:
3    bool canFinish(int n, vector<vector<int>>& pre) {
4
5     vector<int> adj[n];
6      vector<int> indeg(n , 0);
7
8      for(auto it : pre) {
9        adj[it[1]].push_back(it[0]);
10        indeg[it[0]]++;
11      }
12      vector<int> vis(n ,0);
13
14      queue<int> q;
15
16      for(int i = 0;i<n;i++){
17        if(indeg[i] == 0){
18            q.push(i);
19        }
20      }
21
22      while(q.size()>0) {
23       
24       int node = q.front();
25       q.pop();
26       
27
28       for(auto nei : adj[node]) {
29        indeg[nei]--;
30
31        if(indeg[nei] == 0){
32         q.push(nei);
33        }
34         
35       }
36      }
37
38      for(auto it : indeg){
39        if(it != 0) return false;
40      }
41      return true;
42
43     
44
45    }
46};