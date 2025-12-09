// Last updated: 09/12/2025, 23:21:26
class Solution {
public:
    string triangleType(vector<int>& nums) {
        set<int> st;
        for(auto it:nums)st.insert(it);
        
        int a = nums[0],b=nums[1],c=nums[2];
        bool can = 0;
        if(a+b <= c)can =1;
        if(b+c <= a)can = 1;
        if(c+a <= b)can = 1;
        if(can==0){
        if(st.size()==1)return "equilateral";
            else if(st.size()==2)
                return "isosceles";
                else return "scalene";
        }
        else
            return "none";
    }
};