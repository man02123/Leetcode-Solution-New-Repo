// Last updated: 29/09/2026, 00:49:12
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int left = 0 , right = 0;
5
6        while(right < nums.size() && left<nums.size()) {
7
8          // get a non zero with right 
9          while(right < nums.size() &&  nums[right] == 0) {
10            right++;
11          }
12
13           while(left<nums.size()  && left< right &&  nums[left] != 0) {
14            left++;
15          }
16          
17          if(left<nums.size() && right < nums.size())
18          swap(nums[left++], nums[right++]);
19
20        }
21    }
22};
23