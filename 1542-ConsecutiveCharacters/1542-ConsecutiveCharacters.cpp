// Last updated: 08/12/2025, 17:32:02
class Solution {
public:
    int maxPower(string s) {
        int res=1;
        int n=s.size();
        int i=0,j=0;
       for(int i=0;i<n;i++)
        {
           j=i+1;
           
            if(s[i]==s[j])
            {
            while(j<s.size() && s[j-1]==s[j])
            {
                res=max(res,j-i+1);
               j++;
            }
            }

        }
       return res; 
    }
};