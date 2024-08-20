class Solution {
public:
    bool backspaceCompare(std::string s, std::string t) {
        int i = 0, j = 0;
        while (i < s.size()) {
            if (s[i] == '#') {
                if (i > 0) {
                    s.erase(i - 1, 2);
                    i -= 2;
                } else {
                    s.erase(i, 1);
                    i--;
                }
            }
            i++;
        }

        while (j < t.size()) {
            if (t[j] == '#') {
                if (j > 0) {
                    t.erase(j - 1, 2);
                    j -= 2;
                } else {
                    t.erase(j, 1);
                    j--;
                }
            }
            j++;
        }

        return s == t;
    }
};
