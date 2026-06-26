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


// To Print the subarray with maximum sum:-

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int sum = 0;

        int start = 0;
        int end = 0;
        int tempStart = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if (sum > maxi) {
                maxi = sum;
                start = tempStart;
                end = i;
            }

            if (sum < 0) {
                sum = 0;
                tempStart = i + 1;
            }
        }

        // Print the subarray
        cout << "Maximum Subarray: ";
        for (int i = start; i <= end; i++) {
            cout << nums[i] << " ";
        }
        cout << endl;

        return maxi;
    }
};