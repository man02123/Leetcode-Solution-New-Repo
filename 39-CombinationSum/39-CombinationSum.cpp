// Last updated: 08/12/2025, 17:40:37
class Solution {
    vector<vector<int>> solutionSet;
public:
    vector<vector<int>> combinationSum(vector<int>& cand, int tar) {
     vector<int> temp;
    recur(cand , 0 , tar , temp);
    return solutionSet;
     
    }
    void recur(vector<int>& cand, int ind , int tar , vector<int> &temp) {
            if(tar == 0){
                solutionSet.push_back(temp);
                return;
            }   
            if(tar < 0 ||ind >= cand.size() ) {
                return;
            }  
            int csum = tar-cand[ind];

            temp.push_back(cand[ind]);
            recur(cand,ind,csum,temp);
            temp.pop_back();
            recur(cand,ind+1,tar,temp);
    }
};