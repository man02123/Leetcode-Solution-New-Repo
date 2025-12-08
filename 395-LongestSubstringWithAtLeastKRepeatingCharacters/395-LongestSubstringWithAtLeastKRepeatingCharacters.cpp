// Last updated: 08/12/2025, 17:37:11
class Solution {
public:
    int longestSubstring(string s, int k) {
     //invalid char
        
        return solve(s,k,0,s.size());
        
    }
    int solve(string s,int k,int start,int end)
    {
        if(end-start<k)return 0;
        
           unordered_map<char,int> mp;
           for(int i=start;i<end;i++)
            mp[s[i]]++;
     
        
        int j;
        for(int i=start;i<end;i++)
        {  
            if(mp[s[i]]<k)
            {   j=i+1;
               while(j<end && mp[s[j]]<k)j++;
             
             return max(solve(s,k,start,i),solve(s,k,j,end));
                
            }
          
        }
                return end-start;
    
    }
};