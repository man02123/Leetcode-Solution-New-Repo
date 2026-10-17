// Last updated: 17/10/2026, 14:11:55
1class Solution {
2public:
3    string removeKdigits(string nums, int k) {
4        
5       stack<char> st;
6
7       for(int i = 0 ;i < nums.size() ; i++) {
8        
9        char cnum = nums[i];
10
11        if(k == 0 ){
12
13            st.push(nums[i]);
14
15        }
16        else {
17
18            if(st.size() == 0) {
19
20                st.push(cnum);
21
22            }
23            else {
24              if(st.size() > 0 && k > 0 && st.top()-'0' > cnum-'0') {
25
26                while(st.size() > 0 && k > 0 && st.top()-'0' > cnum-'0') {
27                    st.pop();
28                    k--;
29                }
30                st.push(cnum);
31              }
32              else if(st.size() > 0 && k > 0 && st.top()-'0' > cnum-'0'){
33                k--;
34              }
35              else
36              st.push(cnum);
37
38            }
39        }
40
41       }
42
43       string ans = "";
44
45       while(st.size() > 0) {
46        ans+=st.top();
47        st.pop();
48       }
49       bool br = true;
50      auto temp = ans;
51       for(int i = ans.size() - 1 ; i>=0  && br;i--) {
52        if(ans[i] != '0') {
53            br = 0;
54            break;
55        }
56         ans.pop_back();
57       }
58       if(br){
59        return "0";
60       }
61
62       reverse(begin(ans) , end(ans));
63
64       while(ans.size()>0 && k > 0){
65        ans.pop_back();
66        k--;
67       }
68       if(k > 0) return "0";
69
70       return ans == "" ? "0" : ans;
71
72
73    }
74};