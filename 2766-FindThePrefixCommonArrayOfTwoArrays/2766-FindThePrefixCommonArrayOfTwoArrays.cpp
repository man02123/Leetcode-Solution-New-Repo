// Last updated: 09/12/2025, 23:23:22
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        
        vector<int> res;
        int n = a.size();
         unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++)
        {
            int cnt =0;
            mp[a[i]]=1;
            for(int j=0;j<=i;j++)
            {
                if(mp.find(b[j])!=mp.end())
                    cnt++;
            }
            res.push_back(cnt);
        }
        return res;
    }
};