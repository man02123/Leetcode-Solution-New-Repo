// Last updated: 28/09/2026, 01:28:11
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        sort(begin(s) , end(s));
5        sort(begin(t) , end(t));
6        return s == t;
7        }
8};