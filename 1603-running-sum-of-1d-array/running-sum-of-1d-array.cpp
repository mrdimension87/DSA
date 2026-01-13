class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> running;
        int s=0;
        for(int i=0; i<nums.size(); i++){
            s+=nums[i];
            running.push_back(s);
        }
        return running;
    }
};