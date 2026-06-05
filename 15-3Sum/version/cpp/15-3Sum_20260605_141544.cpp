// Last updated: 05/06/2026, 14:15:44
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        vector<vector<int>> ans ;
5
6        sort(begin(nums) , end(nums));
7
8        for(int i =0 ; i<nums.size() ;i++) {
9
10          if(i-1 >= 0 && nums[i-1] == nums[i])continue;
11
12          int l = i + 1 , r = nums.size()-1;
13
14          while(l < r) {
15            // if(l+1<nums.size() && nums[l]==nums[l+1])l++;
16            // if(r-1>=0 && nums[r]==nums[r-1])r--;
17
18            int sum = nums[i] + nums[l] + nums[r];
19
20            if(sum == 0){
21                ans.push_back({nums[i], nums[l] , nums[r]});
22                l++;
23            }
24            else if(sum > 0) {
25                r--;
26            }
27            else l++;
28
29          }
30
31        }
32        set<vector<int>> st ; 
33        for(auto it: ans)
34        st.insert(it);
35
36        vector<vector<int>> unq ;
37        for(auto it : st)unq.push_back(it);
38
39      return unq;
40    }
41};