// Last updated: 08/12/2025, 17:35:14
class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char t) {
        auto it = upper_bound(l.begin(),l.end(),t);
        if(it==l.end())
            return l[0];
        return *it;
    }
};