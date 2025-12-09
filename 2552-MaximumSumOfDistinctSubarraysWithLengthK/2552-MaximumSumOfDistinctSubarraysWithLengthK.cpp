// Last updated: 09/12/2025, 23:24:28
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        
        int j=0;
        long long res=0;
        long long winsum=0;
        while(j<k)
        {
            mp[nums[j]]++;
            winsum+=nums[j++];
            
        }
        if(mp.size()==k)res=winsum;
        
        for(int i=0;i+k<nums.size();i++)
        {
            mp[nums[i+k]]++;
            mp[nums[i]]--;
            if(mp[nums[i]]==0)mp.erase(nums[i]);
            winsum=winsum+nums[i+k]-nums[i];
            
            if(mp.size()==k)
                res=max(res,winsum);   
        }
        
        return res;
    }
};