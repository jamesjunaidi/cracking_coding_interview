class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m = nums[0];
        int cur = m;
        for (int i = 1; i < nums.size(); ++i) {
            cur = max(nums[i] + cur, nums[i]);
            m = max(cur, m);
        }
        
        return m;
    }
};