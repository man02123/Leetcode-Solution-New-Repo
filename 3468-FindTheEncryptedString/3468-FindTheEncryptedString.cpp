// Last updated: 09/12/2025, 23:21:04
class Solution {
public:
    string getEncryptedString(string s, int k) {
        string t = s;
        int n = s.size();
        for(int i = 0;i< n;i++){
            t[i] = s[(i+k)%n];
        }
        return t;
    }
};