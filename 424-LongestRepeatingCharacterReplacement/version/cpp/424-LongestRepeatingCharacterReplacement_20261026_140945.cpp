// Last updated: 26/10/2026, 14:09:45
1class Solution {
2public:
3    int characterReplacement(string s, int k) {
4        unordered_map<char , int> mp;
5        
6        int ans = 0;
7        
8        int l = 0;
9        int maxi = 0;
10        char c;
11        
12        for(int i = 0;i<s.size() ;i++){
13            
14            mp[s[i]]++;
15            maxi = max(maxi , mp[s[i]]);
16            
17            int len = i-l+1;
18            
19            if(len - maxi <= k ){
20                ans = max(len , ans);
21                continue;
22            }
23            
24           mp[s[l++]]--;
25            
26        }
27        return ans;
28        
29    }
30};