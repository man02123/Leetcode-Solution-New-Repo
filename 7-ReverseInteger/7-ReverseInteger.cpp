// Last updated: 08/12/2025, 17:41:03
class Solution {
public:
    int reverse(int x) {
          long long count=0;
        
        while(x)
        {   
            count=count*10+x%10;
            x=x/10;   
        }
     if (count<INT_MIN || count>INT_MAX)
         return 0;
        return count;
        
    }
};