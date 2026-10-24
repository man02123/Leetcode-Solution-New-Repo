// Last updated: 24/10/2026, 17:26:29
1class Solution {
2public:
3    vector<int> dx={0,1,-1,0};
4    vector<int> dy={1,0,0,-1};
5
6    bool exist(vector<vector<char>>& b, string w) {
7        bool ans = false;
8
9        for(int i = 0 ;i < b.size() ; i ++) {
10            for(int j = 0 ; j < b[i].size() ;j++) {
11                 
12                 ans |= recur(b ,  w ,  0 ,  i ,  j);
13                 if(ans) return ans;
14            }
15        }
16       return ans;
17
18    }
19
20    bool recur(vector<vector<char>>& b, string w , int ind , int row ,  int col) {
21            
22            if(ind == w.size()) return true;
23
24            if(row < 0 || row >= b.size() || col < 0 || col>= b[row].size() || b[row][col] == '0' || b[row][col] != w[ind]) {
25                return false;
26            }
27
28            
29            bool ans = false;
30
31             for(int i=0;i<4;i++)
32            {
33              char x= b[row][col];
34              b[row][col]='0';
35              int nx=row+dx[i];
36              int ny = col+dy[i];
37           
38              ans |= recur(b,w,ind+1 , nx,ny);
39            
40              b[row][col]=x;
41            }
42
43            return ans;
44
45    }
46};