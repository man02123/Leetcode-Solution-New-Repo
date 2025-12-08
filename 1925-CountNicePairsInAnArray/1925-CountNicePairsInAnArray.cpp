// Last updated: 08/12/2025, 17:30:34
class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        int mod = 1e9+7;
        
        map<int,int> mp;
        int ans = 0;
        for(int i =0;i<nums.size();i++){
            
            int num = nums[i];
            int rev =0;
            int c = 0;
            int x = num;
            int cnt = 0;
            
            while(x%10 != x){
                x = x/10;
                cnt++;
            }
            while(num % 10 !=num){
                rev += pow(10,cnt-c)*(num%10);
                c++;
                num = num/10;
            }
            rev+= pow(10,cnt-c)*num;
            int diff = nums[i]-rev;
           
            ans = (ans+ mp[diff])%mod;
            mp[diff]++;
        }
        
        return ans;
        return -1;
    }
};