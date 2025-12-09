// Last updated: 09/12/2025, 23:22:08
class Solution {
public:
    int distributeCandies(int n, int lim) {
        
        return solve(n,lim,0);
    }
    int solve(int n , int lim,int div){
        //cout<<n<<div<<" ";
        if(n == 0 && div == 3)
            return 1;
        if(div > 3)return 0;
        
        int ans = 0;
        for(int i =0;i<=lim;i++){
            ans += solve(n-i,lim,div+1);
        }
        return ans;
    }
};