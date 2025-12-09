// Last updated: 09/12/2025, 23:21:49
class Solution {
public:
    int removeAlmostEqualCharacters(string w) {
        
        int n = w.size();
        int ans = 0;
        int c = 1;
        for(int i =1;i<n;i++){
            if(w[i]==w[i-1] || abs(w[i]-w[i-1])<=1){
                c++;
            }
            else{
                ans +=c/2;
                
                c = 1;
            }
        }
      ans+=c/2;
        
        return ans;
    }
};