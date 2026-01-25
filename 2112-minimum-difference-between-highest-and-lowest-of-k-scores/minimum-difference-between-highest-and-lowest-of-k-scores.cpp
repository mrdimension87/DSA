class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int m=nums[nums.size()-1]-nums[0];
        for(int i=0; i<=nums.size()-k; i++){
            m=min(m,nums[i+k-1]-nums[i]);
        }
        return m;
    }
};