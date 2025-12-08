// Last updated: 08/12/2025, 17:31:03
class Solution {

public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a,b;
        for(auto x:word1)
            a += x;
        for(auto x:word2)
            b += x;
        word1.clear();
        word2.clear();
       
        if(a.compare(b)==0)
            return 1;
        
        return 0;
    }
};
