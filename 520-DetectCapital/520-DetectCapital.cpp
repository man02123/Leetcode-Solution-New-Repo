// Last updated: 08/12/2025, 17:36:20
class Solution {
public:
    bool detectCapitalUse(string w) {
        int ind=-1;
        int count=0;
        for(int i=0;i<w.size();++i)
        {
            char temp=w[i];
            if(int(temp)>=65 && (int)temp<=90)
            {
                count++;
                ind=i;
            }
            
        }
        //cout<<count;
        if(count>1)
            return count==w.size();
        if(count==1)
            return ind==0;
        
        if(count==0)return true;
        return false;
        
    }
};