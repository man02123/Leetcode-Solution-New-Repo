// Last updated: 09/12/2025, 23:23:23
class Solution {
public:int res;
    vector<int> dx;
    vector<int> dy;
    int findMaxFish(vector<vector<int>>& g) {
        res = 0;
        dx ={0,0,1,-1};
        dy = {1,-1,0,0};
        
        for(int i=0;i<g.size();i++)
        {
            for(int j=0;j<g[0].size();j++)
            {
                if(g[i][j]!=0)
                {
                    dfs(g,i,j);
                }
            }
        }
        return res;
        
    }
    void dfs(vector<vector<int>>& g ,int r,int c)
    {

           int temp = 0; 
            
            queue<pair<int,int>>q;
        
        vector<vector<int>> visited = g;
        
        for(int i=0;i<g.size();i++)
        {
            for(int j=0;j<g[0].size();j++)
            {
                
                    visited[i][j]=0;
                
            }
        }
        
        
        q.push({r,c});
         visited[r][c]=1;
        
        while(q.size()>0)
        {
            int x=q.front().first;
            int y =q.front().second;
            q.pop();
           
               temp+=g[x][y];
            
          
            for(int i=0;i<4;i++)
          {
              
              int nx =x+dx[i];
              int ny =y+dy[i];
              
              if(nx>=0 && nx<g.size() && ny>=0 && ny<g[0].size() && g[nx][ny]!=0 && visited[nx][ny]!=1)
              {
                    
                  q.push({nx,ny});
                  visited[nx][ny]=1;
              }       
          }
            //q.pop();
            
        }
        
        res=max(res,temp);
        
        
    }
};