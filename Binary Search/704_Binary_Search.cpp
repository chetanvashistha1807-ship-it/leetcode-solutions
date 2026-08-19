class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]==target)return i;
        }
        return -1;
    }
};

//Binary Search

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int high = n-1;
        int low = 0;
        int mid;
    

       

        while(low<=high){
            mid = (low + high) / 2;
            if(target == nums[high]) return high;
            if(target == nums[low])return low;
            if(target == nums[mid])return mid;
            if(target>nums[mid]) low = mid+1;
            if(target<nums[mid])high = mid-1;


        }

        return -1;


    }
};


//o(logn) -- TC
//O(1) -- SC


//Recursive implementation

class Solution {
public:
    int binary(vector<int>& nums, int target, int low, int high) {
        // Base case: search space is empty
        if (low > high)
            return -1;

        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
            return mid;

        if (nums[mid] < target)
            return binary(nums, target, mid + 1, high);

        return binary(nums, target, low, mid - 1);
    }

    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        return binary(nums, target, low, high);
    }
};

//o(logn)--TC
//o(logn)--SC