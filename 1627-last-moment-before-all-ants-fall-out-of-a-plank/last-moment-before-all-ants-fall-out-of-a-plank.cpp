class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int k= right.size();
        vector<int> arr;
        for(int i=0; i<k; i++){
            arr.push_back(n-right[i]);
        }
        int max1=INT_MIN;
        for(int i=0; i<k; i++ ){
            if(arr[i]>max1){
                max1=arr[i];// damn machaya machaya
            }
        }
        for(int i=0; i<left.size(); i++){
            if(left[i]>max1){
                max1=left[i];
            }
        }
        return max1;
    }
};