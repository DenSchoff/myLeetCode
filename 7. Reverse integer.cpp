class Solution {
public:
    int reverse(int x) {
        long int answer = 0;
        while (x != 0)
        {
            answer = (answer * 10) + (x % 10);
            x = x / 10;
        }
        if (answer > INT_MAX || answer < INT_MIN) return 0;
        if (x < 0) return answer * (-1);
        return answer;
    }
};
