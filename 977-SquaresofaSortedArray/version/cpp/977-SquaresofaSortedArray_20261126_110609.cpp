// Last updated: 26/11/2026, 11:06:09
1class Solution {
2public:
3    vector<int> sortedSquares(vector<int>& nums) {
4        vector<int> ans(nums.size());
5
6        int i = 0 ,  j = nums.size()-1;
7        int curr = j;
8
9        while(i <= j){
10            int left = nums[i]*nums[i];
11            int right = nums[j]*nums[j];
12
13            if(right >= left) {
14                ans[curr--] = right;
15                j--;
16            } else{
17                ans[curr--] = left;
18                i++;
19            }
20        }
21        return ans;
22    }
23};