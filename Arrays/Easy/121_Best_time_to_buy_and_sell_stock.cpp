//Brute Force Solution 

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int n = prices.size();
        int maxProfit = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (prices[j] > prices[i]) {
                    profit = prices[j] - prices[i];
                    maxProfit = max(profit, maxProfit);
                }
            }
        }
        return maxProfit;
    }
};

//Optimal Solution

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int  mini = prices[0];
        int profit = 0;
        int maxProfit = 0;

        for(int i=1; i<n; i++){
            profit = prices[i]-mini;
           maxProfit = max(maxProfit,profit);
           mini = min(mini,prices[i]);
        }
        return maxProfit;
    }
};