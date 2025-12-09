// Last updated: 09/12/2025, 23:21:22
class Solution {
public:
    int maximumLengthSubstring(string s) {
        
        int ans = 0;
        
        for(int i=0;i<s.size();i++){
             
            for(int j =i+1;j<s.size();j++){
                
                map<char,int> mp;
                
                for(int k =i;k<=j;k++){
                    
                    mp[s[k]]++ ;
                }
                
                bool a = true;
                for(auto it:mp){
                if(it.second>2){
                    a = false;
                }      
            }
                if( a) ans = max(ans , j-i+1);
                
            }
            
        }
        return ans;
        
    }
};