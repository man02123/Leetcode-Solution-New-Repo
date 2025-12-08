// Last updated: 08/12/2025, 17:28:53
class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& mat) {
        
        int i=mat.size()-1,j=0;
        while(i>=0  && j<mat[0].size())
        {
            if(mat[i][j]==0)return false;
            else 
                mat[i][j]=-1;
            i--;
            j++;
        }
        
        for(int i=0;i<mat.size();i++)
            for(int j=0;j<mat[0].size();j++)
            {
                if(i==j && mat[i][j]==0)return false;
                
                if(i!=j && mat[i][j]!=-1 && mat[i][j]!=0)return false;
                
                
                
            }
        return true;
        
    }
};