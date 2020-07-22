class Solution {
public:
    int reverse(int x) {
        string s;
        int ans;
        s = to_string(abs(x));
        int sign = 1;
        if (s[0] == '-')
            sign = -1;
        int i;
        
        for (int i = 0; i < s.size()/2; ++i) {
            char temp;
            temp = s[i];
            s[i] = s[s.size() - 1 - i];
            s[s.size() - 1 - i] = temp;
        }
        
        try {
            ans = stoi(s);
        } catch (exception &e) {
            return 0;
        }
        
        if (x < 0)
            return -1 * ans;
        else
            return ans;
    }
};
