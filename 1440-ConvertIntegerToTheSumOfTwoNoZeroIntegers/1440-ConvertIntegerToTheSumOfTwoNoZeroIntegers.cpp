// Last updated: 08/12/2025, 17:32:27
class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
      for(int i =1 ;i<n;i++) {
        int j = n-i;
        if(check(i) && check(j) ) return{i,j};
      }
      return {1,1};
    }
    

    bool check(int i) {

        while(i > 0) {
            int x = i%10;
            if(!x) return  false;
            i = i/10;
        }
        return 1;
    }
};