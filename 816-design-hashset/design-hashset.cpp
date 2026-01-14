class MyHashSet {
private:
    int bucketCount;
    vector<list<int>> buckets;

    int hash(int key) {
        return key % bucketCount;
    }

public:
    MyHashSet() {
        bucketCount = 769;   // prime number to reduce collisions
        buckets.resize(bucketCount);
    }

    void add(int key) {
        int idx = hash(key);
        for (int x : buckets[idx]) {
            if (x == key)
                return; // already present
        }
        buckets[idx].push_back(key);
    }

    void remove(int key) {
        int idx = hash(key);
        buckets[idx].remove(key);
    }

    bool contains(int key) {
        int idx = hash(key);
        for (int x : buckets[idx]) {
            if (x == key)
                return true;
        }
        return false;
    }
};
