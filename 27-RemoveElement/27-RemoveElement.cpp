// Last updated: 08/12/2025, 17:40:46
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        int j=nums.size(); 
            for(int i=0;i<nums.size();++i)
             {
                if(nums[i]==val)
                {
               count++;
                }
                else
                    nums[i-count]=nums[i];
            }
                return(nums.size()-count);
            
        }
       
        

};