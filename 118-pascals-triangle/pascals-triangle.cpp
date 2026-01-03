class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer;
        for(int i=0;i < numRows; i++){
            vector<int> temp(i+1);
            answer.push_back(temp);
        }
        for(int i=0; i<numRows; i++){
            for(int j=0; j<=i; j++){
                if(i==0 && j==0){
                    answer[i][j]=1;
                }
                if(j==0 || j==i){
                    answer[i][j]=1;
                }
                else{
                    answer[i][j]=answer[i-1][j-1]+answer[i-1][j];
                }
            }
        }
        return answer;
    }
};