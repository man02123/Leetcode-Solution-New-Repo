// Last updated: 09/12/2025, 23:21:15
class Solution {
public:
    int scoreOfString(string s) {
        int ans = 0;
        
        for(int i =1;i<s.size();i++){
            
            ans += abs(s[i]-s[i-1]);
        }
        return ans;
        
    }
};