// Last updated: 26/10/2026, 17:52:39
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        int low = 0 , hi = nums.size()-1;
5         
6         while(low < hi) {
7         
8          int mid = low + (hi-low)/2;
9          if (nums[mid] > nums[hi]){
10            low = mid+1;
11          }else  {
12            hi = mid;
13          }
14         //cout<< mid << low << hi << " ";
15         }
16
17         return nums[low];
18
19    }
20};