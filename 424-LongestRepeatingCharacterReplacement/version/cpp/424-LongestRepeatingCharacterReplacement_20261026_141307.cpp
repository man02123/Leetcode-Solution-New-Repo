// Last updated: 26/10/2026, 14:13:07
1class Solution {
2public:
3    int characterReplacement(string s, int k) {
4        map<char ,  int> mp;
5
6        int ans = 0 ,  end = 0;
7        int maxChar = 0;
8        
9        for(int i = 0 ; i < s.size() ; i++) {
10                
11                 mp[s[i]]++;
12                 maxChar = max(maxChar, mp[s[i]]);
13                 int len = i - end+1;
14                 if(len-maxChar <= k) {
15                    ans = max(ans ,  len);
16                    continue;
17                 }
18                 mp[s[end++]]--;
19
20
21        }
22        return ans;
23
24    }
25};