// Last updated: 08/10/2026, 21:32:35
1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> st ;
5
6        for(int i = 0 ;i<s.size();i++) {
7
8            if(s[i] == ')' || s[i] == '}' || s[i] == ']') {
9
10                 if(s[i] == ')' && st.size() > 0 && st.top() == '('){
11                    st.pop();
12                 }else if(s[i] == '}' && st.size() > 0 && st.top() == '{'){
13
14                    st.pop();
15
16                 }else if(s[i] == ']' && st.size() > 0 && st.top() == '['){
17                    st.pop();
18                 }
19                 else st.push(s[i]);
20
21            }
22            else 
23            st.push(s[i]);
24        }
25        return st.empty();
26    }
27
28    
29};