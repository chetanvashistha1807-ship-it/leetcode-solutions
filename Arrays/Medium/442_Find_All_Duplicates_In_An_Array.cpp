class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>hash(nums.size()+1,0);
        for(int i=1; i<nums.size(); i++){
            hash[nums[i]]++;
        }
        vector<int>final;
        for(int i=0; i<nums.size()+1; i++){
         if(hash[i]>1)final.push_back(i);
        }
        return final;
    }
};