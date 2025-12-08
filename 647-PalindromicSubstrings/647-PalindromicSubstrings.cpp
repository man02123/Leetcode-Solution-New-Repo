// Last updated: 08/12/2025, 17:35:46
class Solution {

public:
    
 int dp[1001];
    int countSubstrings(string s) {
        int n=s.size();
        
       for(int i=0;i<=n;i++)
           dp[i]=0;
        
       int x= solve(s);
    
    return x;
    }
    int solve(string &s)
    {
        int n=s.size();
        dp[n]=s.size();
        int count=0;
        for(int j=n-1;j>=0;j--)
        {
            count=dp[j+1];
            for(int i=0;i<j;i++)
            {
                if(ispal(s,i,j)==true)
                    count++;
            }
            dp[j]=count;
        }
        return dp[0];
    }
  
    bool ispal(string &s,int i,int j)
    {
        while(i<=j)
        {
            if(s[i]!=s[j])
             return false; 
            
            i++;j--;    
            
        }
      return true;  
    }
};