// Last updated: 08/12/2025, 17:36:53
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       vector<int> mp1(27,0);
        vector<int> mp2(27,0);
        
        for(auto it:p)
            mp1[it-'a']++;
        
//         for(auto it:mp1)
//             cout<<it;
//         cout<<endl;
    
        
        int k=p.size();
        
        vector<int> res;
        if(p.size()>s.size())
            return res;
    
         int i=0,j=0;
        
        while(j-i<k)
        {
           mp2[s[j]-'a']++;
            j++;
        } 
        //  for(auto it:mp2)
        //     cout<<it;
        // cout<<endl;
        
         if(mp2==mp1)
            res.push_back(i);
        
        for(int i=0;i<s.size()-k;i++)
        {
          
             mp2[s[i+k]-'a']++; 
             mp2[s[i]-'a']--;
            
            if(mp2==mp1)
            res.push_back(i+1);
        
           
        
        }
        
        return res;
    }
};