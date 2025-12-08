// Last updated: 08/12/2025, 17:31:15
class Solution {
public:
    int maxDepth(string s) {
        
        int ans = 0;
        int cans = 0;
        for(int i =0 ;i < s.size() ; i++) {

            if(s[i] == '(') {
                cans++;
                ans = max(ans, cans);
            }
            else if(s[i] == ')')cans--;

        }
        return ans;
    }
};