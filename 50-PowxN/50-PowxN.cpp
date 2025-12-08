// Last updated: 08/12/2025, 17:40:26
class Solution {
public:
    double myPow(double x, int n) {
        if(x==1) return 1;
        if(n==0) return 1;
                                   if(n<0) 
                                       {
                                      return (1/x) *myPow(1/x,- (n+1)) ;
                                                                }
 if(x>0 && n==INT_MIN+2)
     return 0;
                                   return (n%2)==0 ? myPow(x*x, n/2) :x*myPow(x*x, n/2) ;
        
    }
};