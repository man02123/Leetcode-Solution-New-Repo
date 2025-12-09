// Last updated: 09/12/2025, 23:21:25
class Solution {
public:
   
    int minOperations(int k) {
        if(k ==1)return 0;
        
 
        int ans = k;
       
        for(int i =1;i<=k;i++){
            
           int t = ceil(float(k-i)/i);
            
            t += (i-1);
            
           
            
           //int t  =  (((double)k/(double)i)+i-2);
           ans = min(ans , t);
        }
       return ans;
    }
  
};