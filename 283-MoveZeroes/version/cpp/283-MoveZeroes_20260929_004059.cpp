// Last updated: 29/09/2026, 00:40:59
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int start = 0;
5        int zptr = 0 ; 
6
7        while( start  < nums.size()){
8            
9            if(nums[start] != 0){
10                nums[zptr++] = nums[start++];
11            }
12            else
13            start++;
14
15        }
16      for(int i = zptr ; i < nums.size() ;i ++){
17
18        nums[i] = 0;
19
20      }
21    }
22};