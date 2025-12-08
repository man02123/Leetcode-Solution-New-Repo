// Last updated: 08/12/2025, 17:39:04
class Solution {
    set<string> dictSet;
    int dp [1001]; 
public:
    bool wordBreak(string s, vector<string>& w) {
        memset(dp , -1 ,sizeof(dp));
        for(auto it : w)dictSet.insert(it);
        set<string> st;

        return recur(s , 0 , st);

    }
    bool recur(string &s ,  int ind , set<string> &st){
         if (ind >= s.size()){
            return true;
         }
         if(dp[ind] != -1)return dp[ind];

         bool ans = false;
         for(int part = ind ;  part < s.size() ; part++){
            if(dictSet.find(s.substr(ind, part-ind+1)) != dictSet.end()) {
            
                ans |= recur(s , part+1 ,  st);
            
            }
         }
         dp[ind] = ans;
         return ans;

    }

};