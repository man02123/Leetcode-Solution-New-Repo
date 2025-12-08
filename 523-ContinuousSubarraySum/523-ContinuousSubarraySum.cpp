// Last updated: 08/12/2025, 17:36:19
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if(nums.size()<2)return false;
        unordered_map<int,int> mp;
        mp[0]=-1;
      
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            int rem=(sum%k);
            if(mp.find(rem)!=mp.end())
            {
                if(i-mp[rem]>1)
                    return true;
            }
            else
            mp[rem]=i;  
        }
       
        return false;
        
    }
};