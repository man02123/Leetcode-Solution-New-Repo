// Last updated: 08/12/2025, 17:32:57
class Solution {
public:
    string makeFancyString(string s) {
        string ans;

        for(int i =0 ;i <s.size();i++ ) {

              if(i == 0 || i == s.size()-1) ans.push_back(s[i]);
              else{
                if(s[i-1] == s[i] && s[i]==s[i+1]) continue;
                ans.push_back(s[i]);
              }
        }
        return ans;
    }
};