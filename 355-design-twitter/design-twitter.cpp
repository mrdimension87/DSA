class Twitter {
private:
    struct Tweet {
        int id;
        int time;
        Tweet* next;
        Tweet(int _id, int _time) {
            id = _id;
            time = _time;
            next = nullptr;
        }
    };

    unordered_map<int, Tweet*> userHead;            // user -> head tweet
    unordered_map<int, unordered_set<int>> follows; // follower -> followees
    int timer = 0;

public:
    Twitter() {}

    void postTweet(int userId, int tweetId) {
        Tweet* t = new Tweet(tweetId, timer++);
        t->next = userHead[userId];  // insert at head
        userHead[userId] = t;
    }

    vector<int> getNewsFeed(int userId) {
        vector<int> ans;
        follows[userId].insert(userId); // follow self

        // max heap by time
        auto cmp = [](Tweet* a, Tweet* b) {
            return a->time < b->time;
        };
        priority_queue<Tweet*, vector<Tweet*>, decltype(cmp)> pq(cmp);

        // add head tweet of each followed user
        for (int f : follows[userId]) {
            if (userHead[f]) pq.push(userHead[f]);
        }

        // take top 10 most recent
        while (!pq.empty() && ans.size() < 10) {
            Tweet* t = pq.top();
            pq.pop();
            ans.push_back(t->id);
            if (t->next) pq.push(t->next);
        }

        return ans;
    }

    void follow(int followerId, int followeeId) {
        follows[followerId].insert(followeeId);
    }

    void unfollow(int followerId, int followeeId) {
        if (followerId == followeeId) return;
        follows[followerId].erase(followeeId);
    }
};
