// Last updated: 24/10/2026, 23:31:29
1class Solution {
2public:
3    int peakValleyDifference(vector<int>& nums) {
4
5        int p=0 , s =0;
6
7        for(int i = 1 ; i < nums.size()-1 ; i++) {
8
9             if(nums[i-1] < nums[i] && nums[i] > nums[i+1]) {
10                 p +=nums[i];
11             }
12             if(nums[i] < nums[i - 1] && nums[i] < nums[i + 1]){
13                 s += nums[i];
14             }
15        }
16        return p-s;
17    }
18};