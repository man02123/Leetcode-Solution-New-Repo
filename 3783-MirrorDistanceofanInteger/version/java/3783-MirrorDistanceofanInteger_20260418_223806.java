// Last updated: 18/04/2026, 22:38:06
1class Solution {
2    public int mirrorDistance(int n) {
3        return Math.abs(n-rev(n));
4
5    }
6    public int rev ( int n){
7        int cnt = 0;
8
9       List<Integer> li = new ArrayList<>();
10
11        while(n > 0){
12          int rem = n %10;
13          li.add(rem);
14          n = n/10;
15          cnt++;
16        }
17        int ans = 0;
18        cnt--;
19
20       for(int i =0 ;i< li.size();i++){
21         ans += Math.pow(10 , cnt) * li.get(i);
22         cnt--;
23       }
24       //System.out.println(ans) ;
25        return ans;
26    }
27}