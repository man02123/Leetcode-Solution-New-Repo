// Last updated: 02/10/2026, 20:05:31
1class Solution {
2public:
3    vector<string> solutionSet;;
4    vector<string> generateParenthesis(int n) {
5        string res;
6        solve(n , res ,  n , n);
7        return solutionSet;
8    }
9    void solve (int num ,  string &curr , int open , int close) {
10        if(open <= 0){
11
12            if(close <= 0 ){
13                solutionSet.push_back(curr);
14                return;
15            }
16        }
17
18        if(open > 0) {
19            curr.push_back('(');
20            solve(num , curr, open-1 , close);
21            curr.pop_back();
22        }
23        if(close > open){
24            curr.push_back(')');
25            solve(num ,curr, open , close-1);
26            curr.pop_back();
27        }
28
29    }
30};