//Upper and Lower bound method

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

//Tc -- o(2logn)
//SC -- O(1)

//Normal Binary Search code
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first = n;
        int high = n-1;
        int low = 0;
        int mid;
        int last = -1;

       

        while(low<=high){
            mid = (low+high)/2;
            if(nums[mid]==target && mid<first){
                first = mid;
                high = mid-1;
            } else if(nums[mid]<target)low = mid+1;
            else high = mid-1;
        } 

        low = 0;
        high = n-1;

        while(low<=high){
            mid = (low+high)/2;
            if(nums[mid]==target && mid>last){
                last = mid;
                low = mid+1;
            } else if(nums[mid]<target)low = mid+1;
            else high = mid-1;
        } 
        
         if(first == n)
        return {-1, -1};
        
        if(nums[first]!=target)return{-1,-1};
        else return {first,last};
        
        
           }
};