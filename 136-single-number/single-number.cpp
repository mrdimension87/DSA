class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> cnt;
        int n=nums.size();
        for(int i=0; i<n; i++){
            cnt[nums[i]]++;
        }
        for(auto it: cnt){
            if(it.second == 1){
                return it.first;
            }
        }
        int s=-1;
        return s;
    }

};
