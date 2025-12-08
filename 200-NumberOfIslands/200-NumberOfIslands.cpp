// Last updated: 08/12/2025, 17:38:34
class Solution {
 public:int count;
    int numIslands(vector<vector<char>>& g) {
        count=0;
        for(int i=0;i<g.size();i++)
            for(int j=0;j<g[0].size();j++)
            {
                if(g[i][j]=='1')
                {
                    bfs(g,i,j);
                    count++;
                }
            }
        return count;
    }
    void bfs(vector<vector<char>>& g,int i,int j)
    {
        if(i<0 || i>=g.size() || j<0 || j>=g[0].size() || g[i][j]=='0' || g[i][j]=='a')return;
        
        if(g[i][j]=='1')
        {
            g[i][j]='a';
           bfs(g,i+1,j);
            bfs(g,i-1,j);
             bfs(g,i,j+1);
             bfs(g,i,j-1);
                
        }
        
        
        
    }
};