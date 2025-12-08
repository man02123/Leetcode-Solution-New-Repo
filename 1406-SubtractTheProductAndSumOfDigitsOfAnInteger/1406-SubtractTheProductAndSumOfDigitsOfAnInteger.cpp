// Last updated: 08/12/2025, 17:32:35
class Solution {
public:
    int subtractProductAndSum(int n) {
        string s=to_string(n);
        int res=1;
        int sum=0;
        for(auto it:s)
        {
          res= res*(it-'0'); 
        sum=sum+(it-'0');
        }
        res=res-sum;
          return res;
       
        
        
    }
};