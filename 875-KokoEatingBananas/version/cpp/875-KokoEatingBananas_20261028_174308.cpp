// Last updated: 28/10/2026, 17:43:08
1class Solution {
2public:
3    int minEatingSpeed(vector<int>& p, int h) {
4        long long int sum = 0 ; 
5        for(auto it : p) sum+=it;
6        
7        long long low = 1   , high = sum+1;
8        long long ans = INT_MAX;
9        long long int mid;
10        while(low < high) {
11
12        mid = low + (high-low)/2;
13
14        if( check(mid , p , h) ){
15            ans = min(ans ,  mid);
16            high = mid;
17        }
18        else 
19        low = mid+1;
20        }
21
22        return ans;
23    }
24
25    bool check(int rate , vector<int>& p ,  int h) {
26         
27         long long int tot = 0;
28
29         for(int i = 0 ; i < p.size() ;i++) {
30
31            long long int day = ((p[i] % rate) > 0 ?  1 : 0) + p[i]/rate;
32            tot += day;
33         }
34        //cout << tot << rate << " " << (tot <= h) <<  " ";
35         return tot <= h ;
36
37
38    }
39};