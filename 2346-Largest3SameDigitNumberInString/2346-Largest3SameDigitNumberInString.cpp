// Last updated: 08/12/2025, 17:29:04
class Solution {
public:
    string largestGoodInteger(string num) {
        
        string ans = "0";
        
        for(int i =1;i+1<num.size();i++){
            if(num[i-1] == num[i] && num[i+1]==num[i]){
                   string x = num.substr(i-1,3);
                   ans = max(ans,x);
              }
        }
        if(ans =="0")return "";
        
        return ans;
    }
};