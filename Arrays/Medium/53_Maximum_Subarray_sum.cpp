//Brute Force Solution

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++){
                int sum = 0;
            
                for (int k = i; k <= j; k++) {
                    sum += nums[k];
                    maxi = max(sum, maxi);
                }
            }
        }
        return maxi;
    }
};


//Better Solution 
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++){
                
            
                
                    sum += nums[j];
                    maxi = max(sum, maxi);
                }
            }
        
        return maxi;
    }
};


// Optimal Solution - Kadane's Algorithm

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long maxi = LONG_MIN;
        int n = nums.size();
        long long sum = 0;
        for(int i = 0; i<n; i++){
            sum += nums[i];
            maxi = max(sum,maxi);
            if(sum<0)sum=0;
        }
        return maxi;
    }
};
```