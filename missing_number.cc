class Solution {
public:
    int real(int n) {
        int sum = 0;
        for (int i = 0; i <= n; ++i) {
            sum += i;
        }
        return sum;
    }
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        for (int & a : nums) {
            sum += a;
        }
        return (real(nums.size()) - sum);
    }
};
