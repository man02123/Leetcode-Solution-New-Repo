// Last updated: 24/09/2026, 23:42:16
1class Solution {
2public: 
3vector<vector<int>> ans;
4
5    vector<vector<int>> subsets(vector<int>& nums) { 
6        vector<int> temp; 
7       recur(nums , 0 ,temp); 
8       return ans;
9    }
10    void recur(vector<int>& nums ,  int ind  , vector<int> &temp){
11
12
13       if(ind >= nums.size() ) {
14        ans.push_back(temp);
15        return;
16       }
17       temp.push_back(nums[ind]);
18       recur(nums,  ind+1, temp);
19       temp.pop_back();
20       recur(nums,  ind+1, temp);
21
22    }
23};