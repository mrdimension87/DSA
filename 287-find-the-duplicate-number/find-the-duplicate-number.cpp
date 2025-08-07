class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        map<int,int> counter;
        for(auto it: nums){
            counter[it]++;
        }
        for(auto it: counter){
            if(it.second>1) return it.first;
        }
        return -1;
    }
};