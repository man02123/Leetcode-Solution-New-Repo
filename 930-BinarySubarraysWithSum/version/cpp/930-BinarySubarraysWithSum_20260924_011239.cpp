// Last updated: 24/09/2026, 01:12:39
1class Solution {
2public:
3   int numSubarraysWithSum(vector<int>& nums, int g) {
4        if(nums.size()==1 ){
5              return g==nums[0] ? 1 :0;
6        }
7
8        int ans = 0;
9        map<int,int> mp;
10        mp[0]++;
11        int csum = 0;
12        
13        for(int i = 0 ;i<nums.size(); i++) {
14
15          csum+= nums[i];
16
17          if(mp[csum-g] > 0) {
18            ans += mp[csum-g] ;
19          }
20          mp[csum]++;
21
22        }        
23
24      return ans;
25
26    }
27};