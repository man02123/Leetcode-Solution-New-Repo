// Last updated: 08/12/2025, 17:40:18
class Solution {
public:
    int lengthOfLastWord(string s) {
        int end=s.size()-1;
        int start;
        while(end>=0 && s[end]==' ')
            end--;
        
        start=end;
        
        while(start>=0 && s[start]!=' ')
            start--;
        
        return end-start;
        
    }
};