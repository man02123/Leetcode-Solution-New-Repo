// Last updated: 29/10/2026, 11:46:57
1class Solution {
2public:
3    int numSubarraysWithSum(vector<int>& nums, int goal) {
4        map<int,int> mp;
5        mp[0]++;
6        int sum = 0;
7        int ans  = 0;
8        for(int i =0 ; i< nums.size();i++){
9           
10           sum += nums[i];
11           if(mp.find(sum - goal) != mp.end()) {
12            ans += mp[sum-goal];
13           }
14           mp[sum]++;
15
16        }
17        return ans;
18    }
19};