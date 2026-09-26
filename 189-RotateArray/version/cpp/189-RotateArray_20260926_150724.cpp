// Last updated: 26/09/2026, 15:07:24
1class Solution {
2public:
3    void rotate(vector<int>& nums, int k) {
4        int n = nums.size();
5        k = k%nums.size();
6       
7        reverse(nums.begin() ,  nums.begin()+n-k);
8        reverse(nums.begin()+n-k ,  nums.end());
9         reverse(nums.begin() ,  nums.end());
10    }
11};