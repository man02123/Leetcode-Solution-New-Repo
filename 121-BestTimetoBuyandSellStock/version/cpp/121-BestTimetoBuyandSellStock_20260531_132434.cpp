// Last updated: 31/05/2026, 13:24:34
1class Solution {
2public:
3    int maxProfit(vector<int>& p) {
4        
5        int mini = p[0];
6        int ans = 0;
7        for(int i =0 ;i<p.size() ; i++) {
8            
9            mini = min(p[i] , mini);
10            ans = max(ans , p[i]-mini);
11
12        }
13        return ans;
14    }
15};