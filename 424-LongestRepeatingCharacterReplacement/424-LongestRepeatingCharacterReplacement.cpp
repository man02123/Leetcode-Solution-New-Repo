// Last updated: 08/12/2025, 17:36:58
class Solution {
public:
    int characterReplacement(string s, int k) {


        int ans = 0;
        int n = s.size();
        int left = 0;
        map<char,int> mp;
        int cmax = 0;
        char x = s[0];
        for (int i =0 ; i < n ; i++) {
            
            mp[s[i]]++;
            cmax = max(mp[s[i]] , cmax);

            if(i-left+1 - cmax <= k) {

                ans = max(ans ,i-left+1 );
                
                // cout<<cmax<<left<<i;
            }else {
               while(left <= i && (i-left+1 - cmax > k)){
                   
                   if(cmax == mp[left]){
                    cmax = cmax-1;
                    mp[s[left]]--;
                   }
                   else mp[s[left]]--;

                   left++;
               }
            }

        }
          return ans;
    }
};