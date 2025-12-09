// Last updated: 09/12/2025, 23:22:34
class Solution {
public:
    int furthestDistanceFromOrigin(string m) {
        
        int l=0, r=0,s=0;
        for(auto it: m)
        {
            if(it == 'L')
                l++;
            else if(it == 'R')
                r++;
            else s++;
            
        }
        return max(l+s-r , r+s-l);
        
        
    }
};