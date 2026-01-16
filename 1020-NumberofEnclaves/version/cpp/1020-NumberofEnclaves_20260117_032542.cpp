// Last updated: 17/01/2026, 03:25:42
1class Solution {
2public:
3    int numEnclaves(vector<vector<int>>& g) {
4        int row=g.size()-1;
5        int col=g[0].size()-1;
6        int count=0;
7        
8            for(int j=0;j<g[0].size();j++)
9                if(g[0][j]==1)
10                bfs(g,0,j);
11        
12         for(int j=0;j<g[0].size();j++)
13             if(g[row][j]==1)
14                 bfs(g,row,j);
15        
16         for(int i=0;i<g.size();i++)
17             if(g[i][0]==1)
18                 bfs(g,i,0);
19        
20        for(int i=0;i<g.size();i++)
21             if(g[i][col]==1)
22                 bfs(g,i,col);
23        
24    
25        
26         for(int i=0;i<g.size();i++)
27            for(int j=0;j<g[0].size();j++)
28            {
29                if(g[i][j]==1)
30                    count++;
31            }
32        
33        
34        return count;
35        
36    }
37    void bfs(vector<vector<int>>& g,int i,int j)
38    {
39        if(i<0 || i>=g.size() || j<0 || j>=g[0].size() || g[i][j]==0 || g[i][j]==-1)
40            return;
41        
42        if(g[i][j]==1)
43        {
44            g[i][j]=-1;
45            bfs(g,i+1,j);
46            bfs(g,i-1,j);
47            bfs(g,i,j+1);
48            bfs(g,i,j-1);
49        }
50        
51    }
52};
53