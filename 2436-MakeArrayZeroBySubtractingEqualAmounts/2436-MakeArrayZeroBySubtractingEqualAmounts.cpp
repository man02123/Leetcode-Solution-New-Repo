// Last updated: 08/12/2025, 17:28:44
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
      unordered_map<int,int> mp;
        for(auto it:nums) 
            {
            if(it>0) 
                mp[it]++;
            
            
        }
        return mp. size() ;
    }
};