// Last updated: 08/12/2025, 17:38:32
class Solution {
public:
    int countPrimes(int n) {
        vector<int> dp(n+1,1);
        if(n<=2)
            return 0;
        int count=0;
       
         for(int i=2;i*i<n;i++)
         { 
             if(dp[i]==1)
             {
               for(int j=i*i;j<n;j=j+i)
                dp[j]=0;
             }
            
         }
    for(int i=2;i<n;i++)
    {
        if(dp[i]==1)
            count++;
        
    }
        return count;
    }
};