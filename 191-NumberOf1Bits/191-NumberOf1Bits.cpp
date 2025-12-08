// Last updated: 08/12/2025, 17:38:37
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt=0;
       
        while(n>0)
        {
          if((1&n)>0)
              cnt++;
            
           n=n>>1; 
        }
         
        return cnt;
    }
};