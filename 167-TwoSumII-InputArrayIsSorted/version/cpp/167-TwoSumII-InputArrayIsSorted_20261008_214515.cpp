// Last updated: 08/10/2026, 21:45:15
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int t) {
4
5        int low = 0 ,  high = nums.size()-1;
6
7        while(low < high) {
8
9         int csum = nums[low] + nums[high];
10         //cout << csum << " ";
11         if(csum == t) return {low+1 ,high+1};
12
13         if(t-csum > 0) {
14            low++;
15         }
16         else high--;
17
18        }
19        return {0 , 0};
20    }
21    
22};