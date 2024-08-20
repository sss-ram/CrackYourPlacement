class Solution {
public:
    bool validPalindrome(string s) {
        int i = 0, j = s.length() - 1;
        int val = 0;

        while (i < j) {
            if (s[i] != s[j]) {
                if (val == 1)
                    return false;
                return (isPalindrome(s, i + 1, j) || isPalindrome(s, i, j - 1));
            }
            i++;
            j--;
        }
        return true;
    }
    bool isPalindrome(string s, int i, int j) {
        while (i < j) {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }

};
