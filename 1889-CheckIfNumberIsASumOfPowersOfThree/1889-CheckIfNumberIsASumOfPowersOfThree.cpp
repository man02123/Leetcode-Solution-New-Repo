// Last updated: 08/12/2025, 17:30:40
class Solution {
public:
    bool checkPowersOfThree(int n) {
        
        while( (n > 3 )){
            
            if((n%3) == 2)return false;

            n = n /3 ;
        }
        if(n == 2) return false;
        return true;
    }
};