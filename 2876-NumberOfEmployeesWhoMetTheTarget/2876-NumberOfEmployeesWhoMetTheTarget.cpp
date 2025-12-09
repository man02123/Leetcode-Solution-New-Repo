// Last updated: 09/12/2025, 23:22:46
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& h, int t) {
        int ans = 0;
        
        for(auto it:h){
            if(it>=t)ans++;
        }
       return ans; 
    }
};