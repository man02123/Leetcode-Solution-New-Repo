// Last updated: 08/12/2025, 17:34:49
class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();++i)
            mp[s[i]]++;
        string res;
        for(int it=0;it<order.size();++it)
        {
           char c=order[it];
               if(mp.find(c)!=mp.end())
            {
             int k=mp[c];
                while(k!=0)
                {
                    res.push_back(c);
                    k--;
                }
                 mp.erase(c);
            }
        
        }
    order.clear();
       
        for(auto it:mp)
        {int count=it.second;
            while(count!=0)
            {
                order.push_back(it.first);
                count--;
            }
            
        }
           
        sort(order.begin(),order.end());
        for(auto it:order)
            res.push_back(it);
        return res;
        
    }
};