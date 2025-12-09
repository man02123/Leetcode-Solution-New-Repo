// Last updated: 09/12/2025, 23:23:50
class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        vector<int> r(100001);
        vector<int> c(100001);
        
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                r[mat[i][j]] =i;
                c[mat[i][j]]=j;
            }
        }
        vector<int> rcnt(100001);
        vector<int> cnt(100001);
        
        for(int i=0;i<arr.size();i++)
        {
            rcnt[r[arr[i]]]++;
            
            cnt[c[arr[i]]]++;
            
            if(rcnt[r[arr[i]]]==mat[0].size())
                return i;
            
            if(cnt[c[arr[i]]]==mat.size())
                return i;
        }
        return -1;
        
    }
};