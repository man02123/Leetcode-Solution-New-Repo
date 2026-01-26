// Last updated: 26/01/2026, 14:38:38
1class Solution {
2public:
3    bool canFinish(int n, vector<vector<int>>& pr) {
4        vector<int> g[n];
5        vector<int> indeg(n);
6        
7        for(auto it:pr){
8            g[it[1]].push_back(it[0]);
9            indeg[it[0]]++; 
10        }
11        queue<int> q;
12        for(auto i = 0;i<n;i++)
13            if(indeg[i] == 0)
14                q.push(i);
15        
16        while(!q.empty()){
17            int node = q.front();
18            q.pop();
19            
20            for(auto it:g[node]){
21                indeg[it]--;
22                
23                if(indeg[it]==0)
24                    q.push(it);
25            }
26            
27        }
28        for(auto it:indeg)
29            if(it!=0)return false;
30        
31        return true;
32        
33    }
34};