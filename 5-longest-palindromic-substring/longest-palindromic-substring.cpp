class Solution {
    int expansion(const string& s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        return right - left - 1;
    }

public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";

        int start = 0;
        int maxlength = 1;

        for (int i = 0; i < s.size(); i++) {
            int len1 = expansion(s, i, i);         // Odd length palindrome
            int len2 = expansion(s, i, i + 1);     // Even length palindrome
            int currentlen = max(len1, len2);

            if (currentlen > maxlength) {
                maxlength = currentlen;
                start = i - (currentlen - 1) / 2;
            }
        }

        return s.substr(start, maxlength);
    }
};