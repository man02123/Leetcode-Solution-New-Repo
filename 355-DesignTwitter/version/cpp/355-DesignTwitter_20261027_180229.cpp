// Last updated: 27/10/2026, 18:02:29
1class Twitter {
2public:
3    unordered_map<int , map<int,int>> userMap;
4    unordered_map<int , vector<pair<int,int>>> userTweet;
5    int cnt;
6    Twitter() {
7        cnt = 0;
8    }
9    
10    void postTweet(int userId, int tweetId) {
11        cnt++;
12        auto &mp = userTweet[userId];
13        mp.push_back({cnt , tweetId});
14    }
15    
16    vector<int> getNewsFeed(int userId) {
17        
18        int maxFeed = 10;
19        priority_queue<pair<int,int>> pq;
20        vector<int> ans;
21        auto mp = userMap[userId];
22
23        for(auto user : mp) {
24            auto tweets = userTweet[user.first];
25            for(auto tweet :  tweets) pq.push(tweet);
26        }
27
28        auto tweets = userTweet[userId];
29        for(auto tweet :  tweets) pq.push(tweet);
30
31        while(pq.size() > 0 && maxFeed > 0) {
32            ans.push_back(pq.top().second);
33            pq.pop();
34            maxFeed--;
35        }
36
37        //reverse(begin(ans) , end(ans));
38        return ans;
39
40    }
41    
42    void follow(int followerId, int followeeId) {
43        auto & mp = userMap[followerId];
44        mp[followeeId]++;
45        
46    }
47    
48    void unfollow(int followerId, int followeeId) {
49         auto &mp = userMap[followerId];
50        mp.erase(followeeId);
51    }
52};
53
54/**
55 * Your Twitter object will be instantiated and called as such:
56 * Twitter* obj = new Twitter();
57 * obj->postTweet(userId,tweetId);
58 * vector<int> param_2 = obj->getNewsFeed(userId);
59 * obj->follow(followerId,followeeId);
60 * obj->unfollow(followerId,followeeId);
61 */