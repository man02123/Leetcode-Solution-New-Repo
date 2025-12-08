// Last updated: 08/12/2025, 17:35:07
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& m) {
        bool x=true,y=true;
        for(int i=0;i<m.size();i++)
             x=x && check(m,i,0);
        
        for(int i=0;i<m[0].size();i++)
             y=y && check(m,0,i);
        return x && y;
    }
    bool check(vector<vector<int>>& m,int i,int j)
    {
        if( i+1>=m.size() || j+1>=m[0].size())
            return true;
        
        // if(i==m.size()-1 || j==m[0].size())
        //     return true
        
          if(m[i+1][j+1]!=m[i][j])return false;
    
        
        return check(m,i+1,j+1);
    }
};