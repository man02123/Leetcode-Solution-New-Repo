// Last updated: 08/12/2025, 17:40:38
class Solution {
public:
    string countAndSay(int n) {
        if(n==1)return "1";
       // if(n==2)return "11";
        
      int k=1;
        string res="1";
        
        
        
        while(n!=1)
        {
            string temp="";
            
            for(int i=0;i<res.size();i++)
            {
                int count=1;
                while(i<res.size()-1 && (res[i]==res[i+1]))
                {
                    count++;
                    i++;
                }
                temp+=to_string(count)+res[i];
            }
            res=temp;
            n--;
               
        }
        return res;
        
    }
};