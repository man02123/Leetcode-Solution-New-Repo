// Last updated: 08/12/2025, 17:36:03
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
      
        if(s1.size()>s2.size())
            return false;
        
        unordered_map<char,int> resmp,currmp;
        
        for(auto it:s1)
            resmp[it]++;
        
        int k=s1.size();
   
        for(int j=0;j<k;j++)
            currmp[s2[j]]++;
        
        if(resmp==currmp)
            return true;
        
         for(int i=0;i<s2.size()-k;i++)
         {
             currmp[s2[i+k]]++;
             currmp[s2[i]]--;
                 
                 if(currmp[s2[i]]==0)
                     currmp.erase(s2[i]);
             
                if(resmp==currmp)
                    return true;  
               
            
         }
     return false;
    }
    
};