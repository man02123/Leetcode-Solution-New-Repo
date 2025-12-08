// Last updated: 08/12/2025, 17:32:40
class Solution {
public:
    int closedIsland(vector<vector<int>>& g) {
        int count=0;
        for(int i=0;i<g.size();i++)
            for(int j=0;j<g[0].size();j++)
                if(g[i][j]==0)
                    count+=dfs(g,i,j);
       return count; 
    }
    bool dfs(vector<vector<int>>& g,int i,int j)
    {
        if(i<0 ||i>=g.size() || j<0 || j>=g[0].size()) return false;
        
        if(g[i][j]==1)return true;
        if(g[i][j]==2)return true;
         g[i][j]=2;
        
        bool l=dfs(g,i,j-1);
        bool r=dfs(g,i,j+1);
        bool u=dfs(g,i-1,j);
        bool d=dfs(g,i+1,j);
        return (l && r && u && d);
    }
};