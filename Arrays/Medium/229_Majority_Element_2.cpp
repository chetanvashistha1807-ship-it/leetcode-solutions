//Brute Solution = use nessted loops

//Better Solution = using hashing

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
         unordered_map<int,int>mp;

        for(int i =0; i<n; i++){
            mp[nums[i]]++;
        }

        for(auto it : mp){
            if(it.second>n/3)ans.push_back(it.first);
        }

        return ans;
    }
};

//Optimal solution using Boyer Moore Voting Algorithm

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int candidate1 = 0, candidate2 = 0;
        int count1 = 0, count2 = 0;

        for (int x : nums) {

            if (x == candidate1)
                count1++;

            else if (x == candidate2)
                count2++;

            else if (count1 == 0) {
                candidate1 = x;
                count1 = 1;
            }

            else if (count2 == 0) {
                candidate2 = x;
                count2 = 1;
            }

            else {
                count1--;
                count2--;
            }
        }

        count1 = 0;
        count2 = 0;

        for (int x : nums) {
            if (x == candidate1)
                count1++;
            else if (x == candidate2)
                count2++;
        }

        vector<int> ans;

        if (count1 > nums.size() / 3)
            ans.push_back(candidate1);

        if (count2 > nums.size() / 3)
            ans.push_back(candidate2);

        return ans;
    }
};