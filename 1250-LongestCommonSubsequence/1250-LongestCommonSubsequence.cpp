// Last updated: 08/12/2025, 17:33:03
class Solution {
public:
    int dp[1001][1001];
    int longestCommonSubsequence(string t1, string t2) {
        memset(dp,-1,sizeof(dp));

        return recur(t1,t2,0 ,0);
    }
    int recur(string &t1, string &t2 ,  int ind1 , int ind2) {
        
        //if(ind1 >= t1.size() && ind2 >= t2.size()) return 0;
        if(ind1 >= t1.size() || ind2 >= t2.size()) return 0;
        if(dp[ind1][ind2] !=-1) return dp[ind1][ind2];
        int ans = 0;
        if(t1[ind1] == t2[ind2] ){
         ans = 1 + recur(t1,t2,ind1+1, ind2+1);
        }
        else{
            ans = max(recur(t1,t2 , ind1+1 , ind2) ,recur(t1,t2 , ind1 , ind2+1));
        }
        //cout << ind1<<ind2<<ans << " ";
        return dp[ind1][ind2] = ans;

    }
};