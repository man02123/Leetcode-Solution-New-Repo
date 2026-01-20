// Last updated: 21/01/2026, 01:31:41
1class Solution {
2public:
3vector<int> ans;
4    vector<int> findOrder(int num, vector<vector<int>>& pr) {
5        bool hasCycle = false;
6        
7        vector<vector<int>> graph(num+1);
8        
9        for(int i = 0 ; i < pr.size() ; i++) {
10            
11            auto nodes = pr[i];
12            graph[nodes[0]].push_back(nodes[1]);
13        }
14
15        vector<int> path(num+1 , 0);
16        vector<int> vis(num+1 , 0);
17
18        for(int i =0 ;i<num;i++){
19            if(!vis[i]){
20                path[i] = 1;
21                hasCycle |= dfs(graph , vis,  path , i);
22                path[i] = 0;
23            }
24        }
25        if(hasCycle) return {};
26        
27        vector<int> vis2(num+1 , 0);
28
29    
30        for(int i =0 ;i<num;i++){
31            if(!vis2[i])
32            dfs2(graph , vis2 , i );
33        }
34
35        // reverse(ans.begin() ,  ans.end());
36        return ans;
37        
38    }
39    bool dfs(vector<vector<int>> &graph , vector<int> &vis , vector<int>& path ,  int node){
40              
41              vis[node] = 1;
42              //cout<< node;
43              bool ans = false;
44
45              for(auto neigh : graph[node]) {
46
47                if(vis[neigh] && path[neigh]) return true;
48
49                if(!vis[neigh] && !path[neigh]){
50                    //cout<<neigh;
51                    path[neigh] = 1;
52                    ans = ans | dfs(graph , vis , path , neigh);
53                    path[neigh] = 0;
54
55                }
56              }
57              return ans;
58    }
59
60     void dfs2(vector<vector<int>> &graph , vector<int> &vis , int node ){
61              
62              vis[node] = 1;
63              for(auto neigh : graph[node]) {
64                if(!vis[neigh]){
65                    dfs2(graph , vis, neigh);
66                }
67              }
68
69              ans.push_back(node);
70
71    }
72
73    vector<int> getSchedule(vector<vector<int>> &graph ,  int num){
74
75        queue<int> q;
76        vector<int> vis(num , 0);
77
78        q.push(0);
79        vis[0] = 1;
80        vector<int> ans;
81
82        while(q.size()) {
83            int node = q.front();
84            q.pop();
85            vis[node] = 1;
86            ans.push_back(node);
87
88            for(auto neig : graph[node]){
89                if(!vis[neig]){
90                    q.push(neig);
91                }
92            }
93        }
94        return ans;
95
96    }
97};