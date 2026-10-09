// Last updated: 10/10/2026, 01:27:52
1class Solution {
2public:
3    int search(vector<int>& nums, int t) {
4        
5
6        int low = 0  , high = nums.size()-1;
7
8        while(low <= high) {
9            int mid = (high+low)/2;
10                 
11            if(nums[mid] == t) return mid;
12
13            if(nums[mid ] < t ) low = mid+1;
14            else high = mid-1;
15        }
16
17        return -1;
18
19    }
20};