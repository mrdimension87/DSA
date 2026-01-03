class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp(nums1.begin(),nums1.begin()+m);
        nums1=temp;
        vector<int> temp1(nums2.begin(),nums2.begin()+n);
        nums2=temp1;
        for(int i=0; i<n; i++){
            nums1.push_back(nums2[i]);
        }            
        sort(nums1.begin(),nums1.end());
    }
};