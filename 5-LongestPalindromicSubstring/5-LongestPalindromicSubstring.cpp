// Last updated: 08/12/2025, 17:41:04
class Solution {
public:
    string longestPalindrome(string s) {
       int n = s.size();
       int ans =1;
       string a ;
       a.push_back(s[0]);

       for(int i =0 ; i< n ;i++){

            int left = i , right  = i;
            bool flag = true;

            while(flag) { // check for odd len

                while(left >= 0 && right < n && (s[left] == s[right] )) {

                    if(right-left+1 > a.size())
                       a = s.substr(left,right-left+1);
                       //cout<<'a'<<i <<" ";

                     left--; right++;
                     
                }
             
                flag = false;
            }

            left = i+1 , right =i; // check for even len
            flag = true;

            while(flag) {

                while(left >= 0 && right < n && (s[left] == s[right] )) {

                    if(right-left+1 > a.size())
                       a = s.substr(left,right-left+1);
                        // cout<<'b'<<i;
                     left--; right++;
                     
                }

                flag = false;
            }

       }

       return a;
    }
    
};