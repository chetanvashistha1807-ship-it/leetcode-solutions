// Brute force solution

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            int left = 0;
            for (int j = 0; j < i; j++) {
                left += nums[j];
            }

            int right = 0;
            for (int j = i + 1; j < n; j++) {
                right += nums[j];
            }

            if (left == right)
                return i;
        }

        return -1;
    }
};

//Optimal Solution

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum = 0;
        int totalsum = 0;
        for (int i = 0; i < nums.size(); i++) {
            totalsum += nums[i];
        }

        for (int j = 0; j < nums.size(); j++) {
            int rightsum = totalsum - leftsum - nums[j];
            if (rightsum == leftsum)
                return j;
            leftsum += nums[j];
        }

        return -1;
    }
};