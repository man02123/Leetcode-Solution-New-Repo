// Last updated: 09/12/2025, 23:24:30
class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        
        int n = nums.size();
        if(n<=1)
            return 0;
       
        
        vector<pair<int,int>> temp ;
        for(int i = 0;i<n;i++)
            temp.push_back({nums[i],cost[i]});
        
        sort(temp.begin(),temp.end());
        long long tsum = 0;
        for(auto it:cost)
        tsum+=it;
        
        int mid;
        long long midsum = tsum/2;
        int i;
        for(i=0;i<n;i++){
            midsum-=temp[i].second;
            if(midsum<0)
                break;
        }
        mid = i;   //  if simple case hota to direct median nikal leta main pr yaha cost k hisab se median nikalan hai (to man lete h ki 3->cost[i]  to 3 cost[3] time hai ab jo median niklega wo cost aur nums ko 1 array man k niklega ye concept hai is ques ka)
        
            long long int ans1 =0LL,ans2 =0LL;
            
            for(int i=0;i<n;i++){
                ans1 += abs(1ll*nums[i]-temp[mid].first)*(1ll*cost[i]); // to avoid overflow always typeconvert your numbers to long long vvip line 
                
            }  
           
            return ans1;

        
    }
};