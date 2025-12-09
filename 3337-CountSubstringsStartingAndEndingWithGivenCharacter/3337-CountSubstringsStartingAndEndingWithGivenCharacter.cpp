// Last updated: 09/12/2025, 23:21:24
class Solution {
public:
    long long countSubstrings(string s, char c) {
        
        long long ans = 0;
        int cnt = 0;
        for(int i =0;i<s.size();i++){
            
            if(s[i] == c){
                cnt++;
                
                ans += cnt;
            }

        }
        return ans;
    }
};