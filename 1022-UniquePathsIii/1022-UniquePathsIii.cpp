// Last updated: 08/12/2025, 17:33:48
class Solution {
public:int res;
    int zcount;
    int uniquePathsIII(vector<vector<int>>& g) {
        int x=0,y=0;
         zcount=1;
         res=0;
        for(int i=0;i<g.size();i++)
        {
            for(int j=0;j<g[i].size();j++)
            {
                if(g[i][j]==1) 
                {
                    x=i;y=j;
                }
                else if(g[i][j]==0)
                    zcount++;
            }
        }
        path(g,x,y);
        
        return res;
    }
    
    void path(vector<vector<int>>& g,int i,int j)
    {
        if(i<0 || i>=g.size() || j<0 || j>=g[0].size() || g[i][j]<0)
        {
            return; 
        }
        if(g[i][j]==2)
        {
            if(zcount==0)
            res++;
            return;
        }
        
         g[i][j]=-2;
         zcount--;
         path(g,i+1,j);
         path(g,i-1,j);
         path(g,i,j-1);
         path(g,i,j+1);
           zcount++;
         g[i][j]=0;
        
    }
    
};