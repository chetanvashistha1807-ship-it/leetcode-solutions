class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m = s1.length();
        int n = s2.length();

        if (m > n) return false;

        vector<int> hash1(26, 0);
        vector<int> hash2(26, 0);

        for (int i = 0; i < m; i++) {
            hash1[s1[i] - 'a']++;
            hash2[s2[i] - 'a']++;
        }

        if (hash1 == hash2)
            return true;

        int i = m;

        while (i < n) {
            hash2[s2[i] - 'a']++;
            hash2[s2[i - m] - 'a']--;

            if (hash1 == hash2)
                return true;

            i++;
        }

        return false;
    }
};