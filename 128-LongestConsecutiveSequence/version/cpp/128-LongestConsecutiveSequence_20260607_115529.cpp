// Last updated: 07/06/2026, 11:55:29
1class Solution {
2public:
3    int longestConsecutive(vector<int>& nums) {
4        
5        map<int,int> mp;
6        if(nums.size() == 0) return 0;
7        int ans = 1;
8        for(auto it:nums)mp[it] = 1;
9
10        for(auto it : mp) {
11
12           int elem = it.first;
13           int freq = it.second;
14
15           if(freq == 0) continue;
16
17           bool flag = true;
18
19           int tans = 1;
20           int celem =  elem;
21
22           while(flag) {
23             
24             if(mp[elem+1] > 0){
25                mp[elem+1] = 0; 
26                tans++;
27                ans = max(ans,tans);
28                elem++;
29                
30             }
31             else flag = false;
32
33           }
34     
35        }
36        return ans;
37    }
38};