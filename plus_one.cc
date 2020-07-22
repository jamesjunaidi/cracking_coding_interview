class Solution {
public:
    void shift(vector<int>& digits) {
        vector<int> v;
        v.push_back(1);
        if (digits[0] == 9) {
            v.push_back(0);
            for (int i = 1; i < digits.size(); ++i) {
                v.push_back(digits[i]);
            }
        } else {
            for (int i = 0; i < digits.size(); ++i) {
                v.push_back(digits[i]);
            }
        }
        digits = v;
    }
    vector<int> plusOne(vector<int>& digits) {
        int i = 1;
        bool complete = false;
        if (digits.size() == 1 && digits[0] != 9) {
            digits[0] = digits[0] + 1;
            return digits;
        }
        while (!complete) {
            if (i == digits.size() && digits[digits.size() - i] == 9) {
                shift(digits);
                complete = true;
                break;
            }
            if (digits[digits.size() - i] < 9) {
                digits[digits.size() - i] = digits[digits.size() - i] + 1;
                complete = true;
                break;
            } else {
                digits[digits.size() - i] = 0;
            }
            ++i;
        }
        return digits;
    }
};
