// Last updated: 08/12/2025, 17:34:17
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i,j;
        i=0;
        j=s.size()-1;
        
        while(i<j)
        {
            while(i<j && !isalpha(s[i])==1 )
                ++i;
            while(i<j && !isalpha(s[j])==1)
                j--;
            swap(s[i],s[j]);
            i++;
            j--;
        }
        
        return s;
    }
};