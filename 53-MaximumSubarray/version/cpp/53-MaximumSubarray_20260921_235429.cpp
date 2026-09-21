// Last updated: 21/09/2026, 23:54:29
1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        
5        int ans = INT_MIN;
6
7        int csum = 0;
8
9        for(int i = 0;i<nums.size() ; i++) {
10
11           if(csum + nums[i] > nums[i]) {
12             csum += nums[i];
13           }
14           else csum = nums[i];
15
16           ans = max(ans , csum);
17
18        }
19
20        return ans;
21    }
22};