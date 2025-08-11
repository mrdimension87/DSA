class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        vector<int> ans;
        for(auto it: nums){
            if(it>0){
                pos.push_back(it);
            }else{
                neg.push_back(it);
            }
        }
        int n=(nums.size()/2);
        for(int i=0; i <n; i++){
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }
        return ans;

        
    }
};