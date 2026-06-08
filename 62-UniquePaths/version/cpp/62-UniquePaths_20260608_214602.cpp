// Last updated: 08/06/2026, 21:46:02
1class Solution {
2public:
3    int uniquePaths(int m, int n) {
4       int dp[m+1][n+1];
5
6        for(int i = 0 ;i < m ; i++) {
7           
8           for(int j =0 ; j < n ;j++){
9            dp[i][j] = 0;
10           }
11       }
12
13       for(int i = 0 ;i <n ;i++)dp[0][i] = 1;
14       for(int i = 0 ;i <m ;i++)dp[i][0] = 1;
15
16       for(int i = 1 ;i < m ; i++) {
17           for(int j =1 ; j < n ;j++){
18            dp[i][j] =  dp[i-1][j]+dp[i][j-1];
19           }
20       }
21       return dp[m-1][n-1];
22    }
23};