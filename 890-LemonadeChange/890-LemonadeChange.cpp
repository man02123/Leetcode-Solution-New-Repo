// Last updated: 08/12/2025, 17:34:35
class Solution {
public:
    bool lemonadeChange(vector<int>& b) {
        int fv=0,tn=0;
        for(int i=0;i<b.size();i++)
        {
            if(b[i]==5)fv++;
            else if(b[i]==10){tn++;fv--;}
            else
            {
                if(tn>0 && fv>0)
                {
                    
                    fv--;
                    tn--;
                 
                }
                
                else 
                    fv-=3;
                
            }
            
            if(fv<0)return false;
            
        }
        return true;
        
    }
};