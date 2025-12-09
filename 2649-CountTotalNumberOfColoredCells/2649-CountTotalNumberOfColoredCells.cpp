// Last updated: 09/12/2025, 23:24:02
class Solution {
public:
    long long coloredCells(int n) {
       long long ans = 1;
       int newCells = 4 ;
       while(--n){
        ans += newCells;
        newCells += 4;
       }
       return ans;
    }
};