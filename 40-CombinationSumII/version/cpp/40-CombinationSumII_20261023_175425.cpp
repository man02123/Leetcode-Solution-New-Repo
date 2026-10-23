// Last updated: 23/10/2026, 17:54:25
1class Solution {
2public: vector<vector<int>> ans;
3    vector<vector<int>> combinationSum2(vector<int>& nums, int tar) {
4        
5        vector<int> temp;
6        sort(begin(nums),end(nums));
7        recur(nums , temp ,  tar , 0 );
8        return ans;
9    }
10
11
12    void recur(vector<int>& nums ,  vector<int>& temp ,  int tar ,  int ind) {
13
14        if(ind >= nums.size() || tar <= 0) {
15            if(tar == 0) {
16                ans.push_back(temp);
17            }
18            return;
19        }
20
21
22                temp.push_back(nums[ind]);
23                recur(nums,  temp , tar-nums[ind] , ind+1);
24                int last = temp.back();
25                temp.pop_back();
26                bool x = 0;
27                while(ind < nums.size() && (nums[ind] == last)){
28                     ind++;
29                     x = 1;
30                }
31                recur(nums,  temp , tar , x ? ind : ind+1 );
32 
33
34    }
35};