// Last updated: 08/12/2025, 17:35:03
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) 
    {
        set<char> s={jewels.begin(),jewels.end()};
        int count=0;
        for(auto it=s.begin();it!=s.end();it++)
        {
         for(auto i:stones)
             if((*it)==i)
                 count++;
        }
        return count;
           
     
    }
};