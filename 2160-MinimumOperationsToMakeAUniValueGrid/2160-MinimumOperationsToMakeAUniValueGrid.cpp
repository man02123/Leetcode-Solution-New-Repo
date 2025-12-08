// Last updated: 08/12/2025, 17:29:45
class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> v;
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[0].size();j++)
                v.push_back(grid[i][j]);
        
        sort(v.begin(),v.end());
        int medind=(v.size())/2;
        int med=v[medind];
        int res=0;
        for(int i=0;i<v.size();i++)
        {
            if((med-v[i])%x==0)
            {
                res+=(abs(med-v[i]))/x;
            }
            else 
                return -1;   
        }
        return res;
        
    }
};