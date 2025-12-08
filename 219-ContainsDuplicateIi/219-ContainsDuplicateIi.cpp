// Last updated: 08/12/2025, 17:38:21
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        if(k==0)
            return false;
        if(nums.size()<2)
            return false;
 
        int j=0;
        while(j<nums.size() && j<=k)
        {
            mp[nums[j]]++;
            if(mp[nums[j]]>1)return true;
            j++;
        }
        //for(auto it:mp)cout<<it.first;
     
        for(int i=0;i+k+1<nums.size();i++)
        {
             mp[nums[i+k+1]]++;
            mp[nums[i]]--;
            if(mp[nums[i+k+1]]>1)
                return true;
                
        }
        return false;
    }
};