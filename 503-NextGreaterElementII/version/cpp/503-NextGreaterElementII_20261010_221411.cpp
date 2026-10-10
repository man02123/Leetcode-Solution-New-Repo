// Last updated: 10/10/2026, 22:14:11
1class Solution {
2public:
3    vector<int> nextGreaterElements(vector<int>& nums) {
4          stack<int> s;
5         for(int it=nums.size()-1;it>=0;it--)
6             s.push(nums[it]);
7       
8        vector<int> v2;
9        for(int it=nums.size()-1;it>=0;it--)
10        {
11            if(s.size()==0)
12            {
13                v2.push_back(-1);
14               
15            }
16            else if(s.size()>0 && s.top()>nums[it])
17            {
18                v2.push_back(s.top());
19             
20           }
21            if(s.size()>0 && s.top()<=nums[it])
22            {
23                while(s.size()>0 && s.top()<=nums[it])
24                {
25                     s.pop();
26                }
27                
28                //delete
29                if(s.size()==0)
30                    v2.push_back(-1);
31                // after deleteion
32                 else
33                v2.push_back(s.top());
34                    
35             }
36              s.push(nums[it]);
37           
38        }
39        reverse(v2.begin(),v2.end());
40        return v2;
41        
42    }
43};