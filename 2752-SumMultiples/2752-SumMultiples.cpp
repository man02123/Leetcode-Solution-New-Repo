// Last updated: 09/12/2025, 23:23:28
class Solution {
public:
    int sumOfMultiples(int n) {
        long long res=0;
        
        for(int i=1;i<=n;i++)
            if(i%3==0 || i%5==0 || i%7==0)
                res+=i;
        return res;
    }
};