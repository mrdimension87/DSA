class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int prefix=1;
        int suff=1;
        int maxi=INT_MIN;
        for(int i=0; i<n; i++){
            if(prefix==0){
                prefix=1;
            }
            if(suff==0){
                suff=1;
            }
            prefix= prefix*nums[i];
            suff= suff*nums[n-i-1];
            maxi=max(maxi,max(prefix,suff));
            }
        return maxi;
    }
};