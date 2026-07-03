//Brute Force Solution

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> ans(m, vector<int>(n));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                ans[j][n - 1 - i] = matrix[i][j];
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = ans[i][j];
            }
        }
    }
};

//Optimal Solution

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
      
       //Step 1 :- Transpose
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (j > i) {
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
        } 
        //Step 2 : - Row Reversal

        for(int i =0; i<m; i++){
            for(int j =0; j<n; j++){
                if(j<n/2){
                swap(matrix[i][j],matrix[i][n-j-1]);
            }
        }








    }}
    };