// Last updated: 30/09/2026, 02:02:18
1class Solution {
2public:
3    bool checkInclusion(string s1, string s2) {
4        vector<int> freq(26, 0);
5
6        for(auto it : s1) freq[it-'a']++;
7        bool ans = false;
8        for (int i = 0; i < s2.size() ; i++) {
9
10            if(freq[s2[i]-'a'] > 0) {
11                // we got a starting point , now iterate
12
13                auto nmap = freq;
14                int j = i;
15                // cout<< j << i << " ";
16                // cout << j-i+1;
17                while(j<s2.size() && nmap[s2[j]-'a'] > 0 && j-i+1 <= s1.size()){
18                    nmap[s2[j]-'a']--;
19                    j++;
20                    //cout<<j;
21                }
22
23                bool tans = true;
24                for (int i = 0 ;i<26;i++) {
25                    if(nmap[i] > 0 ) tans = false;
26                }
27
28             if(tans) return tans;
29
30            }
31
32
33        }
34        return ans;
35    }
36};