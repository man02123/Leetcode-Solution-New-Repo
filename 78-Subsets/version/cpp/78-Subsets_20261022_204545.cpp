// Last updated: 22/10/2026, 20:45:45
1class Solution {
2public: vector<vector<int>> ans;
3    vector<vector<int>> subsets(vector<int>& nums) {
4        vector<int> temp;
5       recur(nums,  0 , temp);
6       return ans; 
7    }
8    void recur(vector<int>& nums , int ind ,  vector<int>& temp) {
9        if(ind >= nums.size()){
10            ans.push_back(temp);
11            return;
12        }
13
14        temp.push_back(nums[ind]);
15        recur(nums,  ind+1 ,  temp);
16        temp.pop_back();
17        recur(nums,  ind+1 ,  temp);
18    }
19};