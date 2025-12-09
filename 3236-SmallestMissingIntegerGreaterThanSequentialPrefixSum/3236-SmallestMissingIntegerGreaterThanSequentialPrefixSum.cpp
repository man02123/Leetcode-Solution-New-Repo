// Last updated: 09/12/2025, 23:21:45
class Solution {
public:
    int missingInteger(vector<int>& nums) {
        map<int,int> mp;
        for(auto it:nums)mp[it]++;
        
        int n = nums.size();
        
        
        int sum = nums[0];
        
       
        for(int i =1;i<n;i++){
            
            if(nums[i] == nums[i-1]+1){
                
               sum+=nums[i];
            }
            else
                break;
        }
        
        while(mp.find(sum) !=mp.end()){
            sum++;
        }
        return sum;
        
    }
};