// Last updated: 08/12/2025, 17:34:20
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        if(fruits.size()<2)
            return fruits.size();
        
       unordered_map<int,int> mp;
     
        mp[fruits[0]]++;
        mp[fruits[1]]++;
        int res=2;
        int j=2;
        
        for(int i=0;i<fruits.size()-2;i++)
        {  
            while(j<fruits.size() && mp.size()<=2)
            {
                mp[fruits[j]]++;
                
                if(mp.size()<=2)
                res=max(res,j-i+1);
                j++;
               
               
            }
            mp[fruits[i]]--;
            
            if(mp[fruits[i]]==0)
                mp.erase(fruits[i]);  
        }
        
      
        return res;
    }
};