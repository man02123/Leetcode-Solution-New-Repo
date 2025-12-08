// Last updated: 08/12/2025, 17:37:52
class Solution {
public:
    bool wordPattern(string p, string s) {
        unordered_map<char,string> mp1;
        unordered_map<string,char>mp2;
        vector<string> v;
        int end=0;
        while(end<s.size())
        {
            string temp;
         while(end<s.size() && s[end]!=' ')
         {
             temp.push_back(s[end]);
             end++;
         }
            end=end+1;
            
            if(temp.size()>0)
            v.push_back(temp);  
        }
        
        if(v.size()!=p.size())return false;
        int k=0;
        
       for(int i=0;i<p.size();i++)
       {
           if(mp1.find(p[i])==mp1.end() && mp2.find(v[i])==mp2.end())
           {
               mp1[p[i]]=v[i];
               mp2[v[i]]=p[i];    
           }
           else if(mp1.find(p[i])==mp1.end() && mp2.find(v[i])!=mp2.end())
           {
               return false;
           }
           else if(mp1.find(p[i])!=mp1.end() && mp2.find(v[i])!=mp2.end())
           {
               if(mp2[v[i]]!=p[i])return false;
           }
           else if(mp1.find(p[i])!=mp1.end() && mp2.find(v[i])==mp2.end())return false;
           
       }
        

     return true;  
    }
};