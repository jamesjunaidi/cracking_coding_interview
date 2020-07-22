class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0;
        while (true) {
            if (x == 0 && y == 0)
                break; 
            int bitx, bity;
            bitx = x & 0b1;
            bity = y & 0b1;
            if (bitx != bity)
                ++count;
            x = x>>1;
            y = y>>1;
        }
        return count; 
    }
};
