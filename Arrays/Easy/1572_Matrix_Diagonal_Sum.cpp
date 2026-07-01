//Better solution
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int sum = 0;

        for(int i=0; i<m; i++){
            for(int j = 0; j<n; j++){
                if( i==j)sum = sum+mat[i][j];
            }
        }
       int i = m-1;
       int j = 0;
        while(i>=0){
            if(i!=j)sum = sum + mat[i][j];
            i--;
            j = n - 1 - i;
        }

        return sum;
    }
};

//Optimal Solution

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += mat[i][i];

            if (i != n - 1 - i) {
                sum += mat[i][n - 1 - i];
            }
        }

        return sum;
    }
};