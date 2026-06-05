// Last updated: 05/06/2026, 14:31:48
1class Solution {
2public:
3    int longestConsecutive(vector<int>& nums) {
4
5       int n = nums.size();
6       map<int ,int> st;
7
8       for(auto it : nums )st[it]++;
9       int ans = 0;
10       if(nums.size() >=1) ans = 1 ;
11       for(auto it : st) {
12        int currVal = it.first;
13        int currFreq = it.second;
14
15        if(currFreq == 0)continue;
16        bool flag = true;
17        int tans = 1;
18        while(flag) {
19
20            if(st[currVal+1] > 0 ){
21               st[currVal+1] = 0;
22               currVal++;
23               tans++;
24               ans = max(ans , tans);
25            }else flag = false;
26        }
27
28       }
29       return ans;
30    }
31};