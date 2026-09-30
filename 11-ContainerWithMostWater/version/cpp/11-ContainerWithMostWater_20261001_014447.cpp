// Last updated: 01/10/2026, 01:44:47
1class Solution {
2public:
3    int maxArea(vector<int>& nums) {
4        
5        int left = 0  ,  right = nums.size()-1;
6        int ans = 0;
7        while(left < right) {
8         auto water = min(nums[left] ,  nums[right]) * (right-left);
9
10         ans =  max(ans , water);
11
12         if(nums[left] >= nums[right]) {
13            right--;
14         }else left++;
15
16        }
17        return ans;
18    }
19};