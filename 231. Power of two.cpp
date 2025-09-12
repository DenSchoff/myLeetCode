class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;
        for (short unsigned int i = 0; i < 32; i++)
        {
            if (n == pow(2, i))
            {
                return true;
                break;
            }
        }
        return false;
    }
};
