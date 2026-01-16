class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int k= right.size();
        int max1=INT_MIN;
        for(int i=0; i<k; i++ ){
            if(n-right[i]>max1){
                max1=n-right[i];
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