// Last updated: 17/01/2026, 03:36:50
1class Solution {
2public:
3       vector<int> dx = {-1, 0 ,1 ,0};
4       vector<int> dy = {0 , 1 , 0 , -1};
5
6    int numEnclaves(vector<vector<int>>& g) {
7       
8
9        int row = g.size() ,  col = g[0].size();
10        int ans = 0;
11        int m =row , n = col;
12        //vector<vector<int>> vis(m+1 , vector<int>(n+1 , 0));
13       
14       // first col
15       for(int j = 0 ;j<row;j++){
16        if(g[j][0]==1){
17            visitAll( g, j,0);
18        }
19       }
20       // last col
21       for(int j = 0 ;j<row;j++){
22        if(g[j][col-1]==1){
23            visitAll( g, j , col-1);
24        }
25       }
26
27       for(int i = 0 ;i<col;i++){
28        if(g[0][i]==1){
29            visitAll( g, 0,i);
30        }
31       }
32       for(int i = 0 ;i<n;i++){
33        if(g[row-1][i]==1){
34            visitAll( g, row-1,i);
35        }
36       }
37
38        for(int i = 0 ;i<m;i++){
39            for(int j = 0 ;j<n;j++){
40                if(g[i][j]==1){
41                    ans++;
42                }
43            }
44        }
45
46        return ans;
47
48    }
49    void visitAll ( vector<vector<int>>& g ,  int x ,  int y){
50       if(g[x][y] == 100)return ;
51       queue<pair<int,int>> q;
52       q.push({x , y});
53       
54       int m = g.size() ,  n = g[0].size();
55
56       while(q.size() > 0) {
57          int x = q.front().first;
58          int y = q.front().second;
59          g[x][y] = 100;
60          q.pop();
61          
62          for(int i = 0 ; i < 4;i++){
63
64            int nx = x+dx[i];
65            int ny = y+dy[i];
66
67            if(nx >= 0 && nx < m && ny>=0 && ny<n && g[nx][ny]==1){
68                  g[nx][ny] = 100;
69                  q.push({nx , ny});
70            }
71          }
72       }
73
74    }
75};