// Last updated: 09/12/2025, 23:21:02
class Solution {
public:
    vector<int> minOperations(vector<int>& nums) {

        vector<int> ans;

        for(int i =0 ;i<nums.size();i++ ){

            ans.push_back(op(nums[i]));
        }
        return ans;
    
    }
    int op(int num) {
        
     int ans = INT_MAX;
     int cnt = 0;  
        
     for(int i = num ;i>=0 ;i--){
        cnt++;
         
        bool a = ispal(i); 
         if(a){
           ans = min(ans,num-i);
         }
         
         bool b = ispal(num+cnt); 
         if(b){
           ans = min(ans,cnt);
         }
         if(a || b) return ans;
         
     } 
   
        return ans;
    }
    
    bool ispal(int num){

         string s;
        while(num>0){  
            if(num%2){
                s = '1'+s;}
            else s = '0'+s;

            num/=2;
        }
        
        for(int i=0 ;i<s.size()/2 ;i++){
            if(s[i] != s[s.size()-i-1])return false;
        }
        return true;
    }
};