// Last updated: 08/12/2025, 17:29:02
class Solution {
public:
    int minimumRounds(vector<int>& t) {
        unordered_map<int,int> mp;
        sort(t.begin(),t.end());
        
        for(auto it:t)mp[it]++;
        int res=0;
        for(auto it:mp)
        {
          if(it.second==1)return -1;
        
            else if(it.second%3==0)res+=it.second/3;
            else
                res+=it.second/3+1;
                
        }   
   return res;
        
        
    }

};