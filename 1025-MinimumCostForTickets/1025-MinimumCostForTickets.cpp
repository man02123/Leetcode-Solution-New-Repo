// Last updated: 08/12/2025, 17:33:47
class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
         
       
        
      vector<int> dp(367,-1);
        return solve(days,costs,0,dp);
    }
    int solve(vector<int>& days,vector<int>& costs,int index, vector<int> &dp)
    {
        int n=days.size();
        
        if(index>=n)
            return 0;
        
        if(dp[index]!=-1)
            return dp[index];
        
        int x=costs[0]+solve(days,costs,index+1,dp);
        
       int i=0;
      
        for(i=index;i<n && days[i]<days[index]+7;i++);
         int y=costs[1]+solve(days,costs,i,dp);
          
          int j; 
          for(j=index;j<n && days[j]<days[index]+30;j++);
        int z=costs[2]+solve(days,costs,j,dp);
        
        return dp[index]=min(x,min(y,z));
       
        
        
    }
};