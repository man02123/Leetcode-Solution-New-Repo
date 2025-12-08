// Last updated: 08/12/2025, 17:38:23
class Solution {
public:vector<vector<int>> solutionSet;
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> curr;
        solve( 1, k , n , curr );
        return solutionSet;
    }
    void solve(int start , int k , int n  , vector<int> &curr){

        if(n == 0 && k==0){
            solutionSet.push_back(curr);
            return;
        }

        if(k < 0) return;
        if(n<0) return;

        for(int i = start ; i<=9 ; i++){

            curr.push_back(i);
            if(n - (i) >= 0)
            solve(i+1 , k-1 , n-i , curr);
            curr.pop_back();
        }
    }
};