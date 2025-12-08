// Last updated: 08/12/2025, 17:40:36
class Solution {
public: 
    vector<vector<int>> ans;
    vector<vector<int>> combinationSum2(vector<int>& cand, int tar) {
        sort(begin(cand) , end(cand));
        vector<int> currAns;
        solve(cand ,  tar , 0 , currAns);
        return ans;
    }

    void solve(vector<int>& cand ,  int tar ,  int ind , vector<int> &currAns) {
        if(tar <0) { return;}
        if(tar == 0) {ans.push_back(currAns);  return;}
        if(ind >= cand.size()) return ;

        for(int i  = ind ; i < cand.size();i++) {

            if(i>ind && cand[i] == cand[i-1] ){
                continue;
            }
            
            currAns.push_back(cand[i]);

            solve(cand , tar-cand[i] , i+1 , currAns);
            currAns.pop_back();
        }
    }
};