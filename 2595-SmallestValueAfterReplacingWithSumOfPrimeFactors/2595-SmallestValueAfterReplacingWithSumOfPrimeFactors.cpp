// Last updated: 09/12/2025, 23:24:20
class Solution {
public:
    int smallestValue(int n) {
     int x=pfactor(n);
        
        while(pfactor(x)!=x)
        {
            x=pfactor(x);   
        }
       
      return x;  
    }
    int pfactor(int n)
    {
        vector<int> v;
        int t=2;
        while(n>1)
        {
          while(n%t==0)
          {
              n=n/t;
              v.push_back(t);
          }
            t++;
        }
        return accumulate(v.begin(),v.end(),0);
    }
   
};