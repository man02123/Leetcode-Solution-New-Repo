// Last updated: 08/12/2025, 17:37:59
class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> dp(n+1,1);
        
        int p2=1;
        int p3=1;
        int p5=1;
        for(int i=2;i<=n;i++)
        {
            int c2=2*dp[p2];
            
            int c3=3*dp[p3];
            
            int c5=5*dp[p5];
           
            int res=min(c2,min(c3,c5));
             dp[i]=res;
           // cout<<res;
            if(res==c2)p2++;
            if(res==c3)p3++;
            if(res==c5)p5++;
            
        }
        
        
     return dp[n];
    }
};