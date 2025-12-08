// Last updated: 08/12/2025, 17:32:48
class Solution {
public:int res;
  
    int getMaximumGold(vector<vector<int>>& g) {
       
        res=0;
        for(int i=0;i<g.size();i++)
        {
            for(int j=0;j<g[i].size();j++)
            {
                if(g[i][j]!=0)
                    check(g,i,j,0);
            }
        }
        return res;
        
    }
    void check(vector<vector<int>>& g,int i,int j, int gold)
    {
        if(i<0 || i>g.size()-1 || j>g[i].size()-1 || j<0 || g[i][j]==0 || g[i][j]==-1)
        {
            res=max(res,gold);
            return ;
        }
        
        int temp=g[i][j];
        g[i][j]=-1;
        check(g,i+1,j,gold+temp);
        check(g,i-1,j,gold+temp);
        check(g,i,j+1,gold+temp);
        check(g,i,j-1,gold+temp);
        g[i][j]=temp;
    }
};