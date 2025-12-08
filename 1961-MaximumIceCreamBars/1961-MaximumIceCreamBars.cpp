// Last updated: 08/12/2025, 17:30:27
class Solution {
public:
    int maxIceCream(vector<int>& c, int co) {
        sort(c.begin(),c.end()) ;
            int res=0;
        for(auto it:c) {
            
        if(co>=it)  {co-=it;
                  res++;}
            

        }
        return res;
    }
};