// Last updated: 17/10/2026, 13:24:44
1class Solution {
2public:
3    bool isNStraightHand(vector<int>& hand, int gs) {
4        if(gs > hand.size()) return false;
5
6        if(hand.size() % gs != 0 )return false;
7        
8        map<int,int> mp ;
9
10        for(auto it : hand) mp[it]++;
11        int cnt = hand.size() / gs;
12        
13        for(auto it : mp) {
14            int val = it.first;
15            int freq = it.second;
16           
17           int cval = val+1;
18           
19            while(freq > 0 ) {
20            bool seq = true;
21            int cval = val+1;
22
23               for(int i = 1 ;i < gs && seq == true ;i++){
24
25                if(mp.find(cval) != mp.end()) {
26                    mp[cval]--;
27                    if(mp[cval] == 0)mp.erase(cval);
28                    cval++;
29                }
30                else {
31                    seq = false;
32                }
33
34               }
35
36               if(seq)cnt--;
37               freq--;
38
39               
40               
41            }
42        }
43       bool ans = false;
44       return cnt == 0 ;
45
46    }
47};