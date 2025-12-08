// Last updated: 08/12/2025, 17:33:32
class Solution {
public:
    int numEnclaves(vector<vector<int>>& g) {
        int row=g.size()-1;
        int col=g[0].size()-1;
        int count=0;
        
            for(int j=0;j<g[0].size();j++)
                if(g[0][j]==1)
                bfs(g,0,j);
        
         for(int j=0;j<g[0].size();j++)
             if(g[row][j]==1)
                 bfs(g,row,j);
        
         for(int i=0;i<g.size();i++)
             if(g[i][0]==1)
                 bfs(g,i,0);
        
        for(int i=0;i<g.size();i++)
             if(g[i][col]==1)
                 bfs(g,i,col);
        
    
        
         for(int i=0;i<g.size();i++)
            for(int j=0;j<g[0].size();j++)
            {
                if(g[i][j]==1)
                    count++;
            }
        
        
        return count;
        
    }
    void bfs(vector<vector<int>>& g,int i,int j)
    {
        if(i<0 || i>=g.size() || j<0 || j>=g[0].size() || g[i][j]==0 || g[i][j]==-1)
            return;
        
        if(g[i][j]==1)
        {
            g[i][j]=-1;
            bfs(g,i+1,j);
            bfs(g,i-1,j);
            bfs(g,i,j+1);
            bfs(g,i,j-1);
        }
        
    }
};
