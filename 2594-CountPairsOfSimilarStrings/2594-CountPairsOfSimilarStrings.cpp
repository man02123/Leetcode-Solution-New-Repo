// Last updated: 09/12/2025, 23:24:21
class Solution {
public:
    int similarPairs(vector<string>& w) {
        int count=0;
       // unordered_map<char,int> mp1,mp2;
        for(int i=0;i<w.size();i++)
        {
            unordered_map<char,int> mp1;
            for(auto it:w[i])
            {
                if(mp1.find(it)==mp1.end())mp1[it]++;
            }
            
            for(int j=i+1;j<w.size();j++)
            {
                unordered_map<char,int> mp2;
                for(auto it:w[j])
                    if(mp2.find(it)==mp2.end())mp2[it]++;
                
                if(mp1==mp2)count++;
                
            }
        }
        return count;
        
    }
};