class Solution {
public:
    bool isPowerOfFour(int n) {
        bool answer = true;
        if (n < 1) return false;
        while ( n > 1)
        {
            if (n % 4 != 0) {answer = false; break;}  
            n = n / 4;
        }
        return answer;
    }
};
