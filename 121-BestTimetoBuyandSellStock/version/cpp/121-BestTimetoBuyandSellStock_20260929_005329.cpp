// Last updated: 29/09/2026, 00:53:29
1class Solution {
2public:
3    int maxProfit(vector<int>& nums) {
4        int mini = nums[0];
5        int ans = 0;
6
7        for(int i =1;i<nums.size();i++) {
8            
9            mini = min(mini, nums[i]);
10
11            if(mini != nums[i]){
12                ans = max(ans , abs(mini-nums[i]));
13            }
14
15        }
16        return ans;
17    }
18};