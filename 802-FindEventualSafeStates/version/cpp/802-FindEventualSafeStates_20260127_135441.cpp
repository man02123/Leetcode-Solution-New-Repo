// Last updated: 27/01/2026, 13:54:41
1class Solution {
2public:
3    vector<int> eventualSafeNodes(vector<vector<int>>& g) {
4       vector<int> outdegree(g.size(),0);
5        vector<vector<int>> newgraph(g.size());
6        
7        for(int i=0;i<g.size();i++)
8            for(int j=0;j<g[i].size();j++)
9                newgraph[g[i][j]].push_back(i),outdegree[i]++;;
10        
11        
12        
13        queue<int> q;
14        
15        for(int i=0;i<outdegree.size();i++)
16        {
17            if(outdegree[i]==0)
18                q.push(i);
19        }
20        
21        vector<int> res;
22       while(q.size()>0)
23       {
24           int node=q.front();
25           //cout<<node;
26           q.pop();
27           res.push_back(node);
28           for(auto it:newgraph[node])
29           {
30               outdegree[it]--;
31               if(outdegree[it]==0)
32                   q.push(it);
33           }
34               
35       }
36        sort(res.begin(),res.end());
37        return res;
38        
39    }
40};