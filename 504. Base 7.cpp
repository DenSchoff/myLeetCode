class Solution {
public:
    string convertToBase7(int num) {
        string answer = "";
        bool negative = false;
        if (num < 0) {
            negative = true;
            num = -num;
        }
        while (num > 0)
        {
            answer = (char)( '0' + num % 7) + answer;
            num = num / 7;
        }
        if (negative == true) answer = '-' + answer;
        if (empty(answer)) return "0";
        return answer; 
    }
};
