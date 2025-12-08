// Last updated: 08/12/2025, 17:30:15
class Solution {
public:
    string largestOddNumber(string num) {
        for(int i=num.size()-1;i>=0;i--)
        {
            
            if(num[i]%2!=0)
                return num.substr(0,i+1);
        }
        return "";
        
    }
};