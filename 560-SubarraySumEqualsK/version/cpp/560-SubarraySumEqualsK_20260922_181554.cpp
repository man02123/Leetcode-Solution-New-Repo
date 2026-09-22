// Last updated: 22/09/2026, 18:15:54
1class Solution {
2public:
3    int subarraySum(vector<int>& nums, int k) {
4       map<int,int> mp;
5       mp[0] = 1;
6
7       int csum = 0;
8       int ans = 0;
9       for(int i =0 ;i<nums.size(); i++) {
10           
11           csum += nums[i];
12
13           if(mp[csum-k]>0) {
14              ans += mp[csum-k];
15           }
16           mp[csum]++;
17       }
18       return ans; 
19        
20     }
21};