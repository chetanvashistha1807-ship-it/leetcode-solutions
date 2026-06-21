class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int i,j;
        for(i=0; i<n; i++){
            for(j=i+1; j<n; j++){
                if(nums[i]+nums[j]==target){
                    return{i,j};
                }
            }
        }

        vector<int>ans;
        ans.push_back(i);
        ans.push_back(j);

        return ans;
    }
};