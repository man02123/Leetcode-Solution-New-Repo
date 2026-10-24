// Last updated: 25/10/2026, 01:28:21
1class Solution {
2public:
3    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
4        deque< pair<int , int> > q;
5
6        int end = 0;
7
8        while(end < k) {
9           
10          if(q.size() > 0 && q.back().first <= nums[end]) {
11
12              while(q.size() > 0 && q.back().first <= nums[end]) {
13                q.pop_back();
14              }
15           }
16        
17          q.push_back({nums[end] , end});
18          end++;
19        }
20
21        vector<int> ans ;
22        ans.push_back(q.front().first);
23
24
25        for(int i = k ; i < nums.size() ; i++) {
26           
27           int value = nums[i];
28
29           if(q.size() > 0 && q.back().first <= value) {
30
31              while(q.size() > 0 && q.back().first <= value) {
32                q.pop_back();
33              }
34           }
35
36           q.push_back({nums[i] , i });
37
38           if(q.size() > k) {
39            q.pop_front();
40           }
41
42           while( q.size() > 0 && i - k+1 > q.front().second ) {
43             q.pop_front();
44           }
45
46           ans.push_back(q.front().first);
47
48
49        }
50
51        return ans;
52    }
53};