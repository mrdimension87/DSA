class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int low = 0;
        int high = nums.size()-1;
        int mini=INT_MIN;
        while(low<high){
            if(nums[low]+nums[high]>mini){
                mini=nums[low]+nums[high];
            }
            high--;
            low++;
        }
        return mini;
    }
};