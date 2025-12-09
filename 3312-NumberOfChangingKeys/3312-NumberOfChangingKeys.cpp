// Last updated: 09/12/2025, 23:21:28
class Solution {
public:
    int countKeyChanges(string s) {
        
        int ans = 0;
        
        for(int i =1;i<s.size();i++){
            
             
            if((s[i]-'A' == s[i-1]-'a' ) || (s[i]-'a' == s[i-1]-'A') || (s[i-1]==s[i]))continue;
            ans++;
            
        }
        return ans;
    }
};