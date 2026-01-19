class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int i=1; i<nums.size()+1; i++){
            if(mp[nums[i-1]]!=0){
                if(i-mp[nums[i-1]]<=k)return true;
            }
            mp[nums[i-1]]=i;
        }
        return false;
    }
};