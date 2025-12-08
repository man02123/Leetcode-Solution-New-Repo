// Last updated: 08/12/2025, 17:29:38
class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> mp1,mp2;
        int count=0;
        for(auto it:words1)
        {
            mp1[it]++;
        }
        for(auto it:words2)
        {
            mp2[it]++;
        }
        for(auto it:words1)
        {
            if(mp1[it]==1 && mp2[it]==1)
                count++;
        }
        return count;
    }
};