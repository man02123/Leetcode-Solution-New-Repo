// Last updated: 09/12/2025, 23:21:56
class Solution {
public:
    int countTestedDevices(vector<int>& bp) {
        
        int ans = 0;
        int cdec = 0;
        for(int i =0;i<bp.size();i++){
            if(bp[i]-cdec > 0){
                ans++;
                cdec++;
            }
        }
        return ans;
    }
};