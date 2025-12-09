// Last updated: 09/12/2025, 23:21:41
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> mp ;
        for(auto it: nums)mp[it]++;
        int maxi = 0;

        for(auto it: mp) {
           maxi = max(maxi , it.second);
        }
        int ans = 0;
        for(auto it:mp){
            if(it.second == maxi)ans+=it.second;
        }
        return ans;
    }
};