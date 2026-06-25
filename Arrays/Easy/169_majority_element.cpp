class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int>hash;
        for(int i=0; i<n; i++){
            hash[nums[i]]++;
        }
        
       for(auto it:hash){
        if(it.second>n/2)return it.first;
       }
        
        return -1;
        
            }
};


//Moore's Voting Algo

/*int majorityElement(vector<int>& nums) {
    int cnt = 0;
    int el;

    // Moore's Voting Algorithm
    for (int i = 0; i < nums.size(); i++) {
        if (cnt == 0) {
            cnt = 1;
            el = nums[i];
        }
        else if (nums[i] == el) {
            cnt++;
        }
        else {
            cnt--;
        }
    }

    // Verify the candidate
    int cnt1 = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == el)
            cnt1++;
    }

    if (cnt1 > nums.size() / 2) {
        return el;
    }

    return -1;
}*/