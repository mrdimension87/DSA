class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int min1=INT_MAX;
        int max1=INT_MIN;
        int min_index=-1;
        int max_index=-1;
        int n=nums.size();
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>max1){
                max1=nums[i];
                max_index=i;
            }
            if(nums[i]<min1){
                min1=nums[i];
                min_index=i;
            }
        }
        int mak=min(min_index,max_index);
        int kam=max(min_index,max_index);
        int ans=mak+1+n-kam;
        return min({kam+1,n-mak,ans});
    }
};