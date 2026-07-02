class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int p = 0;
        vector<vector<int>>ans(m,vector<int>(n));
        if (k == 0)
    return grid;
        while(k>p){
        
        for(int i=0; i<m; i++){
            
            for(int j=0; j<n; j++){
                
                if(i==m-1 && j==n-1){
                    ans[0][0]=grid[i][j];
                }
                else if(i!=m-1 && j==n-1){
                    ans[i+1][0]=grid[i][j];
                }
                else {
                    ans[i][j+1]=grid[i][j];
                } 

               
            }
        }
        grid = ans;
         p++;
        
              }
         return ans;
    }
};

//Optimal Solution : - Copied from Chat gpt, didn't understant how?

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> ans(m, vector<int>(n));

        int total = m * n;
        k %= total;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                // Convert current position to 1D index
                int oldIndex = i * n + j;

                // Compute new index after k shifts
                int newIndex = (oldIndex + k) % total;

                // Convert back to 2D coordinates
                int newRow = newIndex / n;
                int newCol = newIndex % n;

                ans[newRow][newCol] = grid[i][j];
            }
        }

        return ans;
    }
};