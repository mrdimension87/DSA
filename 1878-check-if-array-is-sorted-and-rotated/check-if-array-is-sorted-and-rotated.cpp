class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();
        if(nums[0]-nums[n-1]<0){
            cnt++;
        }
        for(int i=1; i<n; i++){
           if(nums[i]-nums[i-1]<0){
                cnt++;
           }
        }
        if(cnt<=1){
            return true;
        }else{
            return false;
        }
    }
};