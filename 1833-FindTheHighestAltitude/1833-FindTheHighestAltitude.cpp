// Last updated: 08/12/2025, 17:30:49
class Solution {
public:
    int largestAltitude(vector<int>& g) {
        int curr = 0,ans = 0;
        
        for(auto it:g)
        {
            curr+=it;
            ans = max(ans,curr);

        }
        return ans;
    }
};