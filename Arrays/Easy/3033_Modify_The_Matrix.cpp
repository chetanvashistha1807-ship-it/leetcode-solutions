//Optimal solution

class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        

        vector<int>highest(n);
        for(int j=0; j<n; j++){
            int maxi = 0;
            for(int i=0; i<m; i++){
                maxi = max(maxi,matrix[i][j]);
            }
            highest[j]=maxi;
        }
        
        for(int j=0; j<n; j++){
            for(int i=0; i<m; i++){
                if(matrix[i][j]==-1)matrix[i][j]=highest[j];
            }
            
        }
        return matrix;
    }
};