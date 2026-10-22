// Last updated: 22/10/2026, 20:39:52
1class Solution {
2public: vector<vector<int>> ans;
3    vector<vector<int>> permuteUnique(vector<int>& nums) {
4      sort(begin(nums) , end(nums));
5      recur(nums , 0 );  
6      return ans;
7    }
8
9    void recur (vector<int> nums  , int index) {
10        if(index == nums.size()) {
11            ans.push_back(nums);
12            return;
13        }
14
15        for(int i = index; i < nums.size() ; i++) {
16           if(i > index &&  (nums[i] == nums[index])) continue;
17
18           swap(nums[i] , nums[index]);
19           recur(nums,  index+1);
20           }
21
22    }
23};
24
25
26