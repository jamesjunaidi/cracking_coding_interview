class Solution {
public:
    bool isHappy(int n) {
        int d = 0, sum = 0;
        if (n==1)
            return true;
        else if (n==4)
            return false;
        else {
            while (n!=0) {
                d = n%10;
                n = n/10;
                sum += (d*d);
            }
            return isHappy(sum);
        }
        
    }
};
