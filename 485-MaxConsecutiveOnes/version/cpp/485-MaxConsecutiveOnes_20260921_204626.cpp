// Last updated: 21/09/2026, 20:46:26
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int ans = 0 ,  curr =0;
5
6
7        for(int i =0 ;i<nums.size();i++) {
8            if( nums[i]==1) curr++;
9            else curr=0;
10            ans = max(ans,curr);
11
12
13        }
14        return ans;
15    }
16};