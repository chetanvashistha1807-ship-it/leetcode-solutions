//Optimal Solution

class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int width = to_string(grid[0][0]).size();
        int maxi;
        vector<int>colwidth(n);
        
        for(int j=0; j<n; j++){
            maxi = 0;
            for(int i=0; i<m; i++){
             width = to_string(grid[i][j]).size();
             maxi = max(maxi, width);
            }
            colwidth[j] = maxi;
        }
        return colwidth;
    }
};