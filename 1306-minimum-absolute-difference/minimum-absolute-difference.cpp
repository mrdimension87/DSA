class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n= arr.size();
        int min_diff=arr[n-1]-arr[0];

        for(int i=0; i<n-1; i++){
            min_diff=min(min_diff,arr[i+1]-arr[i]);
        }

        vector<vector<int>> ans;

        for(int i=0; i<n-1; i++){
            vector<int> temp;
            if(arr[i+1]-arr[i]==min_diff){
                temp.push_back(arr[i]);
                temp.push_back(arr[i+1]);
            }
            if(temp.size()!=0) ans.push_back(temp);
        }

        return ans;
    }
};