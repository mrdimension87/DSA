class Solution {
public:
    pair<int,int> higher(vector<int>& nums){
        int high=INT_MIN;
        int mini=INT_MAX;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>=high){
                high=nums[i];
            }
            if(nums[i]<=mini){
                mini=nums[i];
            }
        }
        pair<int,int> mp={mini,high}; 
        return mp;
       }

    int smallestDivisor(vector<int>& nums, int threshold) {
        pair<int,int> mp=higher(nums);
        int n=nums.size();
        int high=mp.second, low=1;
        while(low<=high){
            int mid= (low+high)/2;
            int ans=0;
            for(int i=0; i<n; i++){
                ans+= ceil((double)nums[i]/mid);
            }
            if(ans<=threshold){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};