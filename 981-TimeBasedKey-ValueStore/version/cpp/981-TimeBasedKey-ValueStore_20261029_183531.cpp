// Last updated: 29/10/2026, 18:35:31
1class TimeMap {
2public:
3   unordered_map<string ,  vector<pair<string,int> >> mp;
4   int prev;
5    TimeMap() {
6        prev = 0;
7    }
8    
9    void set(string key, string value, int t) {
10        prev = t;
11        mp[key].push_back({value ,  t});
12    }
13    
14    string get(string key, int t) {
15
16        if(mp.find(key) == mp.end()) return "";
17
18        auto &list = mp[key];
19        int low = 0 ,  hi = list.size();
20
21        if(t < list[0].second) return "";
22        
23        // we havw to find the first lowerBound of timestamp basically
24        int lb = INT_MAX;
25        while(low < hi) {
26            int mid = ( low + hi ) / 2;
27
28            if(list[mid].second < t ) {
29                low = mid+1;
30            }
31            else
32            hi = mid;
33        }
34      
35        if(low == 0) {
36            if(list[0].second <= t)
37            return list[0].first;
38            return "";
39        }
40        if(low == list.size()) {
41            return list[low-1].first;
42        }
43        // cout << t << " " << low << " " << list[low].second << " ";
44        if(list[low].second > t){
45            //cout << t << " " << low << " ";
46            return list[low-1].first;
47        }
48        return list[low].first;
49   
50    }
51};
52
53/**
54 * Your TimeMap object will be instantiated and called as such:
55 * TimeMap* obj = new TimeMap();
56 * obj->set(key,value,timestamp);
57 * string param_2 = obj->get(key,timestamp);
58 */