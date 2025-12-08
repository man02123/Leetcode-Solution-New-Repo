// Last updated: 08/12/2025, 17:28:39
class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        
        long long tot = 0;
        map<long long,long long> mp;
        long long good = 0;
        for(int i=0;i<nums.size();i++){
            long long diff = nums[i]-i;
            tot += i;
            
            good += mp[diff];
            mp[diff]++;
            
        }
        return tot-good;
    }
};