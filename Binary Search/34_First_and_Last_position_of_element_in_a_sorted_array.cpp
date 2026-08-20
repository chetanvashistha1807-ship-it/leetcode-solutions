class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int high = n - 1;
        int low = 0;
        int mid;
        int lb = -1;
        int ub = n;

        while (low <= high) {
            mid = (low + high) / 2;

            if (nums[mid] >= target) {
                high = mid - 1;
                lb = mid;
            } else {
                low = mid + 1;
            }
        }

        high = n - 1;
        low = 0;

        while (low <= high) {
            mid = (low + high) / 2;

            if (nums[mid] > target) {
                high = mid - 1;
                ub = mid;
            } else {
                low = mid + 1;
            }
        }

        if (lb == -1 || nums[lb] != target)
            return {-1, -1};

        return {lb, ub - 1};
    }
};