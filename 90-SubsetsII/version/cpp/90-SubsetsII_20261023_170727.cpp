// Last updated: 23/10/2026, 17:07:27
1class Solution {
2public:vector<vector<int>> ans;
3    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
4       sort(begin(nums) , end(nums));
5       vector<int> temp;
6       recur(nums, temp ,  0);;
7       return ans; 
8    }
9
10    void recur(vector<int>& nums ,  vector<int> &temp ,  int ind) {
11
12        if(ind >= nums.size()) {
13            ans.push_back(temp);
14            return;
15        }
16
17         temp.push_back(nums[ind]);
18         recur(nums,temp,ind+1);
19         temp.pop_back();
20
21         while(ind < nums.size()-1 && nums[ind] == nums[ind+1]) {
22            ind++;
23            // skip all as you have already taken one instance. 
24         }
25             recur(nums,temp,ind+1);
26         
27
28    }
29};