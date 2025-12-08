// Last updated: 08/12/2025, 17:40:35
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       
        int n=nums.size();
        vector<int> A=nums;
        int k;
        if(n==1)
        {if(A[0]!=1)
            return 1;
         else 
             return 2;
            
        }
            for(int i = 0; i < n; ++ i)
            while(A[i] > 0 && A[i] <= n && A[A[i] - 1] != A[i])
                swap(A[i], A[A[i] - 1]);
   
       
        int i=0;
         for( i=0;i<n;++i)
       
           if(A[i]!=i+1)
           {
              return i+1;
           }
       return n+1;
        
       
    }
};