class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            swap(nums1, nums2);
        }

        unordered_set<int> st(nums1.begin(), nums1.end());
        unordered_set<int> res;

        for (int x : nums2) {
            if (st.find(x) != st.end()) {
                res.insert(x);
            }
        }

        return vector<int>(res.begin(), res.end());
    }
};