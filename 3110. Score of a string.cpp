class Solution {
public:
    int scoreOfString(string s) {
        uint16_t answer = 0;
        for (uint8_t i = 0; i < s.length()-1; i++)
        {
            answer += max(s[i], s[i+1]) - min(s[i], s[i+1]);
        }
        return answer;
    }
};
