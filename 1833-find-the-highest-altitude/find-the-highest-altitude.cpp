class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0;
        int max1=0;
        for(int i=0; i<gain.size(); i++){
            sum+=gain[i];
            if(sum>max1){
                max1=sum;
            }
        }
        return max1;
    }
};