class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int high = n-1;
        int low = 0;
        int mid;

        while(low<=high){
            mid = (high+low)/2;

            if(nums[mid]<target)low = mid + 1;
            else high = mid - 1;
        }

        return low;
    }
};

//o(logn)--tc
//o(1)--sc