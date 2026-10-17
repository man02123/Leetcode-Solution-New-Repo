// Last updated: 17/10/2026, 13:23:29
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
11
12        int cnt = hand.size() / gs;
13        
14        for(auto it : mp) {
15            int val = it.first;
16            int freq = it.second;
17           
18           int cval = val+1;
19           
20            while(freq > 0 ) {
21            bool seq = true;
22            int cval = val+1;
23
24               for(int i = 1 ;i < gs && seq == true ;i++){
25
26                if(mp.find(cval) != mp.end()) {
27                    mp[cval]--;
28                    if(mp[cval] == 0)mp.erase(cval);
29                    cval++;
30                }
31                else {
32                    cout<< cval;
33                    seq = false;
34                }
35
36               }
37
38               if(seq)cnt--;
39            //    cout<<freq << seq<< val << " ";
40               freq--;
41
42               
43               
44            }
45        }
46       bool ans = false;
47
48    //    for(auto it:mp){
49    //     if(it.second > 0) return false;
50    //    }
51       return cnt == 0 ;
52
53    }
54};