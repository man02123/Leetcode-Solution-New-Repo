// Last updated: 09/12/2025, 23:21:21
class Solution {
public:
    bool isSubstringPresent(string s) {
       string k = s;
        reverse(begin(k),end(k));
        
        for(int i =0;i<s.size();i++){
            for(int j=0;j<s.size();j++){
                
                
                
                if(s[i] == k[j]){
                   int len = 0;
                    int t = 0;
                    while(i+t<s.size() && j+t<s.size() &&len < 2 && s[i+t]==k[t+j]){
                        t++;
                        len++;
                        if(len >=2)return true;
                    }
                }
            }

        }
        return false;
    }
};