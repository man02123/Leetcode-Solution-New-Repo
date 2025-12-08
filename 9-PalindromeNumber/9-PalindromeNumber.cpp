// Last updated: 08/12/2025, 17:41:02
class Solution {
public:
    bool isPalindrome(int x) {
        
            int y=x;
        long long count=0;
       while(y)
        {   
            count=count*10+y%10;
            y=y/10;   
        }
        if ((count!=x) || (x<0) )
            return 0;
        return 1;
    }
    
};