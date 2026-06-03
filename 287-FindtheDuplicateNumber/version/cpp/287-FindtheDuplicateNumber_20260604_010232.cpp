// Last updated: 04/06/2026, 01:02:32
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        
5        for(int i =0 ;i< nums.size();i++) {
6              
7              if(nums[i]-1 == i) continue;
8              
9              while(nums[i]-1 != i) {
10                if(nums[i] ==  nums[nums[i]-1]) return nums[i];
11
12                swap(nums[i] , nums[nums[i]-1]);
13              }
14        }
15        
16      return -1;
17    }
18};