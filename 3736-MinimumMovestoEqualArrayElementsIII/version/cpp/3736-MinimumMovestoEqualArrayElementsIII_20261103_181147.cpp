// Last updated: 03/11/2026, 18:11:47
1class Solution {
2public:
3    int minMoves(vector<int>& nums) {
4        sort(begin(nums), end(nums));
5
6        int ans = 0;
7        int max_elem = *max_element(begin(nums) , end(nums));
8
9        for(int i  =0 ; i < nums.size() ;i++) {
10            ans += abs(nums[i]-max_elem);
11        }
12        return ans;
13    }
14};