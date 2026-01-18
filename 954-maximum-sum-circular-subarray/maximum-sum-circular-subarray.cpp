class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalSum = 0;

        // For normal Kadane (maximum subarray sum)
        int maxEnding = nums[0];
        int maxSoFar = nums[0];

        // For minimum subarray sum (reverse Kadane)
        int minEnding = nums[0];
        int minSoFar = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            totalSum += x;

            if (i > 0) {
                // Standard Kadane for maximum sum
                maxEnding = max(x, maxEnding + x);
                maxSoFar = max(maxSoFar, maxEnding);

                // Kadane variant for minimum sum
                minEnding = min(x, minEnding + x);
                minSoFar = min(minSoFar, minEnding);
            }
        }

        if (maxSoFar < 0)
            return maxSoFar;

        return max(maxSoFar, totalSum - minSoFar);
    }
};
