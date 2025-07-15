class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int left = 1; 
        int right = position.back() - position.front(); 
        int ans = 0;

        auto canPlace = [&](int dist) {
            int cnt = 1, prev = position[0];
            for (int i = 1; i < position.size(); ++i) {
                if (position[i] - prev >= dist) {
                    cnt++;
                    prev = position[i];
                    if (cnt == m) return true;
                }
            }
            return false;
        };

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canPlace(mid)) {
                ans = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return ans;
    }
};