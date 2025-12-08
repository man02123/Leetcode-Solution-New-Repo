// Last updated: 08/12/2025, 17:37:15
class Solution {
public:
    char findTheDifference(string s, string t) {
        char sum1=0,sum2=0;
for(int i=0;i<s.size();++i)
    sum1=sum1+(s[i]);
 for(int i=0;i<t.size();++i)
    sum2=sum2+(t[i]);  
        char a=(sum2-sum1);
        return a;
       
     
    
    }
};