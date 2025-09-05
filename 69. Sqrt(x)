class Solution {
public:
    int mySqrt(int x) {
        long int helper = x;
        while (helper * helper > x) helper = helper / 2;
        while ((helper+1)*(helper+1) <= x) helper += 1;
        return helper;
    }
};
