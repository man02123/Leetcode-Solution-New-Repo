// Last updated: 08/12/2025, 17:30:47
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
             for(int i=0;i<nums.size()-1;i++)
             {
             if(nums[i]==nums[i+1])
             {
                 int temp=nums[i];
                 while(temp==nums[i])
                     {
                     nums[i]=-1;
                     i++;
                     }
                 i=i-2;
                 }
             }
             int sum=0;
             for(int i=0;i<nums.size();i++)
             {
                 if(nums[i]!=-1)
                     {
                     sum=sum+nums[i];
                     }
                 }
             return sum;


    }
};
    