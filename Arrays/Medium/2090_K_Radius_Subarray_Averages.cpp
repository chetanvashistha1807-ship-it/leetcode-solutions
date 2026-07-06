//Optimal Solution

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>avg;
        long long sum = 0;

        if(n<2*k+1){
            for(int i = 0; i<n; i++){
                avg.push_back(-1);
            }
        }
        
        else{
        for(int i =0; i<k; i++){
            avg.push_back(-1);
        }

        for(int i = 0; i<2*k+1;i++){
         sum = sum + nums[i];
        }
        int ave = sum/(2*k+1);
        avg.push_back(ave);

        for(int i = k+1; i<n-k; i++){
            sum = sum + nums[i+k]- nums[i-k-1];
            ave = sum/(2*k+1);
            avg.push_back(ave);
        }

        for(int i = n-k; i<n; i++){
            avg.push_back(-1);
        }
        }
        return avg;

        

    }
};