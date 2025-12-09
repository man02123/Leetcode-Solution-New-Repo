// Last updated: 09/12/2025, 23:24:35
class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& p, vector<int>& t) {
        sort(begin(p) , end(p));
        sort(begin(t) , end(t));
        int ptr = 0;
        int ans = 0;
        for(int i = 0 ;i<t.size();i++) {
            if(ptr < p.size() && p[ptr] <= t[i]){
                ans++;
                ptr++;
            }
        }
        return ans;
    }
};