// Last updated: 09/12/2025, 23:22:03
class Solution {
public:int n ;
    int dp[1005][1005];
    int minimumCoins(vector<int>& p) {
        n = p.size();
        reverse(p.begin(),p.end());
        p.push_back(0);
        reverse(p.begin(),p.end());
        
        memset(dp,-1,sizeof(dp));
        return solve(p , 1 ,0);
    }
    int solve(vector<int>& p , int ind  , int fr){
        if(fr >= n){
            return  0;
        }
        if(ind >= p.size())return 100000;
        if(dp[ind][fr] != -1)
            return dp[ind][fr] ;
        
        int t = INT_MAX;
        int ag = INT_MAX;
        
       
            
            for(int i =1;i<=ind+1;i++){
               t = min(t,p[ind] + solve(p,ind+i,fr+i));
               
            }
            ag = min(ag, p[ind] + solve(p,ind+1,fr+1)); 
             
        
       
        return dp[ind][fr]  = min(t,ag);
    }
};

//[26,18,6,12,49,7,45,45]
//62 
//39
//[27,17,29,45,3,39,42,26]
//59
//47