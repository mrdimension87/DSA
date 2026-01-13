class Solution {
public:
    int summer(vector<int>& arr){
        int sum=0;
        for(auto it : arr){
            sum+=it;
        }
        return sum;
    }
    int pivotIndex(vector<int>& nums) {
        int sum1=summer(nums);
        int n=nums.size();
        int sum2=0;
        int pointer=0;
        for(int i=0; i<n; i++){
            if(sum1-nums[i]==2*sum2){
                return i;
                break;
            }
            sum2+=nums[i];
        }
        return -1;
        
    }
};