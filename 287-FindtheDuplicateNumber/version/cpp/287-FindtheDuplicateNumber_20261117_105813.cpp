// Last updated: 17/11/2026, 10:58:13
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4
5        for(auto &it : nums)it = it-1;
6        
7       for(int i  = 0 ; i < nums.size() ; i++ ) {
8        
9
10        while(nums[i] != i) {
11            if(nums[nums[i]] == nums[i]) return nums[i]+1;
12            //cout << nums[nums[i]] << i << " ";
13            swap(nums[i],nums[nums[i]]);
14            
15        }
16
17       }
18
19       for(int i = 0 ;i < nums.size();i++) {
20        if(nums[i] != i) return i+1;
21       }
22
23       return 1;
24       
25    }
26};