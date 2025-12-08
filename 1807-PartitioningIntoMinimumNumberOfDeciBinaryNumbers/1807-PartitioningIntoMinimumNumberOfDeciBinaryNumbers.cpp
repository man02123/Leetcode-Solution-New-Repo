// Last updated: 08/12/2025, 17:30:55
class Solution {
public:
    int minPartitions(string n) {
int res=0;
       for(auto it:n)
       {
          res=max(it-'0',res) ;
       }
        return res;
    }
};