// Last updated: 19/10/2026, 16:46:19
1class Solution {
2public: 
3    vector<vector<int>> ans;
4    vector<vector<int>> permute(vector<int>& nums) {
5        vector<int> curr;
6        recur(nums, 0 , curr );
7        return ans;
8    }
9
10    void recur(vector<int>& nums ,  int index , vector<int>& curr ) {
11        
12        if(index >= nums.size()){
13            ans.push_back(nums);
14            return;
15        }
16
17        for(int i = index; i < nums.size() ;i++) {
18            swap(nums[i] , nums[index]);
19            recur(nums,index+1 , curr);
20            swap(nums[i] , nums[index]);
21        }
22
23    } 
24};