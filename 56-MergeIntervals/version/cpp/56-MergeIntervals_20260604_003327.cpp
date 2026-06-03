// Last updated: 04/06/2026, 00:33:27
1class Solution {
2public:
3    vector<vector<int>> merge(vector<vector<int>>& in) {
4        sort(begin(in) , end(in));
5        vector<vector<int>> ans;
6
7        int start = in[0][0];
8        int last = in[0][1];
9
10       for(int i = 1 ;i<in.size() ; i++) {
11          
12          if(last >= in[i][0]) {
13              last = max(in[i][1] , last);
14          }
15          else {
16
17               ans.push_back({start,last});
18               start = in[i][0];
19               last = max(last , in[i][1]);
20          }
21          
22       }
23       ans.push_back({start,last});
24    return ans;
25    }
26};