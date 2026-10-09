// Last updated: 10/10/2026, 00:47:59
1class Solution {
2public:
3    string minWindow(string s, string t) {
4        unordered_map<char,int> mp;
5        int len=INT_MAX;
6        string res = "";
7        if(s.size()<t.size())
8            return "";
9        
10        if(s.size()==t.size() && s==t)return s;
11        
12        for(auto it:t)
13            mp[it]++;
14        
15    
16        int k =t.size();
17        int j = 0,i = 0;;
18        int cnt = 0;
19        
20        for(j=0;j<s.size();j++)
21        {
22           if(mp[s[j]]>0)
23               cnt++;
24               mp[s[j]]--;
25           
26          if(cnt == k)
27          {
28              while(i<j && mp[s[i]]<0)
29              {
30                      mp[s[i]]++;
31                      i++;
32              }
33              if(len>j-i+1)
34              {
35                  res = s.substr(i,j-i+1);
36                  len = j-i+1;
37              }
38              
39              mp[s[i++]]++;
40              cnt--;
41              
42             
43          }
44            
45            
46        }
47       
48        if(len == INT_MAX)
49            return "";
50      
51    return res;
52 }
53    
54};