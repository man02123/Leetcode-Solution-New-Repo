// Last updated: 22/10/2026, 00:10:12
1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        int ans = 0;
5        for(int i = 0 ; i < 32 ; i++) {
6
7         int sum = 0;
8
9         for(auto it : nums) {
10
11            sum  += (it >> i) & 1;  
12            sum %=3;
13
14         }
15
16         ans |= sum << i;
17
18        }
19    
20    return ans;
21
22    }
23};