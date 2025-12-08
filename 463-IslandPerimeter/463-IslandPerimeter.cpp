// Last updated: 08/12/2025, 17:36:40
class Solution {
public:int count;
    int conn;
    int islandPerimeter(vector<vector<int>>& g) {
        count=0;
        conn=0;
        
        for(int i=0;i<g.size();i++)
            for(int j=0;j<g[0].size();j++)
                if(g[i][j]==1)
                    bfs(g,i,j);
                  
               
        //cout<<count<<conn;
        return (4*count-conn);
    }
    bool bfs(vector<vector<int>>& g,int i,int j)
    {
        if(i<0 || i>=g.size() || j<0 || j>=g[0].size() || g[i][j]==0)
            return false;
        if(g[i][j]==3)
            return true;
        
        g[i][j]=3;
        count++;
        bool l=bfs(g,i,j-1);
        bool r=bfs(g,i,j+1);
        bool t=bfs(g,i-1,j);
        bool b=bfs(g,i+1,j);
            
        conn+=l+r+t+b;
        
       return true; 
        
    }
};