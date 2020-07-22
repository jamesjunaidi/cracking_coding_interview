class Solution {
public:
    bool isPowerOfThree(int n) {
        double a = n;
        while (a > 1) {
            a = a/(double)3;
        }
        if (a == 1)
            return true;
        return false;
    }
};
