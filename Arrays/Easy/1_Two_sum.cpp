/*  Brute solution

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
}; */

//Better 
/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    map<int,int>mpp;
    int n= nums.size();
    for(int i=0; i<n; i++){
        int num=nums[i];
        int moreneeded= target-num;
        if(mpp.find(moreneeded)!=mpp.end()){
            return{mpp[moreneeded],i};
        }
        mpp[num]=i;
    }
    return{-1,-1};
    }
}; */

//Most Optimal- USING 2 POINTER'S APPROACH

