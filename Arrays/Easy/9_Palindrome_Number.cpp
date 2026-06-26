class Solution {
public:

    bool f(int i, string&s){
        if(i>=s.size())return true;
        if(s[i]!=s[s.size()-i-1])return false;
        return f(i+1, s);
    }
    bool isPalindrome(int x) {
        string s= to_string(x);

        int i = 0;
       return f(i,s);
    }
};