// Last updated: 09/12/2025, 23:21:19
class Solution {
public:
    int dp[26][26];
    int minimumDeletions(string w, int k) {
        
        vector<int> mp(26);
        memset(dp,-1,sizeof(dp));
        
        for(auto it:w)mp[it-'a']++;
        vector<int> x ;
        for(auto it:mp){
            if(it > 0)x.push_back(it);
        }
        sort(begin(x),end(x));
        
        return solve(x, k , 0 , x.size()-1 );
        
    }
    
    int solve(vector<int> &x ,int k ,int l , int r ){
     
        int del =INT_MAX , ndel = INT_MAX;
        
        if( l > r){
            return 0;
        }
        
        int ans = INT_MAX;
        if(dp[l][r] !=-1)return dp[l][r];
        if(x[r] - x[l] <= k){
            return 0;
        }
        else{
            //int a1 = (x[r] - x[l] -k) + solve(x, k , l+1 , r);
            int a4 =  (x[r] - x[l] -k) + solve(x, k , l , r-1);
            int a2 = (x[l]) + solve(x, k , l+1 , r);
           // int a3 = (x[r]) + solve(x, k , l , r-1);
            ans = min({ans , a2,a4});
        }
        //cout<<ans <<l<<r<<endl;
        return dp[l][r] = ans;
       
    }
};