// Last updated: 23/10/2026, 19:49:17
1class Solution {
2public: vector<string> ans;
3    vector<string> generateParenthesis(int n) {
4        
5        string temp;
6        int open  = n , close = n;
7        recur(open , close , 2*n  , temp);
8        return ans;
9    }
10    void recur(int open ,  int close ,  int n ,  string temp) {
11        
12        if(n == 0 && open == 0 && open == close) {
13            ans.push_back(temp); 
14            return;
15        }
16        if(n < 0) return;
17
18        if(open >= close) {
19            temp+='(';
20            recur(open-1 , close , n-1 , temp);
21        }
22        else {
23
24            if(open > 0){
25            temp+='(';
26            recur(open-1 , close , n-1 , temp);
27            temp.pop_back();
28            }
29
30            temp+=')';
31            recur(open , close-1 , n-1 , temp);
32        }
33    }
34};