// Last updated: 08/12/2025, 17:33:55
class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        stack<int> st;
        int res=0;
        st.push(0);
        for(int i=1;i<nums.size();i++)
        {
            if(st.size()>0 && nums[st.top()]>nums[i])
                st.push(i);    
        }
        for(int j=nums.size()-1;j>=0;j--)
        {
            if(st.size()>0 && nums[j]>=nums[st.top()])
            {
                while(st.size()>0 && nums[j]>=nums[st.top()] )
                {
                    res=max(res,j-st.top());
                    st.pop();
                }
            }    
        }
        return res;
        
    }
};