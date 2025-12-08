// Last updated: 08/12/2025, 17:40:09
class Solution {
public:
    int mySqrt(int n) {
             int l = 1,r = n;
    int ans = n;
    while (l <= r) {
      int mid = l+(r-l)/2;

      if ((n%mid) == 0 && (n/mid)==mid) {
          return mid;
      } else if (n/mid < mid) {
          
          r = mid-1;
      }
      else{
          ans = mid;
          l = mid+1;
      }
    }
       return ans;   
    }
};