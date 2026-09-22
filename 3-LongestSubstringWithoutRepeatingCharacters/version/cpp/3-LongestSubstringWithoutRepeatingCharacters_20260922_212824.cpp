// Last updated: 22/09/2026, 21:28:24
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4
5       map<char ,int> freq;
6       int ans = 0;
7       int n = s.size();
8       int left = 0;
9       if(n==0)return 0;
10
11       for(int i =0 ; i < n ; i++) {
12
13            freq[s[i]]++;
14
15            while(freq[s[i]] > 1 && left <= i){
16                freq[s[left]]--;
17                left++;
18             }
19        ans = max(ans , i - left + 1 );
20
21       } 
22       return ans;
23
24    }
25};