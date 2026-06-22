class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash1[256] = {0};
        int hash2[256] = {0};
        int n = s.size();
        int m = t.size();

        if(n!=m)return false;
        for(int i=0; i<n; i++){
           hash1[s[i]]++;
           hash2[t[i]]++;

        }

        for(int i=0; i<256; i++){
            if(hash1[i]!=hash2[i])return false;
            
        }
        return true;
    }
};