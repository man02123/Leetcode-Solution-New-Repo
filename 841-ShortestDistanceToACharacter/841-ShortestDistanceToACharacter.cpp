// Last updated: 08/12/2025, 17:34:41
class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> res;
        char temp=c;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==temp)res.push_back(0);
            else
            {
                int right=i;
                int left=i;
                while(right<s.size() && s[right]!=temp)right++;
                while(left>=0 && s[left]!=temp )left--;
                
                if(left<0)res.push_back(abs(i-right));
                
                else if(right>=s.size())res.push_back(abs(i-left));
                else
                {
                    int x=abs(i-right);
                    int y=abs(i-left);
                    res.push_back(min(x,y));
                }
              
            }    
        }
        return res;
    }
};