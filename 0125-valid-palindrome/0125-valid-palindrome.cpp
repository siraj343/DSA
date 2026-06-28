class Solution {
public:
    bool check(int i, string &s) {
        if (i >= s.size() / 2)
            return true;

        if (s[i] != s[s.size() - i - 1])
            return false;

        return check(i + 1, s);
    }

    bool isPalindrome(string s) {

        string str = "";

        for (char ch : s) {
            if (isalnum(ch)) {
                str += tolower(ch);
            }
        }

        return check(0, str);
    }
};