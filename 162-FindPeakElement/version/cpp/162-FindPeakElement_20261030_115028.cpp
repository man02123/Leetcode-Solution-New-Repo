// Last updated: 30/10/2026, 11:50:28
1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4       int low = 0 ,  hi = nums.size();
5
6       while(low < hi) {
7           
8           int mid = (low + hi)/2;
9           cout << mid ;
10           if( (mid > 0 && nums[mid-1] < nums[mid])  && (mid+1 < nums.size()) && (nums[mid+1] < nums[mid])) {return mid;}
11           else if(mid+1 <nums.size() && nums[mid+1] > nums[mid] ) low = mid+1;
12           else hi = mid;
13
14       }
15       if(low == nums.size()-1) return low;
16       return 0;
17
18    }
19};