class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int ans=k;
        for(auto it : arr){
            if(it<=ans){
                ans++;
            }
            else{
                break;
            }
        }
        return ans;
    }
};