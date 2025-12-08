// Last updated: 08/12/2025, 17:38:43
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int ele,count=0;
        
        for(int i=0;i<size(nums);i++)
        {
            if(count==0)
            {
                ele=nums[i];
                count++;
            }
            else if(count>0 && ele==nums[i])count++;
            else 
                count--;
            
            
            
        }
        return ele;
        
    }
};