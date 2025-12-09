// Last updated: 09/12/2025, 23:22:37
class Solution {
public:
    int countSymmetricIntegers(int l, int h) {
         
         int ans = 0;

         for (int i = l;i<= h ;i++){

          string x = to_string(i);
          //cout<<x;
        
          if((x.length()%2) != 0)continue;
           int s2 = 0;
           int s1 = 0;
          for(int j =0 ;j<x.size()/2 ; j++){
            
              s1 += x[j]-'0';             
              s2 += x[x.size()-1-j]-'0';
         }
         if(s1 == s2)
            ans++;
        
    }
    return ans;
    }
};