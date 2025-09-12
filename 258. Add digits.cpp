class Solution {
public:
    int addDigits(int num) {
        int answer = 0;
        while ( num >= 1)
        {
            answer += (num % 10);
            num = num / 10;
        }
        while (answer >= 10)
        {
            answer = addDigits(answer);
        }
        return answer;
    }
};
