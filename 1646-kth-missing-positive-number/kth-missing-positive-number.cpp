class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low=0,high=arr.size()-1;
        if(arr[low]>k){
            return k;
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]-(mid+1)>=k){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return k+high+1;
    }
};