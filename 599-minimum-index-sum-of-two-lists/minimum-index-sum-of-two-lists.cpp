class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int min_ind = INT_MAX;

        for(int i =0; i<list1.size(); i++){
            for(int j =0; j< list2.size(); j++){
                if(list1[i]==list2[j]){
                    min_ind=min(i+j,min_ind);
                }
            }
        }

        vector<string> ans;
        for(int i=0; i<list1.size(); i++){
            for(int j =0; j<list2.size(); j++){
                if(i+j==min_ind && list1[i]==list2[j]){
                    ans.push_back(list2[j]);
                }
            }
        }
        return ans;


    }
};