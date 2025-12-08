// Last updated: 08/12/2025, 17:35:30
class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& g) {
        int res=0;
        for(int i=0;i<g.size();i++)
            for(int j=0;j<g[0].size();j++)
            {
                if(g[i][j]==1)
                    res=max(res,bfs(g,i,j));               
            }
        return res;
    }
    int bfs(vector<vector<int>>& g,int i,int j)
    {
        if(i<0 || i>=g.size() || j<0 || j>=g[0].size() || g[i][j]==0 || g[i][j]==-1)
            return 0;
    
        g[i][j]=-1;
        
        int x=bfs(g,i-1,j);
       int y= bfs(g,i+1,j);
        
       int z= bfs(g,i,j-1);
        int k= bfs(g,i,j+1);
         
        return 1+x+y+z+k;
        // return max(temp,max(x,y));
        // //return -1;
    }
};