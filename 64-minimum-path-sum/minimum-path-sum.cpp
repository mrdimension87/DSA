class Solution {
public:
    int n,m;
    vector<vector<int>> dp;
    vector<vector<int>> arr;
    
    int fun(int i, int j){
        if(i>= n || j >= m){
            return 1e9;
        }
        if(i==n-1 && j==m-1){
            return arr[i][j];
        }
        if(dp[i][j]!=-1){
            return  dp[i][j];
        }
        else{
            dp[i][j]= arr[i][j]+min(fun(i,j+1),fun(i+1,j));
            return dp[i][j];
        }
    }
    int minPathSum(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();
        arr=grid;
        dp.assign(n, vector<int>(m, -1));

        return fun(0,0);
    }
};