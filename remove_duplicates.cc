class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        int cur = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == cur) {
                // remove
                for (int j = i; j < nums.size() - 1; ++j) {
                    nums[j] = nums[j+1];
                }
                nums.pop_back();
                --i;
            } else {
                cur = nums[i];
            }
        }
        return nums.size();
    }
};
