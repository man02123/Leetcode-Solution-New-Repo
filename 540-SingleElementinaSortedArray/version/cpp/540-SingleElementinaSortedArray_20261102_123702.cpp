// Last updated: 02/11/2026, 12:37:02
1class Solution {
2public:
3    int singleNonDuplicate(vector<int>& nums) {
4        
5        int low = 0 ,  hi = nums.size();
6        if(nums.size() == 1) return nums[0];
7
8        while(low < hi) {
9            
10            int mid = (low + hi) /2;
11
12            if(mid-1 >= 0 && mid+1 < nums.size() && nums[mid] != nums[mid-1] && nums[mid]!= nums[mid]) {
13               return nums[mid];
14            }
15            else if ((mid%2==0 && nums[mid] == nums[mid+1]) || (mid%2 && nums[mid]==nums[mid-1])){
16              low = mid+1;
17            }
18            else {
19               hi = mid;
20            }
21
22        } 
23        return nums[low];
24    }
25};