// Last updated: 13/10/2026, 00:43:34
1class Solution {
2public:
3    int largestRectangleArea(vector<int>& h) {
4        vector<int> lmin,rmin;
5        
6        stack<pair<int,int>> st;
7        st.push({INT_MAX,-1});
8        
9        for(int i=0;i<h.size();i++)
10        {
11            while(st.size()>0 && st.top().first>=h[i])
12                st.pop();
13            
14            if(st.size()==0)
15                lmin.push_back(-1);
16            else 
17                lmin.push_back(st.top().second);
18            
19            st.push({h[i],i});
20        }
21        
22        
23        stack<pair<int,int>> st1;
24        for(int i=h.size()-1;i>=0;i--)
25        {
26            while(st1.size()>0 && st1.top().first>=h[i])
27                st1.pop();
28            
29            if(st1.size()==0)
30                rmin.push_back(h.size());
31            else 
32                rmin.push_back(st1.top().second);
33            
34            st1.push({h[i],i});
35        }
36        reverse(rmin.begin(),rmin.end());
37        // for(auto it:rmin)
38        //     cout<<it;
39        
40        int res=0;
41        for(auto i=0;i<h.size();i++)
42        {
43            int temp=(rmin[i]-lmin[i]-1)*h[i];
44            res=max(res,temp);
45        }
46        
47        
48        
49        return res;
50    }
51};