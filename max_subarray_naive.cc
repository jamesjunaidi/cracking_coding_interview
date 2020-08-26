class Solution {
public:
    int vsum(vector<int> v) {
        int sum = 0;
        for (int i = 0; i < v.size(); ++i) {
            sum += v[i];
        }
        return sum;
    }
    int maxSubArray(vector<int>& nums) {
        vector<vector<int>> subs;
        for (int i = 0; i < nums.size(); ++i) {
            vector<int> a = {nums[i]};
            subs.push_back(a);
            for (int j = i+1; j < nums.size(); ++j) {
                a.push_back(nums[j]);
                subs.push_back(a);
            }
        }
        
        int max = INT_MIN;
        for (auto v : subs) {
            int buf = vsum(v);
            if (max < buf)
                max = buf;
        }
        
        return max;
    }
};