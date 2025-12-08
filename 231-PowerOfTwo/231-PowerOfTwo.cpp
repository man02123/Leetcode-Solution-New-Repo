// Last updated: 08/12/2025, 17:38:12
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;
        if((n & n-1)==0 )
            return true;
        return false;
        
        
    }
};