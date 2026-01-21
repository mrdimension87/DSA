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

    unordered_map<int, Tweet*> userHead;
    unordered_map<int, unordered_set<int>> follows;
    int timer = 0;

public:
    Twitter() {}

    void postTweet(int userId, int tweetId) {
        Tweet* t = new Tweet(tweetId, timer++);
        t->next = userHead[userId];
        userHead[userId] = t;
    }

    vector<int> getNewsFeed(int userId) {
        vector<int> ans;
        follows[userId].insert(userId);

        // store current pointer of each followed user
        vector<Tweet*> curr;
        for (int f : follows[userId]) {
            if (userHead[f]) curr.push_back(userHead[f]);
        }

        // pick max 10 tweets manually
        for (int i = 0; i < 10; i++) {
            int best = -1;
            for (int j = 0; j < curr.size(); j++) {
                if (!curr[j]) continue;
                if (best == -1 || curr[j]->time > curr[best]->time) {
                    best = j;
                }
            }

            if (best == -1) break;

            ans.push_back(curr[best]->id);
            curr[best] = curr[best]->next; // move pointer forward
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
