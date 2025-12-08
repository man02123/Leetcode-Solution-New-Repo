// Last updated: 08/12/2025, 17:29:49
class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        // unordered_map<string,int> mp;
        // for(auto it:nums)
        //     mp[it]++;int res=0;
        int count=0;
        for(int i=0;i<nums.size();i++)
            for(int j=0;j<nums.size();j++)
            {
                string temp=nums[j]+nums[i];
                if(temp==target && i!=j)count++;
            }
            
        return count;
    }
};