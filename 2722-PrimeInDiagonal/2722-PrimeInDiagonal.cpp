// Last updated: 09/12/2025, 23:23:37
class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int res=0;

        for(int i=0;i<nums.size();i++)
        {
            if(is_prime(nums[i][i])==true)
            {
                res=max(nums[i][i],res);
            }
            if(is_prime(nums[i][nums.size() - i - 1]))
                res=max(res,nums[i][nums.size() - i - 1]);
        }
        
        
//         for(int i=nums.size()-1;i>=0;i--)
//         {
//              if(is_prime(nums[i][c])==true)
//             {
//                 res=max(nums[i][c],res);
//             }
//             c++;
            
             
//         }
        return res;
        
    }
    
    bool is_prime(int k)
    {
        if(k<=1)
            return false;
        if(k==2)
            return true;
        
        for(int i=2;i<=sqrt(k);i++)
        {
            if(k%i==0)
                return false;
        }
        return true;
    }
};