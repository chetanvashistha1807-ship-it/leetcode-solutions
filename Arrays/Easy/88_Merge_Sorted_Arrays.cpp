//Brute
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     for(int i = m; i<m+n; i++){

        nums1[i]= nums2[i-m];
     }
     sort(nums1.begin(),nums1.end());
    
        
    }
};


//Other Brute Solution - TC (M+N), SC O(M+N)
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>nums3;
        
        int left = 0;
        int right = 0;

        while(left<m && right<n){
            if(nums1[left]<nums2[right]){
                nums3.push_back(nums1[left]);
                left++;
            } else {
                nums3.push_back(nums2[right]);
                right++;
            }

        }

        while(left<m){
            nums3.push_back(nums1[left]);
            left++;
        }

        while(right<n){
            nums3.push_back(nums2[right]);
            right++;
        }

        for(int i = 0; i<m+n; i++){
            nums1[i] = nums3[i];
        }
    }
};

