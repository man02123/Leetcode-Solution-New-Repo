// Last updated: 09/12/2025, 23:22:52
class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        int ans = INT_MAX;
        sort(nums.begin(),nums.end());
        
        for(int i =1;i<nums.size();i++)
            ans = min(ans,nums[i]-nums[i-1]);
        return ans;
    }
};