

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> hash(nums.size() + 1, 0);
        vector<int>final;
        for(int i=0; i<nums.size(); i++){
            hash[nums[i]]++;
        }
       
        for(int i=1; i<nums.size()+1; i++){
            if(hash[i]==0)final.push_back(i);
        } return final;
    }
};



