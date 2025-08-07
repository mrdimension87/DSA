class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index=nums.size();
        int left=0;
        int right=index-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        if(nums[(left+right)/2]>target){
            return (left+right)/2;
        }else{
            return ((left+right)/2)+1;
        }
    }
};