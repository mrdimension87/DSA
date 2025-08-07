class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        map<int,int> counter;
        for(auto it: nums){
            counter[it]++;
            if(counter[it]>1){
                return it;
            }
        }
        return -1;
    }
};