// Last updated: 08/12/2025, 17:34:04
class Solution {
public:
    int minDeletionSize(vector<string>& s) {
        int count=0;
       
            for(int j=0;j<s[0].size();++j)
                 for(int i=1;i<s.size();++i)
                 {
                     if(s[i][j]<s[i-1][j])
                     {
                         count++;
                         break;
                     }

                 }
               
        return count;
    }
};