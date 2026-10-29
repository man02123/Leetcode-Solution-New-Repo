// Last updated: 29/10/2026, 17:13:37
1class Solution {
2public:
3    int numberOfSubarrays(vector<int>& nums, int k) {
4        int ans = 0;
5
6        for (auto &it : nums) it %=  2;
7        
8        int sum = 0;
9
10        map<int,int> mp;
11        mp[0] = 1;
12
13        for(int i = 0 ;i < nums.size();i++) {
14             
15             sum += nums[i];
16             if(mp.find(sum - k) != mp.end()) {
17                ans += mp[sum-k];
18             }
19             mp[sum]++;
20
21        }
22        return ans; 
23    }
24};