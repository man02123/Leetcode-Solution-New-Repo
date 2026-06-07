// Last updated: 07/06/2026, 16:20:10
1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int tgt) {
4        int low=0 ,high=matrix.size()-1;
5         int n=matrix[0].size();
6        int mid;
7      while(low<=high)
8        {
9          mid=(low+high)/2;
10          if(tgt<matrix[mid][0])
11             high=mid-1;
12          else if(tgt>matrix[mid][n-1])
13            low=mid+1;
14          else if(tgt>=matrix[mid][0] && tgt<=matrix[mid][n-1])
15          break;
16        }
17        //cout<<mid; 
18        int l1=0,r1=matrix[mid].size()-1;
19        while(l1<=r1)
20        {
21            int mid1=(l1+r1)/2;
22            //cout<<mid1;
23            if(tgt==matrix[mid][mid1])return true;
24            else if(tgt>matrix[mid][mid1])l1=(mid1+1);
25            else if(tgt<matrix[mid][mid1])r1=mid1-1;
26        }
27     
28       
29        return false;
30        
31    }
32};