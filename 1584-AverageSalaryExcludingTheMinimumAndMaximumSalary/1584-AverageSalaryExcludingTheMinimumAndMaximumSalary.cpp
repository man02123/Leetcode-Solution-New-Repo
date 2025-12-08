// Last updated: 08/12/2025, 17:31:49
class Solution {
public:
    double average(vector<int>& s) {
        double mx=INT_MIN,mn = INT_MAX;
        double sum = 0;
        for(auto it:s)
        {
            sum += it;
            mx = max((double)it,mx);
            mn = min((double)it,mn);
        }
       return ( sum-mx-mn)/(s.size()-2);
    }
};