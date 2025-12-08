// Last updated: 08/12/2025, 17:36:27
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
          stack<int> s;
         for(int it=nums.size()-1;it>=0;it--)
             s.push(nums[it]);
       
        vector<int> v2;
        for(int it=nums.size()-1;it>=0;it--)
        {
            if(s.size()==0)
            {
                v2.push_back(-1);
               
            }
            else if(s.size()>0 && s.top()>nums[it])
            {
                v2.push_back(s.top());
             
           }
            if(s.size()>0 && s.top()<=nums[it])
            {
                while(s.size()>0 && s.top()<=nums[it])
                {
                     s.pop();
                }
                
                //delete
                if(s.size()==0)
                    v2.push_back(-1);
                // after deleteion
                 else
                v2.push_back(s.top());
                    
             }
              s.push(nums[it]);
           
        }
        reverse(v2.begin(),v2.end());
        return v2;
        
    }
};