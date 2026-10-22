// Last updated: 22/10/2026, 20:28:41
1class Solution {
2public:
3    vector<vector<int>> res;
4    vector<vector<int>> permuteUnique(vector<int>& nums) { 
5        sort(nums.begin(),nums.end());
6        
7      solve(nums,0); 
8        return res;
9    }
10    
11void solve(vector<int> nums,int ind){
12    
13       if(ind==nums.size())
14       {
15           res.push_back(nums);
16       }
17    
18    for(int i=ind;i<nums.size();i++){
19        
20        if( i!=ind && nums[i]==nums[ind]) continue; 
21        
22        
23            swap(nums[i],nums[ind]);
24              solve(nums,ind+1);
25        
26      
27    }
28  
29}
30};
31// class Solution {
32// public:
33//     vector<vector<int>> permuteUnique(vector<int>& nums) {
34//         vector<vector<int>> output;
35//         sort(begin(nums), end(nums));
36//         generatePermutations(nums, output, 0);
37//         return output;
38//     }
39// private:
40//     void generatePermutations(vector<int> nums, vector<vector<int>>& output, int idx) {
41//         if (idx == size(nums)) {
42//             output.emplace_back(nums);
43//         }
44//         for (int i = idx; i < size(nums); ++i) {
45//             if (i != idx && nums[i] == nums[idx]) continue;
46//             swap(nums[i], nums[idx]);
47//             generatePermutations(nums, output, idx + 1);
48//         }
49//     }
50// };