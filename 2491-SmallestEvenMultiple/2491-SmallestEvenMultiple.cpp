// Last updated: 09/12/2025, 23:24:36
class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2==0)
            return n;
        return n*2;
        
    }
};