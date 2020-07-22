class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'I')
                ++ans;
           
            if (s[i] == 'V') {
                if (i > 0) {
                    if (s[i-1] == 'I')
                        ans += 3;
                    else
                        ans += 5;
                } else {
                    ans += 5;
                }
            }
            if (s[i] == 'X') {
                if (i > 0) {
                    if (s[i-1] == 'I')
                        ans += 8;
                    else 
                        ans += 10;
                } else {
                    ans += 10;
                }
            }
            
            if (s[i] == 'L') {
                if (i > 0) {
                    if (s[i-1] == 'X')
                        ans += 30;
                    else
                        ans += 50;
                } else {
                    ans += 50;
                }
            }
            if (s[i] == 'C') {
                if (i > 0) {
                    if (s[i-1] == 'X')
                        ans += 80;
                    else
                        ans += 100;
                } else {
                    ans += 100;
                }
            }
            
            if (s[i] == 'D') {
                if (i > 0) {
                    if (s[i-1] == 'C')
                        ans += 300;
                    else
                        ans += 500;
                } else {
                    ans += 500;
                }
            }
            if (s[i] == 'M') {
                if (i > 0) {
                    if (s[i-1] == 'C')
                        ans += 800;
                    else
                        ans += 1000;
                } else {
                    ans += 1000;
                }
            }
        }
        return ans;
    }
};
