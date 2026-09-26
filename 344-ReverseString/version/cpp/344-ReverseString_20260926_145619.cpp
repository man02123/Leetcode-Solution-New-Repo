// Last updated: 26/09/2026, 14:56:19
1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4        
5        for(int i =0 ;i < s.size()/2;i++) {
6            swap(s[i] , s[s.size()-i-1]);
7        }
8    }
9};