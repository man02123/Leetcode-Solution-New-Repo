// Last updated: 10/10/2026, 21:45:54
1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& t) {
4        vector<int> ans(t.size() , 0 );
5
6        stack< pair<int , int> > st;
7
8        for(int i = t.size()-1; i >= 0 ; i--) {
9             
10             if( st.size() == 0 ) {
11                st.push({t[i] , i});
12             }
13             else {
14                 int currTemp = t[i];
15
16                 while(st.size() > 0 && currTemp >= st.top().first) {
17                    st.pop();
18                 }
19
20                 if(st.size() == 0) {
21                    st.push({t[i] , i});
22                 }
23                 else {
24                    ans[i] = (st.top().second-i);
25                    st.push({t[i],i});
26                 }
27             }
28
29        }
30        return ans;
31    }
32};