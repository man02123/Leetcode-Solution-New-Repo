// Last updated: 08/12/2025, 17:39:22
class Solution {
public:
    int maxProfit(vector<int>& p) {

         int prev = p[0];

         int ans = INT_MIN;

         for(int i =1;i<p.size();i++){
            ans = max(ans , p[i]-prev);

            if(prev > p[i])prev = p[i];
         }  

         return ans< 0 ? 0 :ans;    
        
    }
};