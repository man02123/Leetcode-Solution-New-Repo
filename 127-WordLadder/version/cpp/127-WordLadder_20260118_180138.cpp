// Last updated: 18/01/2026, 18:01:38
1class Solution {
2public:
3    int ladderLength(string b, string end, vector<string>& word) {
4        unordered_map<string,bool> mp;
5        for(auto it:word)
6            mp[it] = false;
7        
8        mp[b] = true;
9        
10        queue<string> q;
11        q.push(b);
12        int ans = 0;
13        
14        while(q.size()>0)
15        { 
16            int k = q.size();
17            ans++;
18            while(k--)
19            {
20                 string s = q.front();
21                if(s == end)
22                    return ans;
23                
24                q.pop();
25                
26                for(auto it:word)
27                {
28                    if(comp(it,s) == true  && mp[it] == false)
29                    {
30                        q.push(it);
31                        mp[it] = true;
32                    }
33                }
34            }
35            
36        }
37        return 0;
38        
39    }
40 bool comp(string &a,string &b )
41 {
42     int cnt = 0;
43     if(a.size() != b.size())
44         return false;
45     
46     for(int i = 0 ;i<a.size();i++)
47     {
48         if(a[i] != b[i])
49             cnt++;
50         if(cnt>1)
51             return false;
52         
53     }
54     return true;
55 }
56};