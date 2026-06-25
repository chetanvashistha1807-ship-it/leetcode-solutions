class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int j = 0;
        vector<int>st;
        int i=0;
        while(i<n){
           if(nums[i]==target){st.push_back(i);
           }
           i++;
     }  if(st.empty())return{-1,-1};
     return {*st.begin(), *st.rbegin()};
     
                
    }
};