// Last updated: 22/09/2026, 17:52:54
1class Solution {
2public:
3    int longestConsecutive(vector<int>& nums) {
4        if(nums.size() == 0) return 0;
5            set<int> st ; 
6            for(auto it : nums)st.insert(it);
7
8            int ans = 1;
9           
10           for(auto it : st) {
11            int cseq = 1;
12            int cnum = it;
13             if( st.contains(it-1)) {
14               continue;
15              }
16
17                while(st.find(cnum) != st.end()) {
18                     cseq++;
19                     ans = max(cseq ,  ans);
20                     cnum++;
21                }
22             }
23 
24        return ans-1;    
25    
26
27    }
28};