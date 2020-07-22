class Solution {
public:
    int firstUniqChar(string s) {
        if (s.size() == 1)
            return 0;
        for (int i = 0; i < s.size(); ++i) {
            for (int j = 0; j < s.size(); ++j) {
                if (s[i] == s[j] && j != i)
                    break;
                else if (j == s.size() - 1)
                    return i;
            }
        }
        return -1;
    }
};  
