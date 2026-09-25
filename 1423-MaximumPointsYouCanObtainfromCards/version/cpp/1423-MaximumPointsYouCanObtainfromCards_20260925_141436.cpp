// Last updated: 25/09/2026, 14:14:36
1class Solution {
2public:
3    int maxScore(vector<int>& cp, int k) {
4        int tsum = accumulate(begin(cp),end(cp),0);
5
6        int csum = 0 ,  ans = INT_MAX;
7        int j = 0;
8        while(j < cp.size()-k){
9        csum += cp[j++];
10        }
11        ans = min(ans , csum);
12
13        for(int i = 0 ; i < cp.size() && j<cp.size(); i++){
14          
15          csum += cp[j++];
16          csum -= cp[i];
17          ans = min(ans, csum);
18
19        }
20    return tsum - ans;
21    }
22};