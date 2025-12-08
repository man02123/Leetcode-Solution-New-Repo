// Last updated: 08/12/2025, 17:32:21
class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='6')continue;
                 
            s[i]='9';
            break;
           
        }
        int res=stoi(s);
        return res;
    }
};