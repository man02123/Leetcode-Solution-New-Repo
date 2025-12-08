// Last updated: 08/12/2025, 17:29:18
class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto it:nums)
        mp[it]++;
        vector<int> res;
        for(int i=0;i<nums.size();++i)
        {
            int n=nums[i];
            if( mp[n]>1 ||mp[n+1]>0 || mp[n-1]>0 )
               continue;
            
            res.push_back(n);
         
            
        }
        return res;
        
    }
};