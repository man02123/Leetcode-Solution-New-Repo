// Last updated: 23/09/2026, 23:51:50
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int cand = nums[0];
5        int cnt = 1;
6
7        for(int i = 1 ; i < nums.size() ; i++) {
8              
9              if(cnt == 0) {
10                cand = nums[i];
11                cnt++;
12                continue;
13              }
14
15              if(cand == nums[i])cnt++;
16              else cnt--;
17
18              
19
20        }
21        return cand;
22        
23      }
24};