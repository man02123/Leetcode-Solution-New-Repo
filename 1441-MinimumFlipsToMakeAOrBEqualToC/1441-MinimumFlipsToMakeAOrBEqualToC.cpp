// Last updated: 08/12/2025, 17:32:26
class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans = 0;
        
        for(int i = 0;i <32 ;i++)
        {
            bool ai = false;
            bool bi = false;
            bool ci = false;
            
            if( (a &(1<<i))>0 )ai=true;
            if(( b &(1<<i))>0)bi=true;
            if( (c &(1<<i))>0)ci=true;
            
            if(ci == true)
            {
                if(ai==true || bi==true)continue;
                else
                    ans++;
            }
            else if(ci == false)
            {
                if(ai==true)
                    ans++;
                if(bi==true)
                    ans++;
            }
        }
        return ans;
        
    }
};