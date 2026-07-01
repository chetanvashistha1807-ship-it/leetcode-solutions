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