/* Brute 


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }

        for(auto it:mp){
            if(it.second>=2)return true;
        } return false;
    }
}; */


//Optimal

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int x : nums){
            mp[x]++;
            if(mp[x] > 1) return true;
        }

        return false;
    }
};