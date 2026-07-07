//Brute Force Solution

class Solution {
public:
    int rev(int num) {
        int rev = 0;

        while (num > 0) {
            int digit = num % 10;
            rev = rev * 10 + digit;
            num /= 10;
        }

        return rev;
    }
    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int i = 0;

        vector<int> revNums(n);

        for (int i = 0; i < n; i++) {
            revNums[i] = rev(nums[i]);
        }

        while (i < n) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + revNums[j] == nums[j] + revNums[i])
                    count++;
            }
            i++;
        }
        return count % (1000000000 + 7);
    }
};

//Optimal Solution - Took everything I had

class Solution {
public:
    int rev(int num) {
        int rev = 0;

        while (num > 0) {
            int digit = num % 10;
            rev = rev * 10 + digit;
            num /= 10;
        }

        return rev;
    }
    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        long long count = 0;
        int i = 0;

        vector<int> revNums(n);
        unordered_map<int,int>mp;

        

        for (int i = 0; i < n; i++) {
            revNums[i] = rev(nums[i]);
        }
        
        for(int i = 0; i<n; i++){
            int key = nums[i]-revNums[i];
            count+=mp[key];
            count = count%1000000007;
            mp[key]++;
        }
        
       



        
        return count ;
    }
};