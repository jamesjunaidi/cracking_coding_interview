class Solution {
public:
    bool isAnagram(string s, string t) {
        multiset<char> a, b;
        for (char i : s) {
            a.insert(i);
        }
        for (char i : t) {
            b.insert(i);
        }
        return a == b;
    }
};
