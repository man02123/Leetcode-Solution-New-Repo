// Last updated: 09/12/2025, 23:23:51
class Solution {
public:
    int isWinner(vector<int>& p1, vector<int>& p2) {
        int s1=0,s2=0;
        bool f1=false,f2=false;
        int cnt=0;
        s1=calc(p1);
        s2=calc(p2);
       // cout<<s1<<s2;
        
        if(s1>s2)
            return 1;
        else if(s1 == s2)
            return 0;
        
        return 2;
        
    }
    
    int calc(vector<int> &p)
    {
        int sum=0;
        bool flag=false;
        int cnt=0;
        
        for(int i=0;i<p.size();i++)
        {
            if(flag==true)
            {
                sum+=2*p[i];
                if(p[i]==10)
                {
                    flag=true;
                    cnt=2;
                }
                else
                {
                    cnt--;
                    if(cnt==0)
                        flag=false;
                }
            }
            else if(flag==false)
            {
                if(cnt>0)
                {
                    sum+=2*p[i];
                    cnt--;
                    if(p[i]==10)
                    {
                        flag=true;
                        cnt=2;
                    }
                }
                else if(cnt==0)
                {
                    sum+=p[i];
                    if(p[i]==10)
                    {
                        flag=true;
                        cnt=2;
                    }
                    
                }
            }
            
        }
        return sum;
    }
};