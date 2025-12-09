// Last updated: 09/12/2025, 23:22:59
class Solution {
public:
    string removeTrailingZeros(string num) {
        while(num.size()>0 && num.back()=='0')
            num.pop_back();
        
        return num;
        
    }
};