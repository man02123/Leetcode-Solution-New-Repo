// Last updated: 09/12/2025, 23:21:29
class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        
        int n =nums.size();
        vector<int> bit;
        
        for(int i=0;i<n;i++){
            
            int x = nums[i];
            string t = bitset<32>(x).to_string();
            int ans = 0;
            for(int i=0;i<32;i++){
                if(t[i] =='1')ans++;
            }
            bit.push_back(ans);
        }
        
        bool can = 1;
       
        for(int i =0;i<n;i++){
            for(int j =i+1;j<n;j++){
                if(bit[i] !=bit[j])break;
                
                if(  bit[i]==bit[j] && nums[i] > nums[j]){
                    swap(nums[i],nums[j]);
                }
            }
        }
        //for(auto it:bit)cout<<it;
        
        for(int i =1;i<n;i++){
            if(nums[i] < nums[i-1])can=0;
        }
        return can;
    }
};
//[75,34,30]//false