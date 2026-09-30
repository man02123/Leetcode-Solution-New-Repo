// Last updated: 01/10/2026, 02:09:41
1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        map<vector<int>  , vector<string>> freq;
5        
6        for(auto it :  strs) {
7            
8            vector<int> key(26, 0);
9
10            for(int i =0 ;i <it.size() ;i++) {
11                key[it[i]-'a']++;
12            } 
13
14            freq[key].push_back(it);        
15        }
16
17       vector<vector<string>> ans;
18
19       for(auto it : freq) {
20         ans.push_back(it.second);
21       }
22
23       return ans ;
24
25    }
26};
27