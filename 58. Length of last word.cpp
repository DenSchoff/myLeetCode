class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s.length() <= 0) return 0;
        if (s.length() == 1 && s != " ") return 1;
        int answer = 0;
        int i = s.length() - 1;

        while( s[i] == ' ' && i >= 0)
        {
            if (i == 0) break;
            i--;
        }
        while ( s[i] != ' ' && i >= 0)
        {
            answer++;
            if (i == 0) break;
            i--;
        }

        return answer;
    }
};
