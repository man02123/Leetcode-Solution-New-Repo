// Last updated: 08/12/2025, 17:34:12
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        int csum = 0;
        map<int,int> mp;
        int ans = 0;
        int n = nums.size();
        mp[0]++;
        for(int i =0 ;i<nums.size();i++) {

            csum += nums[i];
            ans+= mp[csum-goal];
            mp[csum]++;
        

        }
        return ans;
    }
};