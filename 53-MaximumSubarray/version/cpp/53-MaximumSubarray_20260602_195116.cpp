// Last updated: 02/06/2026, 19:51:16
1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        
5        int n = nums.size();
6
7        int csum = 0 , ans = INT_MIN;
8
9        for(int i =0 ;i<nums.size();i++) {
10            
11            if(csum + nums[i] < nums[i]) {
12                csum = nums[i];
13            }
14            else csum += nums[i];
15
16            ans = max(ans,csum);
17        }
18
19        return ans;
20    }
21};