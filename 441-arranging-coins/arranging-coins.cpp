

class Solution {
public:
    int arrangeCoins(int n) {
        __int128 low = 0;
        __int128 high = (__int128)1e10; // cast to __int128 to be safe

        while (low + 1 < high) {
            __int128 t = (high + low) / 2;
            __int128 sum = t * (t + 1) / 2;
            if (sum == n) {
                return (int)t;
            } else if (sum > n) {
                high = t;
            } else {
                low = t;
            }
        }

        return (int)low; // cast back to int to return
    }
};
