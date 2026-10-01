// Last updated: 02/10/2026, 00:18:45
1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4
5        unordered_map<int , int> mp;
6
7        for(auto it : nums) mp[it]++;
8
9        priority_queue<pair<int,int>> pq;
10
11        for(auto it :  mp) {
12            pq.push({it.second , it.first});
13        }
14        vector<int> ans ; 
15
16        while(pq.size() > 0  && k > 0) {
17             ans.push_back(pq.top().second);
18             pq.pop();
19             k--;
20        }
21
22        return ans;
23
24    }
25};