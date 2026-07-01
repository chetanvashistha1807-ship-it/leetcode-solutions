class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi = 0;
        int m = accounts.size();
        int n = accounts[0].size();
        int jmax = -1;

        for (int i = 0; i < m; i++) {
            
            int wealth = 0;
            for (int j = 0; j < n; j++) {
                wealth = wealth + accounts[i][j];
            }
            maxi = max(maxi, wealth);
        }

        return maxi;
    }
};