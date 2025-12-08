// Last updated: 08/12/2025, 17:41:07
class Solution {
public:
    int lengthOfLongestSubstring(string s) {

       map<char ,int> freq;
       int ans = 0;
       int n = s.size();
       int left = 0;
       if(n==0)return 0;

       for(int i =0 ; i < n ; i++) {

            freq[s[i]]++;

            while(freq[s[i]] > 1 && left <= i){
                freq[s[left]]--;
                left++;
             }
        ans = max(ans , i - left + 1 );

       } 
       return ans;

    }
};