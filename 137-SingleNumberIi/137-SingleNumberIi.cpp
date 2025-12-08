// Last updated: 08/12/2025, 17:39:06
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto it:nums)
            mp[it]++;
        for(auto it:mp)
        {
            if(it.second==1)
                return it.first;
        }
        return 0;
                 
    }
};