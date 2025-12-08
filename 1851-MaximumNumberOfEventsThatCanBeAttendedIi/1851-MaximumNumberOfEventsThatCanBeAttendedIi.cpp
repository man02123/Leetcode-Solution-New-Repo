// Last updated: 08/12/2025, 17:30:46

        
class Solution {
    int f(int ind,int k,vector<vector<int>>&events,vector<int>&dip,vector<vector<int>>&dp){
        if(k == 0)return 0;
        if(ind == events.size())return 0;

        if(dp[ind][k]!=-1)return dp[ind][k];
        int nottake = f(ind+1,k,events,dip,dp);
        int take = -1e9;
        if(k>0){
            take = events[ind][2];
            int findind = upper_bound(dip.begin(),dip.end(),events[ind][1])-dip.begin();
            if(findind != dip.size()){
                take += f(findind,k-1,events,dip,dp);
            }
        }
        return dp[ind][k] = max(nottake,take);
    }
public:
    int maxValue(vector<vector<int>>& events, int k) {
        int n = events.size();
        sort(events.begin(),events.end());
        vector<int> dip;
        for(int i=0;i<events.size();i++){
            dip.push_back(events[i][0]);
        }
        vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
        return f(0,k,events,dip,dp);
    }
};