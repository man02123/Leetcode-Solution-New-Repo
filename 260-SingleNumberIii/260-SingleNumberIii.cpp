// Last updated: 08/12/2025, 17:38:00
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
           
        unordered_map<int,int> mp;
                vector<int> v;
        for(auto it:nums)
            mp[it]++;
        for(auto it:mp)
        {
            if(it.second==1)
                v.push_back( it.first);
        }
        return v;
                 
    }
};
        
  