class Solution {
public:
    bool isPalindrome(int x) {
        bool answer = true;
        if (x < 0) answer = false;
        int64_t num = x;
        int64_t new_num = 0;
        while(num > 0)
        {
            new_num = new_num*10 + (num % 10);
            num = num/10;
        }
        while(x>0)
        {
            if (x % 10 != new_num % 10) answer = false;
            x = x/10;
            new_num = new_num/10;
        }
    return answer;
    }
};
