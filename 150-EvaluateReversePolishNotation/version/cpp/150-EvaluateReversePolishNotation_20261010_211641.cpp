// Last updated: 10/10/2026, 21:16:41
1class Solution {
2public:
3    int evalRPN(vector<string>& t) {
4        
5        stack<long> st;
6        for(int i = 0 ; i < t.size() ; i++) {
7            string c = t[i];
8
9            if( c == "+" || c == "-" || c == "*" || c == "/")  {
10                    
11                    long x = st.top();
12                    st.pop();
13                    long y = st.top();
14                    st.pop();
15
16                    st.push(perform(t[i][0] , y , x));
17
18                 
19
20            }
21            else {
22                   long n=stoi(t[i]);
23                   st.push(n);
24            }
25
26        }
27        return st.top();
28
29    }
30    long perform (char value , int y , int x) {
31        switch( value) {
32            case '+':
33            return y+x;
34            case '-':
35            return y-x;
36            case  '/' :
37            return y/x;
38            case  '*' :
39            return y*x;
40
41        }
42        return -1;
43    }
44    
45
46};
47
48