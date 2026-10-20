// Last updated: 20/10/2026, 18:25:33
1class Solution {
2public:
3    vector<int> countBits(int n) {
4      vector<int> ans(n+1);
5
6      for(int i = 0; i<= n ;i++) {
7           if(i%2 == 0 ) {
8            ans[i] = ans[i/2];
9           }
10           else ans[i] = 1 + ans[i/2];
11      } 
12
13      return ans;
14    }
15};