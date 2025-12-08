// Last updated: 08/12/2025, 17:34:21
class Solution {
public:
    int dp[10][2][2];
    int atMostNGivenDigitSet(vector<string>& dig, int n) {
        
        string num = to_string(n);
        memset(dp,-1,sizeof(dp));
        
        return solve(dig , num ,0 ,1,0);
        
    }
    int solve(vector<string>& dig , string &num , int ind, int tight,int st)
    {
   
        if(ind > num.size())return  0;
        if(ind == num.size()  && st==0)return 0;
        
        if(ind  == num.size())return 1;
        
        if(dp[ind][tight][st]!=-1)return dp[ind][tight][st];
        
        int ub = num[ind]-'0';
        
        if(tight == 0)
            ub = 9;
        
        int ans = 0;
        
        if(st==0)
            ans = solve(dig,num ,ind+1,0,0);
        
        if(tight == 0){
            
            for(int itr = 0;itr < dig.size();itr++){
               ans  = ans+solve(dig,num , ind+1 ,0,1); 
            }
            
        }
        else{
        
        for(int itr = 0;itr < dig.size();itr++){
            
            if(dig[itr][0]-'0' < ub)
               ans  = ans+solve(dig,num , ind+1 ,0,1); 

            else if(dig[itr][0]-'0' == ub)
                ans  = ans+solve(dig,num,ind+1,1,1);
              
        }
     }
        return dp[ind][tight][st] = ans;
        
        
    }
};