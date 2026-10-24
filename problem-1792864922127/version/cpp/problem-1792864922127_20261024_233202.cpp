// Last updated: 24/10/2026, 23:32:02
1class Solution {
2public:
3    long long countSubarrays(vector<int>& nums, int mini, int maxi) {
4        
5      long long ans = 0;
6       int st = -1 , end = -1;
7        
8      for(int i =0; i<nums.size();i++) {
9
10          if(nums[i] >=  mini && nums[i] <= maxi) {
11
12              if(st==-1) {
13                  st = i;
14                  end = i;
15              }
16              else if(st !=-1 ) {
17                  end = i;
18              }
19                          
20          }
21          else {
22             if(st!=-1 && end!=-1) {
23                 long long n = (end-st+1);
24                 ans += (long long)((n) * (n+1)) / 2;
25             }
26             st = -1 ;
27              end =-1;
28          }
29          
30      }
31        
32         if(st!=-1 && end!=-1) {
33                 long long n = (end-st+1);
34                 ans += (long long)((n) * (n+1)) / 2;
35             }
36
37       return ans; 
38    
39    }
40};