//Optimal Solution Using Sliding Window:- More Straightforward but less readable for interviews


class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int vowels = 0;

        for (int i = 0; i < k; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                vowels++;
        }

        int maxi = vowels;

        for (int i = k; i < n; i++) {
            if ((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') &&
                !(s[i-k] == 'a' || s[i-k] == 'e' || s[i-k] == 'i' || s[i-k] == 'o' || s[i-k] == 'u')) {

                vowels++;
                maxi = max(maxi, vowels);
            }

            else if (!(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') &&
                     (s[i-k] == 'a' || s[i-k] == 'e' || s[i-k] == 'i' || s[i-k] == 'o' || s[i-k] == 'u')) {

                vowels--;
                maxi = max(maxi, vowels);
            }

            else {
                vowels = vowels;
                maxi = max(vowels, maxi);
            }
        }

        return maxi;
    }
};

//Optimal Solution with Same approach yet better readability using a helper function

class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' ||
               c == 'o' || c == 'u';
    }

    int maxVowels(string s, int k) {
        int n = s.size();
        int vowels = 0;

        for (int i = 0; i < k; i++) {
            if (isVowel(s[i]))
                vowels++;
        }

        int maxi = vowels;

        for (int i = k; i < n; i++) {
            if (isVowel(s[i]) && !isVowel(s[i - k])) {
                vowels++;
                maxi = max(maxi, vowels);
            }

            else if (!isVowel(s[i]) && isVowel(s[i - k])) {
                vowels--;
                maxi = max(maxi, vowels);
            }

            else {
                maxi = max(maxi, vowels);
            }
        }

        return maxi;
    }
};