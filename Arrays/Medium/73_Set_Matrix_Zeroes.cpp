//Original Brute Force Approach- Fails in some cases

class Solution {
public:


    void markrow(vector<vector<int>>& matrix, int i, int cols){
        for(int j=0; j<cols; j++){
            if(matrix[i][j]!=0)matrix[i][j]=-1;
        }
    }


    void markcols(vector<vector<int>>& matrix, int j, int row){
        for(int i=0; i<row; i++){
            if(matrix[i][j]!=0)matrix[i][j]=-1;
        }
    }


    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int cols= matrix[0].size();

        for(int i=0;  i<row; i++){
            for(int j=0; j<cols; j++){
                if(matrix[i][j]==0){
                markrow(matrix,i,cols);
                markcols(matrix,j,row);}
            }
        }

        for(int i=0; i<row; i++){
            for(int j=0; j<cols; j++){
                if(matrix[i][j]==-1)matrix[i][j]=0;
            }
        }
    }
};


//Better solution:- works in all cases

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();

        vector<int>row(m,0);
        vector<int>col(n,0);

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(row[i]==1 || col[j]==1){
                    matrix[i][j]=0;
                }
            }
        }
    }
};


//OPTIMAL SOLUTION

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        bool firstRow = false;
        bool firstCol = false;

        // Check if first row has any zero
        for (int j = 0; j < n; j++) {
            if (matrix[0][j] == 0) {
                firstRow = true;
                break;
            }
        }

        // Check if first column has any zero
        for (int i = 0; i < m; i++) {
            if (matrix[i][0] == 0) {
                firstCol = true;
                break;
            }
        }

        // Use first row and first column as markers
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Set elements to zero based on markers
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Zero the first row if needed
        if (firstRow) {
            for (int j = 0; j < n; j++) {
                matrix[0][j] = 0;
            }
        }

        // Zero the first column if needed
        if (firstCol) {
            for (int i = 0; i < m; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};