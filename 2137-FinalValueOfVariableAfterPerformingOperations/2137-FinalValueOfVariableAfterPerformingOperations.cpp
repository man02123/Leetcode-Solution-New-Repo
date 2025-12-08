// Last updated: 08/12/2025, 17:29:47
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res=0;
        for(int i=0;i<operations.size();i++)
        {
            
           (operations[i][1]=='+')?++res:--res;
           
            
          }
            
          return res;   
       
    }
};