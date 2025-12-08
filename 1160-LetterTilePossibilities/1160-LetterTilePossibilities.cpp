// Last updated: 08/12/2025, 17:33:15
class Solution {
public:
    int count;
    int n;
    int numTilePossibilities(string tiles) {
        unordered_map<char,int> mp;
        n=tiles.size();
        count=0;
        for(auto it:tiles)mp[it]++;
       string temp;
        permute(temp,mp);
        return count;
    }
    void permute(string &s,unordered_map<char,int> &mp)
    {
        if (s.size()==n)
            return;
        
        for(auto it:mp)
        { 
            //cout<<it.first;
            if(mp[it.first]>0)
            {
             s.push_back(it.first);
             mp[it.first]--;
             count++;
             permute(s,mp);
             s.pop_back();
             mp[it.first]++;
            }
        }
       
    }
};