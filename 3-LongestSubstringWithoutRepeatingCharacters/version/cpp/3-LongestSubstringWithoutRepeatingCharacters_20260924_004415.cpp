// Last updated: 24/09/2026, 00:44:15
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        if(s.size() == 0) return 0;
5
6
7        int ans = 1;
8        map<char, int> mp;
9        int j = 0;
10        
11        for(int i =0 ;i<s.size();i++) {
12           // mp[s[i]]++;
13        
14            while(j < s.size() && mp[s[j]] == 0) {
15
16                    ans = max(ans ,  j-i+1);
17                    mp[s[j]]++;
18                    j++;
19                    
20            }
21            mp[s[i]]--;
22        }
23        return ans;
24    }
25};