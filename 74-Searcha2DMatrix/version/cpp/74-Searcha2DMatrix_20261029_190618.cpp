// Last updated: 29/10/2026, 19:06:18
1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& mat, int t) {
4
5        int row = 0;
6
7        int low = 0 , hi = mat.size();
8
9        while(low < hi) {
10         
11         int mid = (low+hi)/2;
12
13         if(mat[mid][0] <= t && mat[mid].back()>= t){
14            row = mid;
15            break;
16         }
17         else if( mat[mid].back() < t){
18            low = mid+1;
19         }
20         else 
21         hi = mid;
22        } 
23        
24        low = 0 , hi = mat[row].size();
25
26        while(low < hi) {
27           int mid = (low+hi)/2;
28
29           if(mat[row][mid] == t){
30            return true;
31           }
32           else if(mat[row][mid] < t){
33            low = mid+1;
34           }
35           else hi = mid;
36        }
37
38
39        return 0;
40
41        
42    }
43};
44
45