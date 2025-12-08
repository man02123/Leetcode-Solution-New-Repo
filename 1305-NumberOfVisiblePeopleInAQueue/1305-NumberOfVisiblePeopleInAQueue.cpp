// Last updated: 08/12/2025, 17:32:56
class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& nums) {
        stack<int> st;
        vector<int>res;
        st.push(nums.back());
        res.push_back(0);
        
        for(int i=nums.size()-2;i>=0;i--)
        {
            int cnt=0;
            if(st.size()>0 && st.top()>nums[i])
            {
                res.push_back(1); 
                st.push(nums[i]);
            }
            else if(st.size()>0 && st.top()<nums[i])
            {
                cnt=0;
                while(st.size()>0 && st.top()<nums[i])
                {
                    st.pop();
                    cnt++;
                }
                if(st.size()>0 && st.top()>nums[i])cnt++;
                
                res.push_back(cnt);
                st.push(nums[i]);
            }  
        }
        reverse(res.begin(),res.end());
        //res[0]-=1;
        return res;
        
    }
};