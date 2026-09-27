// Last updated: 28/09/2026, 01:26:42
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        
5
6        
7        return set<int>(nums.begin(), nums.end()).size() < nums.size();
8    }
9};