//Better Solution


class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> negative(n / 2);
        vector<int> positive(n / 2);
        int j = 0;
        int k = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] >= 0) {
                positive[j] = nums[i];
                j++;
            } else {
                negative[k] = nums[i];
                k++;
            }
        }
        for (int i = 0; i < n / 2; i++) {
            nums[2 * i] = positive[i];
            nums[2 * i + 1] = negative[i];
        }
        return nums;
    }
};

//Optimal Solution