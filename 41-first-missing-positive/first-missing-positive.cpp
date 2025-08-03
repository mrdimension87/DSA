class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mpp;
        int counter=0;
        int max=0;
        for(int i=0; i<n; i++){
            if(nums[i]>0){
                mpp[nums[i]]++;
                counter++;
                if(nums[i]>max){
                    max=nums[i];
                }
            }
        }
        int i=1;
        while(counter--){
            if(mpp.count(i)){
                i++;
                continue;
            }else{
                return i;
            }
        }
        return max+1;

    }
};