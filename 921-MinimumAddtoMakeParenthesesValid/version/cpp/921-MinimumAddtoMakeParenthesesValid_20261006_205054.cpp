// Last updated: 06/10/2026, 20:50:54
1class Solution {
2public:
3    int minAddToMakeValid(string s) {
4        
5        stack<char> st;
6        int open = 0;
7        for(int i = 0 ;i<s.size() ; i++) {
8
9            if(st.size() > 0  && s[i] == ')' && st.top() == '(') {
10               st.pop();
11            }
12            // else if( s[i] == '('){
13            else
14                st.push(s[i]);
15            //}
16
17        }
18
19        return st.size();
20       
21
22    }
23};