// Last updated: 08/12/2025, 17:36:05
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> mp;

        mp[0]++;

        int csum = 0;
        // for(auto it:nums){
        //     csum +=it;
        //     mp[csum]++;
        // }
        int ans = 0;

        for(auto it : nums) {

            csum += it;

            if(mp[csum -k] > 0) ans += mp[csum-k];

            mp[csum]++;

        }
        return ans;
    }
};