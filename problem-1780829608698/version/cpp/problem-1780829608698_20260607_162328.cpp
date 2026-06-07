// Last updated: 07/06/2026, 16:23:28
1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& m, int tar) {
4        
5        int low = 0 , high = m.size() , mid = 0;
6
7        while(low < high) {
8            mid = (low+high)/2;
9            
10            if(m[mid][0] > tar) {
11               high = mid;
12            }else if(m[mid].back() < tar) {
13                low = mid+1;
14            }
15             else break;
16        }
17
18        low = 0 , high = m[mid].size()-1;
19        int cind = mid;
20
21        while(low <= high){
22            mid = (low+high)/2;
23
24            if(m[cind][mid] == tar) {
25                return true;
26            }
27            else if(m[cind][mid] < tar){
28                low = mid+1;
29            }
30            else high = mid-1;
31        }
32        return false;
33    }
34};