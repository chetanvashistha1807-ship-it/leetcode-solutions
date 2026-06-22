class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n = ransomNote.size();
        int m = magazine.size();
        if (n > m)
            return false;

        int hash1[256] = {0};
        int hash2[256] = {0};
        for (int i = 0; i < n; i++) {
            hash1[ransomNote[i]]++;

        }
        for(int i=0; i<m; i++){
            hash2[magazine[i]]++;
        }
        for(int i=0; i<256; i++){
            if(hash1[i]>hash2[i])return false;
            
        }return true;
    }
};