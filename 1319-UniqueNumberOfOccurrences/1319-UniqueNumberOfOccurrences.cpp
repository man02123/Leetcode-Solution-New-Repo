// Last updated: 08/12/2025, 17:32:53
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int mp[2002];
         for(int i=0;i<2002;i++)mp[i]=0;
        
        for(auto it:arr)
            mp[it+1000]++;
        sort(begin(mp),end(mp));
      // cout<<mp[i];
        
        for(int i=1;i<2002;i++)
            if(mp[i]!=0 && mp[i]==mp[i-1])return false;
        
     
        return true;
        
    }
};