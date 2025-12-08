// Last updated: 08/12/2025, 17:35:45
class Solution {
public:
    int minSteps(int n) {
        int t=2;
        int sum=0;
        while(n>1)
        {
            while(n%t==0)
            {
                n=n/t;
                sum+=t;
                //cout<<sum;
            }
            t++;
            
        }
        return sum;
            
    }
};