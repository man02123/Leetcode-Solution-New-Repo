// Last updated: 26/10/2026, 17:14:53
1class Solution {
2public:
3    int search(vector<int>& nums, int t) {
4        int l = 0  , h = nums.size();
5        int mid = l + (h-l)/2;
6        while(l < h) {
7           mid = l + (h-l)/2;
8
9           if(nums[mid] == t) return mid;
10
11           if(nums[mid] > t) {
12            h = mid;
13           }
14           else l  = mid+1;
15
16        }
17        return -1;
18    }
19};