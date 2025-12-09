// Last updated: 09/12/2025, 23:24:37
class Solution {
public:
    int partitionString(string s) {
        int count=0;
        unordered_map<char,int> mp;
        
        int j;
        for(int i=0;i<s.size();i++)
        {
            j=i;
           while(j<s.size() && mp[s[j]]==0)
           {
              mp[s[j]]++;
               i=j;
               j++;
               
           }
            mp.clear();
            count++;
              
        }
        
        return count;
    }
};