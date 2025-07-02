class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=nums[0];
        int summ=nums[0];
        for(int i =0; i<nums.size();i++){
            if(i!=0){
                summ+=nums[i];
            }
            if(summ>maxi){
                maxi=summ;
            }
            if(summ<0){
                summ=0;
            }
        }
        return maxi;
    }
};