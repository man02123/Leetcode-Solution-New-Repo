// Last updated: 22/09/2026, 19:33:44
1class Solution {
2public:
3    vector<int> majorityElement(vector<int>& nums) {
4        int n=nums.size();
5        unordered_map<int ,int> mp;
6        vector<int>  v;
7        
8        for(auto it:nums)
9            mp[it]++;
10       
11        for(auto it:mp)
12        {
13         if(it.second>(n/3))
14             v.push_back(it.first);
15        
16        }
17        return v;
18    }
19};