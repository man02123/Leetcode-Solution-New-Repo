// Last updated: 08/12/2025, 17:30:12
class Solution {
public:
    int countTriples(int n) {
        
        int ans = 0;

        for(int i =1 ;i<= n ; i++){

            for(int j =0 ;j<= n ; j++){

                for(int k = 0 ; k<= n ;k++){
                    if(i !=j && j!=k && k!=i){
                        if(pow(i ,2) + pow(j,2) == pow(k,2))ans++;
                    }
                }
            }
        }
        return ans;
    }
};