// Brute Solution

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int>leftsum(n);
        vector<int>rightsum(n);
        vector<int>ans(n);
        leftsum[0]=0;
        rightsum[n-1]=0;
        for(int i=1; i<n; i++){
            leftsum[i]=nums[i-1]+leftsum[i-1];
            
        }

        for(int i=n-2; i>=0;i--){
            rightsum[i]=nums[i+1]+rightsum[i+1];
        }

        for(int i=0; i<n; i++){
            if(leftsum[i]>rightsum[i])
            ans[i] = leftsum[i]-rightsum[i];

            else ans[i]=rightsum[i]-leftsum[i];
        }

        return ans;
    }
};

//Optimal Solution:- I didn't understood how the hell this algo works. It's 1 am currently, just completing it for the sake of it.

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(n);

        int totalSum = 0;
        for (int x : nums)
            totalSum += x;

        int leftSum = 0;

        for (int i = 0; i < n; i++) {

            int rightSum = totalSum - leftSum - nums[i];

            ans[i] = abs(leftSum - rightSum);

            leftSum += nums[i];
        }

        return ans;
    }
};