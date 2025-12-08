// Last updated: 08/12/2025, 17:40:50
class Solution {
public:
    vector<string> solutionSet;;
    vector<string> generateParenthesis(int n) {
        string res;
        solve(n , res ,  n , n);
        return solutionSet;
    }
    void solve (int num ,  string &curr , int open , int close) {
        if(open <= 0){

            if(close <= 0 ){
                solutionSet.push_back(curr);
                return;
            }
        }

        if(open > 0) {
            curr.push_back('(');
            solve(num , curr, open-1 , close);
            curr.pop_back();
        }
        if(close > open){
            curr.push_back(')');
            solve(num ,curr, open , close-1);
            curr.pop_back();
        }

    }
};