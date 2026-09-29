// Last updated: 30/09/2026, 01:39:38
1class Solution {
2public:
3    int longestOnes(vector<int>& nums, int k) {
4        int ans = 0;
5        int zero = 0;
6        int j = 0;
7
8        for(int i =0 ; i< nums.size() ; i++) {
9
10            //  if(nums[i]) one++ ;
11             while(j < nums.size() && k-zero >= 0 ){
12                 
13               if(nums[j]==0) {
14                zero++;
15               }
16               
17               if(k-zero >= 0)
18               ans = max(ans ,  j-i+1);
19
20               j++;
21             }
22
23             if(nums[i] == 0) zero--;
24
25        }
26
27        return ans;
28
29    }
30};