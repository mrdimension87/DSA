class Solution {
public:
    vector<int> generate_all(vector<int> nums){
        vector<int> mp;
        mp.push_back(0);
        for(int i : nums){
            int n= mp.size();
            for(int j=0; j<n; j++){
                mp.push_back(mp[j]+i);
            }
        }
        return mp;
    }

    //meet in the middle algorithm
    int minAbsDifference(vector<int>& nums, int goal) {
        int n= nums.size();
        vector<int> left_part(nums.begin(),nums.begin()+n/2);
        vector<int> right_part(nums.begin()+n/2,nums.end());
        vector<int> left_sum=generate_all(left_part);
        vector<int> right_sum=generate_all(right_part);
        sort(right_sum.begin(),right_sum.end());
        int k=left_sum.size();
        int mn=abs(goal);
        for(int i=0; i<k; i++){
            int target=goal-left_sum[i];
            int low=0;
            int high=right_sum.size()-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(right_sum[mid]==target){
                    return 0;
                }else if(right_sum[mid]>target){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }
            
            int col=INT_MAX;
            if(high<0){
                col=abs(right_sum[0]-target);
            }else if(low>=right_sum.size()){
                col=abs(right_sum[right_sum.size()-1]-target);
            }else{
                col=min(abs(right_sum[high]-target),abs(right_sum[low]-target));
            }
            mn=min(mn,col);
        }
        return mn;

    }
};