/* 
Brute Solution- By using merge sort

Better solution

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0)count0++;
            if(nums[i]==1)count1++;
            if(nums[i]==2)count2++;
        }

        for(int i=0; i<nums.size(); i++){
            if(i<count0)nums[i]=0;
            else if(i>=count0 && i<count0+count1)nums[i]=1;
            else nums[i]=2;
        }
    }
}; */


//More Optimal solution in just one pass- Dutch National Flag Algorithm.


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n-1;

        while(mid<=high){
            if(nums[mid]==0){swap(nums[low],nums[mid]);
            low++;
            mid++;}
           else if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[high],nums[mid]);
                high--;

            }
        }
    }
};