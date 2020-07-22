class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        multiset<int> m;
        for (int i = 0; i < nums.size(); ++i) {
            m.insert(nums[i]);
        }
        for (auto &a : m) {
            if (m.count(a) > 1)
                return true;
        }
        return false;
    }
};
