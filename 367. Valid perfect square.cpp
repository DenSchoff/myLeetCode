class Solution {
public:
    bool isPerfectSquare(int num) {
        long int n = num;
        while (n*n > num)
        {
            n = n / 2;
        }
        while (n*n < num)
        {
            n++;
        }
        if (n*n != num) return false;
        return true;
    }
};
