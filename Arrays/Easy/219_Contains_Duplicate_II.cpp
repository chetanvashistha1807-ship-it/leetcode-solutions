//My Optimal Solution
//I forgot the syntax of set so here it is in vector fform

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;

        vector<int> hash;
        hash.push_back(nums[0]);

        for (int i = 1; i < n && i <= k; i++) {
            if (find(hash.begin(), hash.end(), nums[i]) != hash.end())
                return true;
            hash.push_back(nums[i]);
        }

        for (int i = k + 1; i < n; i++) {
            hash.erase(hash.begin());
            if (find(hash.begin(), hash.end(), nums[i]) != hash.end())
                return true;
            hash.push_back(nums[i]);
        }

        return false;
    }
};




//THE OPTIMAL SOLUTION
//We used unordered set here due to it's low time complexity while searching


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();

        if (n <= 1) return false;

        unordered_set<int> hash;
        hash.insert(nums[0]);

        for (int i = 1; i < n && i <= k; i++) {
            if (hash.find(nums[i]) != hash.end())
                return true;
            hash.insert(nums[i]);
        }

        for (int i = k + 1; i < n; i++) {
            hash.erase(nums[i - k - 1]);

            if (hash.find(nums[i]) != hash.end())
                return true;

            hash.insert(nums[i]);
        }

        return false;
    }
};