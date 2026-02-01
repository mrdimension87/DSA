class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int sum =0;
        sum+= nums[0];
        int ind = nums[0];
        sort(nums.begin(), nums.end());
        int two = 2;
        int sum_cnt = 0;
        int i =0;
        while(two){
            if(nums[i]==ind && sum_cnt == 0){
                i++;
                sum_cnt ++;
            }else{
                sum+=nums[i];
                two--;
                i++;
            }
        }
        return sum;
    }
};