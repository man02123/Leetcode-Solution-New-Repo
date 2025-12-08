// Last updated: 08/12/2025, 17:29:41
class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int temp=INT_MAX;
        //int res=INT_MAX;
        
        for(int i=0;i<nums.size();++i)
        {
            int x=i%10;
            
            if(x==nums[i])
                temp=min(temp,i);
        }
        if(temp==INT_MAX)
            return -1;
        return temp;
    }
};