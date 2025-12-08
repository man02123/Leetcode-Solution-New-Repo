// Last updated: 08/12/2025, 17:37:09
class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k>=num.size())return "0";
        int n=num.size();
       vector<char> s;
        string res;
        
        for(int i=0;i<n;i++)
        {
            if(s.size()>0 && num[i]<s.back())
            {
                while(s.size()>0 && num[i]<s.back() && k>0)
                {
                    s.pop_back();
                    k--;
                }
                s.push_back(num[i]);
           }
            else 
                s.push_back(num[i]);
            
            
        }
         while(s.size()>0 && k>0)
         { s.pop_back();
           k--;
         }
        
        if(s.size()==0)return "0";
        
        
        
        bool flag=0;
        
       for(int i=0;i<s.size();i++)
       {
           if(flag==0 && s[i]>'0')
                  flag=1;    
           if(s[i]=='0' && flag==0)continue;
           res.push_back(s[i]);
       }
        
        for(int i=0;i<res.size();i++)
            if(res[i]>0)return res;
        
        
        return "0";
    
    
    }
};