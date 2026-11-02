// Last updated: 02/11/2026, 12:31:35
1class Solution {
2public:
3    int singleNonDuplicate(vector<int>& nums) {
4        int l=0,r=nums.size()-1;
5        
6        while(l<r)
7        {
8            int mid=(l+r)/2;
9            if((mid%2==0 && nums[mid]==nums[mid+1]) || (mid%2==1 && nums[mid]==nums[mid-1]))
10                l=mid+1;
11            else
12                r=mid;
13        }
14        return nums[l];
15    }
16};