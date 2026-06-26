//Brute


class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        map<int,int>mpp;
        vector<int>ans;
        int n = nums.size();
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        
        for(int i=0; i<n; i++){
            int x = nums[i];
            if(mpp[x-1]==0 && mpp[x+1]==0 && mpp[x]==1){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};

//Optimal solution

class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> ans;
        int n = nums.size();

        if (n == 1) {
            ans.push_back(nums[0]);
            return ans;
        }

        // First element
        if (nums[0] != nums[1] && nums[0] + 1 != nums[1]) {
            ans.push_back(nums[0]);
        }

        // Middle elements
        for (int i = 1; i < n - 1; i++) {
            if (nums[i] != nums[i - 1] &&
                nums[i] != nums[i + 1] &&
                nums[i - 1] + 1 != nums[i] &&
                nums[i] + 1 != nums[i + 1]) {

                ans.push_back(nums[i]);
            }
        }

        // Last element
        if (nums[n - 1] != nums[n - 2] &&
            nums[n - 2] + 1 != nums[n - 1]) {

            ans.push_back(nums[n - 1]);
        }

        return ans;
    }
};