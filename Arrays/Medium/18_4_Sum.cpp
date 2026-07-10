//Brute Force Solution

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();

        set<vector<int>> st;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    for (int l = k + 1; l < n; l++) {

                        long long sum = nums[i];
                        sum += nums[j];
                        sum += nums[k];
                        sum += nums[l];

                        if (sum == target) {
                            vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                            sort(temp.begin(), temp.end());
                            st.insert(temp);
                        }
                    }
                }
            }
        }

        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};

// better solution : - using hash set

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> st;

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                unordered_map<int, int> mp;

                for(int k = j + 1; k < n; k++) {
                    long long fourth = (long long)target - nums[i] - nums[j] - nums[k];

                    if(fourth >= INT_MIN && fourth <= INT_MAX &&
                       mp.find((int)fourth) != mp.end()) {

                        vector<int> temp = {nums[i], nums[j], nums[k], (int)fourth};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }

                    mp[nums[k]]++;
                }
            }
        }

        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};

