// Last updated: 23/10/2026, 17:22:17
1class Solution {
2public: vector<vector<int>> ans;
3    vector<vector<int>> combinationSum(vector<int>& nums, int tar) {
4        vector<int> temp;
5        recur(nums , temp ,  tar , 0 );
6        return ans;
7    }
8
9
10    void recur(vector<int>& nums ,  vector<int>& temp ,  int tar ,  int ind) {
11
12        if(ind >= nums.size() || tar <= 0) {
13            if(tar == 0) {
14                ans.push_back(temp);
15            }
16            return;
17        }
18
19        
20            
21                temp.push_back(nums[ind]);
22                recur(nums,  temp , tar-nums[ind] , ind);
23                temp.pop_back();
24                recur(nums,  temp , tar , ind+1);
25 
26
27    }
28};