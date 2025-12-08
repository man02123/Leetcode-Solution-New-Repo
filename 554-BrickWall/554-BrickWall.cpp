// Last updated: 08/12/2025, 17:36:07
class Solution {
public:
    int leastBricks(vector<vector<int>>& w) {
        unordered_map<int,int> mp;
        
         int n=w.size(); 
        for(int i=0;i<n;i++)
        {
            int gap=0;
            for(int j=0;j<w[i].size();j++)
            {   
                gap=gap+w[i][j];
                 mp[gap]++;
                
            } 
            mp[gap]=0;
        }
        //cout<<mp[1]<<mp[2]<<mp[3]<<mp[4]<<mp[5];
         int res=w.size();
        for(auto it:mp)
        {
            res=min(res,(n)-it.second);
        }
            
        
      return res;  
    }
};