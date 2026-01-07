class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        int k = primes.size();

        vector<long long> ugly(n);
        ugly[0] = 1;

        vector<int> idx(k, 0);   // pointers for each prime

        for (int i = 1; i < n; i++) {
            long long nextUgly = LLONG_MAX;

            // find next minimum candidate
            for (int j = 0; j < k; j++) {
                nextUgly = min(nextUgly, ugly[idx[j]] * primes[j]);
            }

            ugly[i] = nextUgly;

            // move all pointers that produced nextUgly
            for (int j = 0; j < k; j++) {
                if (ugly[idx[j]] * primes[j] == nextUgly) {
                    idx[j]++;
                }
            }
        }

        return ugly[n - 1];
    }
};
