class Solution {
public:
    string reverse(string s) {
        for (int i = 0; i < s.size()/2; ++i) {
            char t = s[i];
            s[i] = s[s.size()-1-i];
            s[s.size()-1-i] = t;
        }
        
        return s;
    }
    
    string reverseWords(string s) {
        if (s.size() == 0)
            return s;
        stringstream ss(s);
        string ans = "";
        string word;
        while (ss >> word) {
            ans += reverse(word);
            ans += " ";
        }
        ans.erase(ans.begin() + ans.size()-1);
        
        return ans;
    }
};
