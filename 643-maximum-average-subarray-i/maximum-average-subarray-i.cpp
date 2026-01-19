class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0; i<k; i++){
            sum+=nums[i];
        }
        int max1=sum;

        int i=0;
        int j=k;
        
        while(j<nums.size()){
            sum-=nums[i];
            sum+=nums[j];
            max1=max(max1,sum);  
            i++;          
            j++;
        }
        double ans= (double)max1/(double)k;
        return ans;
    }
};