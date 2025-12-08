// Last updated: 08/12/2025, 17:32:43
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        for(auto &it : nums){
            it = it%2;
        }

        map<int,int> mp;
        mp[0]++;

        int ans = 0  , csum = 0;

        for(int i =0;i<nums.size();i++) {
            csum += nums[i];
           //cout<<nums[i];
            if(mp.find(csum-k) != mp.end()) {
                ans += mp[csum-k];
            }

            mp[csum]++;
        }
        return ans;
    }
};