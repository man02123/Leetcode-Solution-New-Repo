// Last updated: 13/10/2026, 01:16:55
1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4        int maxJIndex = 0+nums[0];
5        
6        for(int i = 1 ;i < nums.size();i++) {
7               
8               if(maxJIndex < i) {
9                return false;
10               }
11
12              maxJIndex = max(maxJIndex   , i + nums[i]);
13
14              
15        }
16        return maxJIndex >= nums.size()-1 ? 1 : 0;
17
18    }
19};