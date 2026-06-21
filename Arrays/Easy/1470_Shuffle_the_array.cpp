class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> temp1(n);
        vector<int> temp2(n);
        for(int i=0; i<n; i++){
            temp1[i]=nums[i];
            temp2[i]=nums[n+i];
        }
        int k=0;
        int l=0;
        for(int j=0; j<2*n; j++){
            if(j%2==0){nums[j]=temp1[k];
            k++;} else{nums[j]=temp2[l];
            l++;}
        }
        
    return nums;
    }
};