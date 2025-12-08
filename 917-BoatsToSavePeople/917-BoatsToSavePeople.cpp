// Last updated: 08/12/2025, 17:34:26
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int count=0;
        int i=0;
        int j=people.size()-1;
       
       // for(int i=0;i<(people.size());++i)
        while(i<j)
        { 
            if(people[i]+people[j]>limit)
            {
                ++count;
                j--;
            }
            else if(people[i]+people[j]<=limit)
            {
                count++;
                i++;
                j--;
            }
            
            if(i==j)
            {
              ++count;  
            }
         
           
        }
        return count;
        
    }
};