class Solution {
public:

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0;
        int no_rows = matrix.size();
        int no_cols = matrix[0].size();
        int high = no_rows*no_cols-1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int col = mid%no_cols;
            int row = mid/no_cols;
            if (matrix[row][col] == target){
                return true;  
            }        
            else{ 
                if (matrix[row][col] < target){
                    low = mid + 1;
                }       
                else{
                    high = mid - 1;  
                }
            }    
        }

        return false; 
    }
};