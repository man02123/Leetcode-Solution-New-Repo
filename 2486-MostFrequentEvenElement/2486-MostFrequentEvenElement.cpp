// Last updated: 09/12/2025, 23:24:38
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        vector<int> count(1000001,0);
        
        for(auto it:nums)
            count[it]++;
        vector<pair<int,int>> v;
        
        for(int i=0;i<count.size();i++)
        {
            if(count[i]!=0)
            {
                v.push_back({count[i],i});
            }
        }
       // sort(v.begin(),v.end());
       int res=-1,rescnt=0; 
        for(auto it:v)
        {
             if((it.second)%2!=0)continue;
            else 
            {
                   if(rescnt<it.first)
                   {
                       res=it.second;
                       rescnt=it.first;
                   }
                  else if(rescnt==it.first)
                    res=min(res,it.second);
            }
        }
        
      return res;  
    }
};